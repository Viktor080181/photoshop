#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QLabel>
#include <QFile>
#include <QTextStream>
#include <QPixmap>
#include <QString>
#include <QImageReader>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_file_triggered();

    void on_actionOpen_File_triggered();

    void on_action3_4_triggered();

    void on_action5_4_triggered();

    void on_action2_3_triggered();

    void on_actionSave_File_triggered();

private:
    Ui::MainWindow *ui;

    QLabel* _imgV;
};
#endif // MAINWINDOW_H
