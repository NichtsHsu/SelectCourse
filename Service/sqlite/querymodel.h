#ifndef QUERYMODEL_H
#define QUERYMODEL_H

/**
 * @file se_sqquerymodel.h
 * @brief
 * 该文件包含自定义数据库模型SE_SQL_QueryModel的定义。
 * @see "./se_sqquerymodel.cpp"
 * @author Nihil
 * @version 1.1
 * @since 2018/11/18
 * @date 2018/11/23
 */

class SE_SQL_SQLiteDatabase;
#ifndef SE_SQL_SQLITEDATABASE_H
#include "sqlitedatabase.h"
#endif

/**
 * @brief The SE_SQL_QueryModel class
 * 请使用new创建该类，否则析构会导致数据库关闭。
 * 自定义数据库模型，用于显示指定数据表的表格。
 * 第一列数据作为主键，不可被修改。
 */
class QueryModel : public QSqlQueryModel
{
    Q_OBJECT

public:

	/**
	 * @brief SE_SQL_QueryModel
	 * @param databasePath
	 * 数据库的路径。
	 * @param tableName
	 * 数据表的名字。
	 * @param user
	 * 用户名。
	 * @param password
	 * 密码。
	 * @param parent
	 * 窗口父对。（通常为绑定的QTableView）
	 * @param editable
	 * 数据是否可编辑
	 */
    QueryModel(const QString &databasePath, const QString &tableName,
					  const QString &user = QString(), const QString &password = QString(),
					  int recordNumberPerPage = 0,
					  QWidget *parent = nullptr, bool editable = true);
    ~QueryModel();

	/**
	 * @brief flags
	 * 继承于QSqlQueryModel的虚函数。
	 * 返回指定索引的项的标志，QTableView内部处理所需函数。
	 */
	Qt::ItemFlags flags(const QModelIndex &index) const;

	/**
	 * @brief setData
	 * 继承于QSqlQueryModel的虚函数。
	 * 同步QTableView的修改到数据库，QTableView内部处理所需函数。
	 */
	bool setData(const QModelIndex &index, const QVariant &value, int role);

	/**
	 * @brief data
	 * 继承于QSqlQueryModel的虚函数。
	 * 显示数据，QTableView内部处理所需函数。
	 */
	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;

	/**
	 * @brief changeTable
	 * 更换使用的数据表。
	 */
	void changeTable(const QString &tableName, bool editable = true);
	void changeTable(const QString &databasePath, const QString &tableName, const QString &user = QString(), const QString &password = QString(), bool editable = true);

	/**
	 * @brief close
	 * 主动关闭数据库。
	 */
	void close();

	/**
	 * @brief currentPage
	 * 返回当前页。
	 */
	int currentPage() const;

	/**
	 * @brief maxPage
	 * 返回最大页。
	 */
	int maxPage() const;

	/**
	 * @brief getColumnNames
	 * 获取所有列名。
	 */
	QStringList getColumnNames() const;

    /**
     * @brief refresh
     * 刷新显示。
     */
    void __refresh();

signals:
    void sendMessage(MessageType type, QString module, QString message);

private:
	/**
	 * @brief m_editable
	 * 模型是否可被修改。
	 */
	bool m_editable;

	/**
	 * @brief m_connectName
	 * 连接名。
	 */
	QString m_connectName;

	/**
	 * @brief m_sentence
	 * 模型刷新时使用的SQL语句。
	 */
	QString m_sentence;

	/**
	 * @brief m_tableName
	 * 数据表名字。
	 */
	QString m_tableName;

	/**
	 * @brief m_columnNames
	 * 各列的项名。
	 */
	QStringList m_columnNames;

	/**
	 * @brief __modifyTableName
	 * 处理表名。
	 * 在表名两端加上单引号，以防止出错。
	 */
	inline void __modifyTableName();
};

#endif // SE_SQL_QUERYMODEL_H
