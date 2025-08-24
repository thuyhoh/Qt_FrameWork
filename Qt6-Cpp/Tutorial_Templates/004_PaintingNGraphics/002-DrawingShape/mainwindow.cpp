#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPainter>

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
    //drawing rect
    QPainter myPainter(this);
    myPainter.setBrush(Qt::BrushStyle::BDiagPattern);
    myPainter.drawRect(QRect(40,120, 200,200));

    //set pen for the ellipse
    QPen ellipsePen;
    ellipsePen.setColor(Qt::GlobalColor::red);
    ellipsePen.setStyle(Qt::DashDotDotLine);

    //draw ellipse
    myPainter.setPen(ellipsePen);
    myPainter.drawEllipse(QPoint(300,200), 80,50);
}

