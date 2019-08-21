#include "mainwindow.h"
#include <QApplication>
#include "network/jsonparser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    SQLiteTable db_classroom;
    db_classroom.tableName = "classroom";
    db_classroom.hasAutoIncrementIndex = false;
    db_classroom.primaryKeys << "building" << "room_number";
    db_classroom.columns << QPair<QString, SQLiteDataType>("building", SQLiteDataType::TEXT)
            << QPair<QString, SQLiteDataType>("room_number", SQLiteDataType::INTEGER)
            << QPair<QString, SQLiteDataType>("capacity", SQLiteDataType::INTEGER);

    JsonParser paser;
    QList<QMap<QString ,QVariant>> l;
    QMap<QString ,QVariant> map1;
    map1["building"] = "sci";
    map1["room_number"] = 105;
    map1["capacity"] = 55;
    QMap<QString ,QVariant> map2;
    map2["building"] = "math";
    map2["room_number"] = 105;
    map2["capacity"] = 40;
    QMap<QString ,QVariant> map3;
    map3["building"] = "math";
    map3["room_number"] = 112;
    map3["capacity"] = 60;
    l << map1 << map2 << map3;
    qDebug() << paser.generateDatabaseRecord(db_classroom, l);

    return a.exec();
}
