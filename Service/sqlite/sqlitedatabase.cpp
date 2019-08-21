#include "sqlitedatabase.h"

SQLiteDatabase::SQLiteDatabase(const QString &databasePath) :
    m_valid(true)
{
    QRandomGenerator randomGenerator(unsigned(QTime(0,0,0).secsTo(QTime::currentTime())));

    do
        m_connectionName = "_C_H_D_B_" + QString::number((randomGenerator.generate() & std::numeric_limits<qint32>::max()));
    while(QSqlDatabase::database(m_connectionName).isValid());

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE", m_connectionName);
    database.setDatabaseName(databasePath);
    database.setHostName("localhost");
    if(!database.open())
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Open the database file failed, at : \"%1\".").arg(databasePath));
        m_valid = false;
    }
};

SQLiteDatabase::~SQLiteDatabase()
{
    close();
    QSqlDatabase::removeDatabase(m_connectionName);
};

bool SQLiteDatabase::isValid()
{
    return m_valid;
};

QStringList SQLiteDatabase::getAllTableNames()
{
    return QSqlDatabase::database(m_connectionName).tables();
};

bool SQLiteDatabase::createTable(const SQLiteTable &table)
{
    if(!isValid())
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Database is not valid."));
        return false;
    }

    if(exists(table.tableName))
    {
        emit sendMessage(MessageType::Warning, "SQLite", tr("Table \"%1\" is already exists, so it won't be created again.").arg(table.tableName));
        return false;
    }

    if(table.columns.size() == 0)
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Cannot create table \"%1\" because it has no column.").arg(table.tableName));
        return false;
    }

    QString sqlSentence = "CREATE TABLE IF NOT EXISTS `";
    sqlSentence += table.tableName;
    sqlSentence += "`(";

    bool autoIndex = false;
    foreach(auto column, table.columns)
    {
        if(!autoIndex && table.hasAutoIncrementIndex)
        {
            sqlSentence += table.primaryKeys[0];
            sqlSentence += " INTEGER PRIMARY KEY AUTOINCREMENT,";
            autoIndex = true;
            continue;
        }

        sqlSentence += QString("`") + column.first + QString("`");
        switch(column.second)
        {
            case SQLiteDataType::INTEGER:
                sqlSentence += " INTEGER ";
            break;

            case SQLiteDataType::REAL:
                sqlSentence += "REAL ";
            break;

            case SQLiteDataType::TEXT:
                sqlSentence += "TEXT ";
            break;
        }

        if(column.first == table.primaryKeys[0])
            sqlSentence += "PRIMARY KEY";
        sqlSentence += ",";
    }
    sqlSentence.replace(sqlSentence.length() - 1, 1, QChar(')'));

    QSqlQuery query(QSqlDatabase::database(m_connectionName));
    if(!query.exec(sqlSentence))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return false;
    }

    return true;
}

bool SQLiteDatabase::insert(const SQLiteTable &table, const QVariantList &recordWithoutAutoIncrementIndex)
{
    if(!isValid())
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Database is not valid."));
        return false;
    }

    if(!exists(table.tableName))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Table \"%1\" is not existing.").arg(table.tableName));
        return false;
    }

    QString sqlSentence = "INSERT INTO `";
    sqlSentence += table.tableName;
    sqlSentence += "` VALUES (";
    if(table.hasAutoIncrementIndex)
        sqlSentence += "NULL,";
    for (int i = 0; i < recordWithoutAutoIncrementIndex.size(); i++)
        sqlSentence += "?,";
    sqlSentence.replace(sqlSentence.length() - 1, 1, QChar(')'));

    QSqlQuery query(QSqlDatabase::database(m_connectionName));
    if(!query.prepare(sqlSentence))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return false;
    }

    foreach(auto value, recordWithoutAutoIncrementIndex)
        query.addBindValue(QVariantList() << value);

    if(!query.execBatch())
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return false;
    }

    return true;
}

