#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QGraphicsDropShadowEffect>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->labelImage->setPixmap(QPixmap(":/image/qt.png"));

    /*
    //create shadow for the label
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect();
    shadow->setXOffset(7);
    shadow->setYOffset(7);
    ui->label->setGraphicsEffect(shadow);

    */

    /*
    //colorized effect to the image
    QGraphicsColorizeEffect *colorize = new QGraphicsColorizeEffect(this);
    colorize->setColor(QColor(255, 0,0));
    ui->labelImage->setGraphicsEffect(colorize);
    */

    //add blure effect
    QGraphicsBlurEffect *blur = new QGraphicsBlurEffect(this);
    blur->setBlurRadius(12);
    ui->label->setGraphicsEffect(blur);

    //adding alpha image
    QGraphicsOpacityEffect *alpha = new QGraphicsOpacityEffect(this);
    alpha->setOpacity(0.2);
    ui->labelImage->setGraphicsEffect(alpha);
}

MainWindow::~MainWindow()
{
    delete ui;
}
