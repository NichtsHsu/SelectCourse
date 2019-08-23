#include "querymodel.h"

QueryModel::QueryModel(const QString &databasePath, const QString &tableName,
                                     const QString &user, const QString &password, int recordNumberPerPage,
                                     QWidget *parent, bool editable) :
    QSqlQueryModel(parent), m_editable(editable), m_recordNumberPerPage(recordNumberPerPage), m_tableName(tableName)
{
    m_connectName = QString("SE_SQL_QUERYMODEL_") + tableName;
    m_currentPage = 0;
    m_maxPage = 0;

    QSqlDatabase database = QSqlDatabase::database(m_connectName);
    if(!database.isValid())
    {
        database = QSqlDatabase::addDatabase("QSQLITE", m_connectName);
        database.setDatabaseName(databasePath);
        database.setHostName("localhost");
        database.setUserName(user);
        database.setPassword(password);
        database.open();
    }

    __modifyTableName();
    m_sentence = QString("SELECT * FROM ") + m_tableName;

    __refresh();
}

QueryModel::~QueryModel()
{
    close();
}

Qt::ItemFlags QueryModel::flags(const QModelIndex &index) const
{
    Qt::ItemFlags flags = QSqlQueryModel::flags(index);

    flags |= Qt::ItemIsDragEnabled;

    if(m_editable && index.column() > 0)
        return (flags |= Qt::ItemIsEditable);
    else
        return (flags &= ~Qt::ItemIsEditable);
}

bool QueryModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if(!m_editable || index.column() == 0)
        return false;

    QModelIndex primaryKeyIndex = QSqlQueryModel::index(index.row(), 0);
    QVariant primaryKey = data(primaryKeyIndex);

    QSqlQuery query(QSqlDatabase::database(m_connectName));
    query.prepare("update " + m_tableName + " set '" + m_columnNames[index.column()] + "' = ? where " + m_columnNames[0] +" = ?");
    query.addBindValue(QVariantList() << value);
    query.addBindValue(QVariantList() << primaryKey);
    if(!query.execBatch())
    {
        sendMessage(MessageType::Error, "Query Model", query.lastError().text());
        return false;
    }

    dataChanged(QSqlQueryModel::index(index.row(),0), QSqlQueryModel::index(index.row(), QSqlQueryModel::columnCount() - 1));
    __refresh();
    return true;
}

QVariant QueryModel::data(const QModelIndex &index, int role) const
{
    QVariant value = QSqlQueryModel::data(index, role);

    if (index.column() == 0)
    {
        if(role == Qt::ForegroundRole)
            return qVariantFromValue(QColor(Qt::red));
        else if(role == Qt::WhatsThisRole)
            return qVariantFromValue(QString("Primary key cannot be changed!"));
    }

    return value;
}

void QueryModel::changeTable(const QString &tableName, bool editable)
{
    m_tableName = tableName;
    __modifyTableName();
    m_sentence = QString("SELECT * FROM `") + tableName + QString("`");
    m_editable = editable;
    __refresh();
}

void QueryModel::changeTable(const QString &databasePath, const QString &tableName, const QString &user, const QString &password, bool editable)
{
    m_connectName = QString("SE_SQL_QUERYMODEL_") + tableName;
    QSqlDatabase database = QSqlDatabase::database(m_connectName);
    if(!database.isOpen())
    {
        QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE", m_connectName);
        database.setDatabaseName(databasePath);
        database.setHostName("localhost");
        database.setUserName(user);
        database.setPassword(password);
        database.open();
        m_tableName = tableName;
    }
    __modifyTableName();
    m_sentence = QString("SELECT * FROM '") + tableName + QString("'");
    m_editable = editable;
    __refresh();
}

void QueryModel::close()
{
    QSqlDatabase::database(m_connectName).close();
    QSqlDatabase::removeDatabase(m_connectName);
}

void QueryModel::firstPage()
{
    m_currentPage = 0;
    __refresh();
}

void QueryModel::lastPage()
{
    m_currentPage = m_maxPage;
    __refresh();
}

void QueryModel::nextPage()
{
    if(m_currentPage < m_maxPage)
    {
        m_currentPage++;
        __refresh();
    }
}

