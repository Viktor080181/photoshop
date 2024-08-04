#include "mainwindow.h"

#include <QApplication>
#include <QPointer>
#include <QFileDialog>
#include <QString>
#include <QImage>
#include <QSize>
#include <Qlabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
