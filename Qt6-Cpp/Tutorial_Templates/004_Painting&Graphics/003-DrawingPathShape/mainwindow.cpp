#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPainterPath>
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
    /*
    QPainterPath rectPath;
    rectPath.addRect(QRect(150, 20,200, 200));
    QPainter pathPainter(this);
    pathPainter.setPen(QPen(Qt::GlobalColor::red,1,Qt::DashDotLine, Qt::FlatCap, Qt::MiterJoin ));
    pathPainter.setBrush(Qt::yellow);
    pathPainter.drawPath(rectPath);
    */

    QPainterPath ellipsePath;
    ellipsePath.addEllipse(QPoint(200,120), 50, 20);
    QPainter ellipsePainter(this);
    ellipsePainter.setPen(QPen(QColor(79,106,25), 5, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin));
    ellipsePainter.setBackground(QColor(122,163,30));
    ellipsePainter.drawPath(ellipsePath);
}
