#include "mainwindow.h"
#include <QApplication>
#include <QtGui>
#include <QLabel>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    w.show();


    MainWindow mWin;
    mWin.Play();


    return app.exec();
}
