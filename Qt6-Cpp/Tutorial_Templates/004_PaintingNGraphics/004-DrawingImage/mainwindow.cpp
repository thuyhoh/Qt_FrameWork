#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPainter>
#include <QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QImage image;
    image.load(":/Images/qt.png");
    QPainter imagePainter(this);
    imagePainter.drawImage(QPoint(100,150), image);
}