void QueryModel::frontPage()
{
    if(m_currentPage > 0)
    {
        m_currentPage--;
        __refresh();
    }
}

void QueryModel::setCurrentPage(int currentPage)
{
    m_currentPage = currentPage;
    __refresh();
}

void QueryModel::addNewRow()
{
    if(!m_editable)
        return;

    __modifyTableName();
    QStringList defaultValues;
    foreach(auto i, m_columnNames)
    {
        if(i == "AUTO_ID")
            continue;

        QString tableName = m_tableName;
        QSqlQuery query(QSqlDatabase::database(m_connectName));
        if(!query.exec(QString("SELECT * FROM __SE__SQL__DEFAULT__VALUE__ WHERE name=\"") + tableName.remove("`") + "__NO__" + i + "\""))
        {
            sendMessage(MessageType::Error, "Query Model", query.lastError().text());
            defaultValues << "NULL";
        }
        else if(!query.seek(0))
        {
            defaultValues << "NULL";
        }
        else
        {
            defaultValues << query.value(1).toString();
        }
    }

    QSqlQuery query(QSqlDatabase::database(m_connectName));
    QString sentence = "INSERT INTO ";
    sentence += m_tableName;
    sentence += " VALUES (NULL";
    foreach(auto i, defaultValues)
    {
        sentence += ", ";
        bool isDecimal;
        i.toDouble(&isDecimal);
        if(!isDecimal)
            sentence += "\"";
        sentence += i;
        if(!isDecimal)
            sentence += "\"";
    }
    sentence += ")";

    if(!query.exec(sentence))
        sendMessage(MessageType::Error, "Query Model", query.lastError().text());

    __refresh();
}

void QueryModel::removeRow(int row)
{
    if(!m_editable)
        return;

    QModelIndex primaryKeyIndex = QSqlQueryModel::index(row, 0);
    QVariant primaryKey = data(primaryKeyIndex);

    QSqlQuery query(QSqlDatabase::database(m_connectName));
    query.prepare(QString("DELETE FROM ") + m_tableName + QString(" WHERE ") + m_columnNames[0] + QString("=?"));
    query.addBindValue(QVariantList() << primaryKey);

    if(!query.execBatch())
    {
        sendMessage(MessageType::Error, "Query Model", query.lastError().text());
        return;
    }

    __refresh();
}

QStringList QueryModel::getColumnNames() const
{
    return m_columnNames;
}

void QueryModel::setRecordNumberPerPage(int recordNumberPerPage)
{
    m_recordNumberPerPage = recordNumberPerPage;
    m_currentPage = 0;
    m_maxPage = 0;
    __refresh();
}

int QueryModel::maxPage() const
{
    return m_maxPage;
}

int QueryModel::currentPage() const
{
    return m_currentPage;
}

void QueryModel::__refresh()
{
    {
        QSqlQuery queryRecordNumber(QSqlDatabase::database(m_connectName));

        queryRecordNumber.exec(m_sentence);

        if(!queryRecordNumber.seek(0))
        {
            sendMessage(MessageType::Error, "Query Model", queryRecordNumber.lastError().text());
            m_maxPage = 1;
        }
        else
        {
            int number = 1;
            while(queryRecordNumber.next())
                number++;

            m_maxPage = number / m_recordNumberPerPage;
            if (number % m_recordNumberPerPage)
                m_maxPage++;
        }
    }

    QSqlQuery query(QSqlDatabase::database(m_connectName));
    if(!query.exec(m_sentence + QString(" LIMIT ") + QString::number(m_currentPage * m_recordNumberPerPage) + QString(",") + QString::number(m_recordNumberPerPage)))
    {
        sendMessage(MessageType::Error, "Query Model", query.lastError().text());
        return;
    }

    setQuery(query);
    while(canFetchMore())
        fetchMore();

    m_columnNames.clear();
    QSqlRecord records = query.record();
    for(int i = 0;!records.fieldName(i).isEmpty();i++)
        m_columnNames.push_back(records.fieldName(i));
}

void QueryModel::__modifyTableName()
{
    if(m_tableName.isEmpty())
        return;
    if(m_tableName.at(0)!="`")
        m_tableName.insert(0, "`");
    if(m_tableName.at(m_tableName.length() - 1) !="`")
        m_tableName.append("`");
}
