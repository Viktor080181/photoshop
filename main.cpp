#include "mainwindow.h"
#include "main-widget.h"
#include "ui.h"

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
    MainWidget mainWindow;
    mainWindow.show();

    UI ui = UI(&mainWindow);

    return a.exec();
}