bool SQLiteDatabase::update(const SQLiteTable &table, const QStringList &primaryKeyValues, const QString &columnName, const QVariant &value)
{
    QStringList l_primaryKeyValues = primaryKeyValues;
    foreach(auto i, table.columns)
    {
        int id = -1;
        if((id = primaryKeyValues.indexOf(i.first)) != -1)
        {
            if(i.second == SQLiteDataType::TEXT)
                l_primaryKeyValues[id] = QString('\"') + primaryKeyValues[id] + QString('\"');
            break;
        }
    }

    QString condition;
    QString equal = "`%1`=%2";
    for(int i = 0; i < table.primaryKeys.size(); i++)
    {
        condition += equal.arg(table.primaryKeys[i]).arg(l_primaryKeyValues[i]);
        if(i != table.primaryKeys.size() - 1)
            condition += " AND ";
    }

    QString sqlSentence = "UPDATE `%1` SET `%2`=? WHERE %3";
    sqlSentence = sqlSentence.arg(table.tableName).arg(columnName).arg(condition);

    QSqlQuery query(QSqlDatabase::database(m_connectionName));
    if(!query.prepare(sqlSentence))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return false;
    }

    query.addBindValue(QVariantList() << value);
    if(!query.execBatch())
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return false;
    }

    return true;
}

bool SQLiteDatabase::replace(const SQLiteTable &table, const QVariantList &record)
{
    if(!isValid())
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Database is not valid."));
        return false;
    }

    if(!exists(table.tableName))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Table \"%1\" is not existing.").arg(table.tableName));
        return false;
    }

    QString sqlSentence = "REPLACE INTO `";
    sqlSentence += table.tableName;
    sqlSentence += "` VALUES (";
    for (int i = 0; i < record.size(); i++)
        sqlSentence += "?,";
    sqlSentence.replace(sqlSentence.length() - 1, 1, QChar(')'));

    QSqlQuery query(QSqlDatabase::database(m_connectionName));
    if(!query.prepare(sqlSentence))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return false;
    }

    foreach(auto value, record)
        query.addBindValue(QVariantList() << value);

    if(!query.execBatch())
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return false;
    }

    return true;
}

QVariant SQLiteDatabase::read(const SQLiteTable &table, const QStringList &primaryKeyValues, const QString &columnName)
{
    QStringList l_primaryKeyValues = primaryKeyValues;
    foreach(auto i, table.columns)
    {
        int id = -1;
        if((id = primaryKeyValues.indexOf(i.first)) != -1)
        {
            if(i.second == SQLiteDataType::TEXT)
                l_primaryKeyValues[id] = QString('\"') + primaryKeyValues[id] + QString('\"');
            break;
        }
    }

    QString condition;
    QString equal = "`%1`=%2";
    for(int i = 0; i < table.primaryKeys.size(); i++)
    {
        condition += equal.arg(table.primaryKeys[i]).arg(l_primaryKeyValues[i]);
        if(i != table.primaryKeys.size() - 1)
            condition += " AND ";
    }

    QString sqlSentence = "SELECT `%1` FROM `%2` WHERE %3";
    sqlSentence = sqlSentence.arg(columnName).arg(table.tableName).arg(condition);

    QSqlQuery query(QSqlDatabase::database(m_connectionName));
    if(!query.exec(sqlSentence))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return QVariant();
    }
    if(!query.seek(0))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return QVariant();
    }

    return query.value(0);
}

QVariantList SQLiteDatabase::read(const SQLiteTable &table, const QStringList &primaryKeyValues)
{
    QStringList l_primaryKeyValues = primaryKeyValues;
    foreach(auto i, table.columns)
    {
        int id = -1;
        if((id = primaryKeyValues.indexOf(i.first)) != -1)
        {
            if(i.second == SQLiteDataType::TEXT)
                l_primaryKeyValues[id] = QString('\"') + primaryKeyValues[id] + QString('\"');
            break;
        }
    }

    QString condition;
    QString equal = "`%1`=%2";
    for(int i = 0; i < table.primaryKeys.size(); i++)
    {
        condition += equal.arg(table.primaryKeys[i]).arg(l_primaryKeyValues[i]);
        if(i != table.primaryKeys.size() - 1)
            condition += " AND ";
    }

    QString sqlSentence = "SELECT * FROM `%1` WHERE %2";
    sqlSentence = sqlSentence.arg(table.tableName).arg(condition);

    QSqlQuery query(QSqlDatabase::database(m_connectionName));
    QVariantList values;
    if(!query.exec(sqlSentence))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return values;
    }
    if(!query.seek(0))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return values;
    }

    for(int i = 0; i < table.columns.size(); i++)
        values << query.value(i);

    return values;
}

