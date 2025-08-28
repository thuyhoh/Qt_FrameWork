#include "mainwindow.h"
#include<QMenuBar>
#include<QApplication>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle( tr("%1[*] - %2" ).arg(tr("unnamed")).arg(tr("SDI")) );
    dockWidget = new QTextEdit(this);
    setCentralWidget(dockWidget);

    createDocks();
    createActions();
    createMenu();
}

MainWindow::~MainWindow()
{
}

void MainWindow::newFile()
{
    (new MainWindow())->show();
}

void MainWindow::createDocks()
{
    dock = new QDockWidget("Information", this); // Tạo dock widget, tiêu đề "Information"
    inforWidget *info = new inforWidget(dock);   // inforWidget là widget con để hiển thị thông tin
    dock->setWidget(info);                       // Gắn info vào dock
    addDockWidget(Qt::LeftDockWidgetArea, dock); // Thêm dock vào bên trái cửa sổ chính
    connect(dockWidget->document(), SIGNAL(contentsChange(int, int, int)), info, SLOT(documentChanged(int, int, int)));
}

void MainWindow::createActions()
{
    newAction = new QAction("New", this);
    connect(newAction, SIGNAL(triggered()), this, SLOT(newFile()));

    closeAction = new QAction("Close", this);
    connect(closeAction, SIGNAL(triggered()), this, SLOT(close()));

    exitAction = new QAction("Exit", this);
    connect(exitAction, SIGNAL(triggered()), qApp, SLOT(closeAllWindows()));

    cutAction = new QAction("Cut", this);
    connect(cutAction, SIGNAL(triggered()), dockWidget, SLOT(cut()));

    copyAction = new QAction("Copy", this);
    connect(copyAction, SIGNAL(triggered()), dockWidget, SLOT(copy()));

    pasteAction = new QAction("Paste", this);
    connect(pasteAction, SIGNAL(triggered()), dockWidget, SLOT(paste()));
}

void MainWindow::createMenu()
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

    menu = menuBar()->addMenu("View");
    menu->addAction(dock->toggleViewAction()); // ẩn hiện Dock Widget khi được tác động
}

