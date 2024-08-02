#include "mainwindow.h"

#include <QApplication>
#include <QPointer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

//     void MainWindow::newFile()
//         {
//         if (okToContinue ())
//         {
//         spreadsheet->clear();
//         setCurrentFile("");
//         }
//         }

//         bool MainWindow::okToContinue()//Запрос на сохранение изменений у пользователя
//             {
//             if (isWindowModified()) {
//                 int r = QMessageBox::warning(this,
//                     tr("Spreadsheet"), tr("The document has been modified.\n"
//                     "Do you want to save your changes?"),
//                     QMessageBox::Yes | QMessageBox::Default,
//                     QMessageBox::No,
//                     QMessageBox::Cancel | QMessageBox::Escape);
//                 if (r == QMessageBox::Yes) {
//                     return save();
//                     } else if (r == QMessageBox::Cancel) {
//                     return false;
//                     }
//                 }
//             return true;
//             }

//             void MainWindow::open()//Открываем файл
//                 {
//                 if (okToContinue()) {
//                     QString fileName = QFileDialog::getOpenFileName(".", fileFilters, this);
//                     if (!fileName.isEmpty())
//                     loadFile(fileName);
//                 }
//                 }
//             bool MainWindow::loadFile(const QString &fileName)
//                     {
//                     if (!spreadsheet->readFile(fileName)) {
//                         statusBar()->showMessage(tr("Loading canceled"), 2000);
//                         return false;
//                         }
//                     setCurrentFile(fileName);
//                     statusBar()->showMessage(tr("File loaded"), 2000);
//                     return true;
//                     }

//             bool MainWindow::save()//Сохраняем произведенные изменения
//                 {
//                 if (curFile.isEmpty()) {
//                 return saveAs();
//                 } else {
//                 return saveFile(curFile);
//                             }
//                         }
//                     bool MainWindow::saveFile(const QString &fileName)//Сохраняем файл
//                         {
//                         if (!spreadsheet->writeFile(fileName)) {
//                             statusBar()->showMessage(tr("Saving canceled"), 2000);
//                             return false;
//                             }
//                         setCurrentFile(fileName);
//                         statusBar()->showMessage(tr("File saved"), 2000);
//                         return true;
//                         }

//                     bool MainWindow::saveAs()//Сохраняем файл как
//                             {
//                             QString fileName = QFileDialog::getSaveFileName(this,
//                             tr("SaveSpreadsheet"),
//                             tr("Spreadsheet files (*.sp)"));
//                             if (fileName.isEmpty())
//                                 return false;
//                             return saveFile(fileName);
//                             }

//                     QFileDialog::DontConfirmOverwrite//Создания возможности перезаписи файла в случае наличия файла с таким же названием
//                                 void MainWindow::closeEvent(QCloseEvent *event)
//                                 {
//                                 if (okToContinue()) {
//                                 writeSettings();
//                                 event->accept();
//                                 } else {
//                                 event->ignore();
//                                 }
//                                 }

//                     QApplication::quit()//Создаем подменю закрыть файл
//                                     void MainWindow::setCurrentFile(const QString &fileName)
//                                     {
//                                     curFile = fileName;
//                                     setWindowModified(false);
//                                     QString shownName = "Untitled";
//                                     if (!curFile.isEmpty()) {
//                                         shownName = strippedName(curFile);
//                                         recentFiles.removeAll(curFile);
//                                         recentFiles.prepend(curFile);
//                                         updateRecentFileActions();
//                                         }
//                                     setWindowTitle(tr("%1[*] - %2").arg(shownName)
//                                         .arg(tr("Spreadsheet")));
//                                     }
//                                 QString MainWindow::strippedName(const QString &fullFileName)
//                                     {
//                                     return QFileInfo(fullFileName).fileName();
//                                     }
//     void MainWindow::MainWindow()
//         {
//         spreadsheet = new Spreadsheet;
//         setCentralWidget(spreadsheet);
//         createActions();
//         createMenus();
//         readSettings();
//         findDialog = 0;
//         setWindowIcon(QIcon(":/images/icon.png"));
//         setCurrentFile("");
//         }

//     void MainWindow::createActions()//Создаем элемент в меню файл: "Создать файл"
//         {
//         newAction = new QAction(tr("&New"), this);
//         newAction->setIcon(QIcon(":/images/new.png"));
//         newAction->setShortcut(tr("Ctrl+N"));
//         newAction->setStatusTip(tr("Create a new spreadsheet file"));
//         connect(newAction, SIGNAL(triggered()),this, SLOT(newFile()));
//         }

// for (int i = 0; i < MaxRecentFiles; ++i)//Создаем элемент в меню файл: "Открыть файл"
//         {
//         recentFileActions[i] = new QAction(this);
//         recentFileActions[i]->setVisible(false);
//         connect(recentFileActions[i], SIGNAL(triggered()),this, SLOT(openRecentFile()));
//         }


// void MainWindow::createMenus()//Создаем программное меню
//     {
//     fileMenu = menuBar()->addMenu(tr("&File"));
//     fileMenu->addAction(newAction);
//     fileMenu->addAction(openAction);
//     fileMenu->addAction(saveAction);
//     fileMenu->addAction(saveAsAction);
//     separatorAction = fileMenu->addSeparator();
//     for (int i = 0; i < MaxRecentFiles; ++i)
//     fileMenu->addAction(recentFileActions[i]);
//     fileMenu->addSeparator();
//     fileMenu->addAction(exitAction);
//     }
// QMenu::addAction()
//     {
//         QMenu::addMenu()
//         {
// editMenu = menuBar()->addMenu(tr("&Edit"));
// editMenu->addAction(cutAction);
// editMenu->addAction(copyAction);
// editMenu->addAction(pasteAction);
// editMenu->addAction(deleteAction);
// selectSubMenu = editMenu->addMenu(tr("&Select"));
// selectSubMenu->addAction(selectRowAction);
// selectSubMenu->addAction(selectColumnAction);
// selectSubMenu->addAction(selectAllAction);
// editMenu->addSeparator();
// editMenu->addAction(findAction);
// editMenu->addAction(goToCellAction);
//         }
//     }
}
