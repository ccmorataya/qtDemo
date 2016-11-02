#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString my = "hello";

    qDebug() << my;

    return a.exec();
}