QVariantList SQLiteDatabase::readColumn(const SQLiteTable &table, const QString &columnName, const QString &condition)
{
    QString sqlSentence = "SELECT `%1` FROM `%2` WHERE %3";
    sqlSentence = sqlSentence.arg(columnName).arg(table.tableName).arg(condition);
    QSqlQuery query(QSqlDatabase::database(m_connectionName));
    QVariantList values;
    if(!query.exec(sqlSentence))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return values;
    }

    if(!query.seek(0))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return values;
    }

    do
        values << query.value(0);
    while(query.next());

    return values;
}

QList<QVariantList> SQLiteDatabase::readAll(const SQLiteTable &table, const QString &condition)
{
    QList<QVariantList> valueslist;

    QString sqlSentence = "SELECT * FROM `%1`";
    sqlSentence = sqlSentence.arg(table.tableName);
    if(!condition.isEmpty())
        sqlSentence += " WHERE " + condition;

    QSqlQuery query(QSqlDatabase::database(m_connectionName));
    if(!query.exec(sqlSentence))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return valueslist;
    }

    if(!query.seek(0))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return valueslist;
    }

    do
    {
        QVariantList values;
        for(int i = 0; i < table.columns.size(); i++)
            values << query.value(i);
        valueslist << values;
    }
    while(query.next());

    return valueslist;
}

bool SQLiteDatabase::remove(const QString &tableName, const QString &condition)
{
    QString sqlSentence = "DELETE FROM `%1` WHERE %2";
    sqlSentence = sqlSentence.arg(tableName).arg(condition);

    QSqlQuery query(QSqlDatabase::database(m_connectionName));
    if(!query.exec(sqlSentence))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sqlSentence));
        return false;
    }

    return true;
}

bool SQLiteDatabase::remove(const SQLiteTable &table, const QString &condition)
{
    return remove(table.tableName, condition);
};

bool SQLiteDatabase::exists(const QString &tableName)
{
    return getAllTableNames().contains(tableName);
}

bool SQLiteDatabase::exists(const SQLiteTable &table)
{
    return exists(table.tableName);
}

bool SQLiteDatabase::drop(const QString &tableName)
{
    QSqlQuery query(QSqlDatabase::database(m_connectionName));
    if(!query.exec(QString("DROP TABLE IF EXISTS `") + tableName + QString("`")))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(QString("DROP TABLE IF EXISTS `") + tableName + QString("`")));
        return false;
    }

    return true;
}

bool SQLiteDatabase::drop(const SQLiteTable &table)
{
    return drop(table.tableName);
}

bool SQLiteDatabase::exec(const QString &sentence)
{
    QSqlQuery query(QSqlDatabase::database(m_connectionName));
    if(!query.exec(sentence))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(sentence));
        return false;
    }

    return true;
}

size_t SQLiteDatabase::getRecordNumber(const SQLiteTable &table)
{
    QSqlQuery query(QSqlDatabase::database(m_connectionName));
    if(!query.exec(QString("select * from `%1`").arg(table.tableName)))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(QString("select * from `%1`").arg(table.tableName)));
        return false;
    }

    if(!query.seek(0))
    {
        emit sendMessage(MessageType::Error, "SQLite", tr("Error occurred : %1. Executing : %2.").arg(query.lastError().text()).arg(QString("select * from `%1`").arg(table.tableName)));
        return 0;
    }

    size_t number = 0;
    do
        number++;
    while(!query.next());

    return number;
};

void SQLiteDatabase::close()
{
    QSqlDatabase::database(m_connectionName).close();
    QSqlDatabase::removeDatabase(m_connectionName);
    m_valid = false;
};
