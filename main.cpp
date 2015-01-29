#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QStringList args = a.arguments();
    QString url;
    if (args.size() > 1) {
        url = args.at(1);
    }
    MainWindow w(url);
    w.show();

    return a.exec();
}
