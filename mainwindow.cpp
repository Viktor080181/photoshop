#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->_imgV = new QLabel(ui->centralwidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_file_triggered()
{
    QPixmap* image = new QPixmap(QSize(100, 200));
    image->fill();


    this->_imgV->setPixmap(*image);
    this->_imgV->show();
}

void MainWindow::on_actionOpen_File_triggered()
{
    QFileDialog* dialog = new QFileDialog(this);
    dialog->setNameFilter("Images (*.png *.jpg)");
    QString imgPath = dialog->getOpenFileName();

    QImageReader* reader = new QImageReader(imgPath);
    QPixmap image = QPixmap::fromImage(reader->read());

    this->_imgV->setPixmap(image);
    this->_imgV->resize(this->_imgV->pixmap().size());
}

void MainWindow::on_action3_4_triggered()
{
    this->_imgV->setPixmap(this->_imgV->pixmap().scaled(100, 50));
}


void MainWindow::on_action5_4_triggered()
{
    this->_imgV->setPixmap(this->_imgV->pixmap().scaled(200, 100));
}


void MainWindow::on_action2_3_triggered()
{
    this->_imgV->setPixmap(this->_imgV->pixmap().scaled(300, 150));
}


void MainWindow::on_actionSave_File_triggered()
{

}

