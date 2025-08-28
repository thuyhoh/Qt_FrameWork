#include "mainwindow.h"
#include<QMenuBar>
#include<QApplication>
#include<QMessageBox>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("%1").arg(("SDI")));

    textEdit = new QTextEdit(this);
    setCentralWidget(textEdit);
    createActions();
    createMenus();

}

MainWindow::~MainWindow() {}

void MainWindow::newFile()
{
    // QMainWindow *newWin = new QMainWindow();
    // // QPushButton *button = new QPushButton(newWin);
    // // button->setText("BNT");
    // newWin->show();

    (new MainWindow())->show();

}


void MainWindow::about()
{
    QMessageBox::information(this, "SDI Window", "A single document window");


}

void MainWindow::createActions()
{
    newAction = new QAction(QIcon(":/Images/new.png"), "New", this);
    newAction->setShortcut(tr("Ctrl+N"));
    connect(newAction, SIGNAL(triggered()), this, SLOT(newFile()));

    closeAction = new QAction(QIcon(":/Images/close.png"), "Close", this);
    closeAction->setShortcut(tr("Ctrl+W"));
    connect(closeAction, SIGNAL(triggered()), this, SLOT(close()));

    exitAction = new QAction(QIcon(":/Images/exit.png"), "Exit", this);
    exitAction->setShortcut(tr("Ctrl+W"));
    connect(exitAction, SIGNAL(triggered()), qApp, SLOT(closeAllWindows()));

    cutAction = new QAction(QIcon(":/Images/cut.png"), "Cut", this);
    cutAction->setShortcut(tr("Ctrl+X"));
    cutAction->setEnabled(false);
    connect(textEdit, SIGNAL(copyAvailable(bool)), cutAction, SLOT(setEnabled(bool)));
    connect(cutAction, SIGNAL(triggered()), textEdit, SLOT(cut()));


    copyAction = new QAction(QIcon(":/Images/copy.png"), "Copy", this);
    copyAction->setShortcut(tr("Ctrl+C"));
    copyAction->setEnabled(false);
    connect(textEdit, SIGNAL(copyAvailable(bool)), copyAction, SLOT(setEnabled(bool)));
    connect(copyAction, SIGNAL(triggered()), textEdit, SLOT(copy()));

    pasteAction = new QAction(QIcon(":/Images/paste.png"), "Paste", this);
    pasteAction->setShortcut(tr("Ctrl+V"));
    connect(pasteAction, SIGNAL(triggered()), textEdit, SLOT(paste()));

    aboutAction = new QAction(QIcon(":/Images/about.png"), "About", this);
    connect(aboutAction, SIGNAL(triggered()), this, SLOT(about()));
}

void MainWindow::createMenus()
{
    QMenu *menu;
    menu = menuBar()->addMenu("File");
    menu->addAction(newAction);
    menu->addAction(closeAction);
    menu->addAction(exitAction);

    menu = menuBar()->addMenu("Edit");
    menu->addAction(cutAction);
    menu->addAction(copyAction);
    menu->addAction(pasteAction);

    menu = menuBar()->addMenu("Help");
    menu->addAction(aboutAction);
}
