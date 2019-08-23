#ifndef MAP_SQL_SQLITE_H
#define MAP_SQL_SQLITE_H

#include <QtSql/QtSql>
#include <QTime>
#include <QRandomGenerator>
#include "message/message.h"

enum class SQLiteDataType
{
    INTEGER, TEXT, REAL
};

/**
 * @brief The DataTable struct
 * Structure of a data table.
 * The column of auto increment index will named with the first column and must be integer.
 * If hasAutoIncrementIndex is true, the primaryKey must be the auto increment index.
 */
struct SQLiteTable
{
    QString tableName;
    QList<QPair<QString, SQLiteDataType>> columns;
    bool hasAutoIncrementIndex;
    QStringList primaryKeys;
};


class SQLiteDatabase : public QObject
{
    Q_OBJECT

public:
    SQLiteDatabase(const QString &databasePath);
    ~SQLiteDatabase();

    /**
     * @brief isValid
     * Return whether database is valid.
     */
    bool isValid();

    /**
     * @brief getAllTableNames
     * Return a list of names of all tables in this database.
     */
    QStringList getAllTableNames();

    /**
     * @brief createTable
     * Create a new Table.
     * This function will call selectTable(table) if succesfully created this table.
     * @param table
     * Necessary information for create table.
     * @return
     * Return whether create table successfully.
     * If this table already exists, it will return false too.
     */
    bool createTable(const SQLiteTable &table);

    /**
     * @brief insert
     * Insert a new record or replace existed record into a table.
     * @param table
     * Table which used.
     * @param recordWithoutAutoIncrementIndex
     * All values of this record without auto increment index.
     * @return
     * return whether successfully executed.
     */
    bool insert(const SQLiteTable &table, const QVariantList &recordWithoutAutoIncrementIndex);

    /**
     * @brief update
     * Update a record.
     * @param table
     * Table which used.
     * @param primaryKeyValue
     * The value of primary key.
     * @param columnName
     * Column name where data will be updated.
     * @param value
     * New data.
     * @return
     * return whether successfully executed.
     */
    bool update(const SQLiteTable &table, const QStringList &primaryKeyValues, const QString &columnName, const QVariant &value);

    /**
     * @brief replace
     * Replace a record.
     * @param table
     * Table which used.
     * @param record
     * All values of this record.
     * @return
     */
    bool replace(const SQLiteTable &table, const QVariantList &record);

    /**
     * @brief read
     * Read a value from database.
     * @param table
     * Table which used.
     * @param primaryKeyValue
     * The value of primary key.
     * @param columnName
     * Column name where the data is saved.
     * @return
     * Return the specified value by primary key and column.
     */
    QVariant read(const SQLiteTable &table, const QStringList &primaryKeyValues, const QString &columnName);

    /**
     * @brief read
     * Read a full record from database.
     * @param table
     * Table which used.
     * @param primaryKeyValue
     * The value of primary key.
     * @return
     * Return all values in a specified record.
     */
    QVariantList read(const SQLiteTable &table, const QStringList &primaryKeyValues);

    /**
     * @brief readColumn
     * Read a column of data by codition.
     * @param table
     * Table which used.
     * @param columnName
     * Which column you want to read.
     * @param condition
     * Optional condition.
     * @return
     */
    QVariantList readColumn(const SQLiteTable &table, const QString &columnName, const QString &condition = QString());

    /**
     * @brief readAll
     * Read all records by condition.
     * @param table
     * @return
     */
    QList<QVariantList> readAll(const SQLiteTable &table, const QString &condition = QString());

    /**
     * @brief remove
     * Remove a record by codition.
     * @param tableName
     * Table name.
     * @param condition
     * Condition to decide which records will be removed.
     * @return
     * return whether successfully executed.
     */
    bool remove(const QString &tableName, const QString &condition);
    bool remove(const SQLiteTable &table, const QString &condition);

    /**
     * @brief exists
     * Return whether a table exists.
     * @param tableName
     * Table name.
     */
    bool exists(const QString &tableName);
    bool exists(const SQLiteTable &table);

    /**
     * @brief drop
     * Drop a table.
     * @param tableName
     * Table name.
     * @return
     * return whether successfully executed.
     */
    bool drop(const QString &tableName);
    bool drop(const SQLiteTable &table);

    /**
     * @brief exec
     * Execute a SQL sentence directly.
     * @param sentence
     * SQL sentence.
     * @return
     * Return whether successfully executed.
     */
    bool exec(const QString &sentence);

    /**
     * @brief getRecordNumber
     * Get Record Number.
     * @return
     */
    size_t getRecordNumber(const SQLiteTable &table);

    /**
     * @brief close
     * Close the database.
     * All operation will be unusable after close.
     */
    void close();

signals:
    void sendMessage(MessageType type, QString module, QString message);

private:
    QString m_connectionName;

    bool m_valid;
};

#endif // SQLITEDATABASE_H
