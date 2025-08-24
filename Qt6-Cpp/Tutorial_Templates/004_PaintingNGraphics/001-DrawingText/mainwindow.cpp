#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPainter>
#include <QTextDocument>

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
    // drawing Text
    QPainter myPainter(this);
    myPainter.setFont(QFont("Time", 20));
    myPainter.setPen(QColor("green"));
    myPainter.drawText(QPoint(20,20), "Hello World!");

    // add html document
    QTextDocument textDocument;
    textDocument.setHtml("<b>Welcome to Qt6 Course</b><i>Udemy Course</i><font size='15' color='red'>Enjoy the course</font>");
    textDocument.drawContents(&myPainter);

    // drawing line
    myPainter.drawLine(QPoint(0,0), QPoint(20,100));
}
