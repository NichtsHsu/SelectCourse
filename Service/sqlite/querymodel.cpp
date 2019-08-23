#include "querymodel.h"

QueryModel::QueryModel(const QString &databasePath, const QString &tableName,
                                     const QString &user, const QString &password, int recordNumberPerPage,
                                     QWidget *parent, bool editable) :
    QSqlQueryModel(parent), m_editable(editable), m_tableName(tableName)
{
    m_connectName = QString("SE_SQL_QUERYMODEL_") + tableName;
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

QStringList QueryModel::getColumnNames() const
{
    return m_columnNames;
}

void QueryModel::__refresh()
{
    QSqlQuery query(QSqlDatabase::database(m_connectName));
    if(!query.exec(m_sentence))
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
