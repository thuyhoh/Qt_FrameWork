#include "widget.h"
#include<QPushButton>
#include<QMenu>
#include <qlocale.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("PushButton Example");
    resize(600,600);

    QPushButton *btn = new QPushButton(this);
    btn->setText("Click");
    btn->setGeometry(0,100, 100,100);
    btn->setFont(QFont("Times", 15));
    btn->setIcon(QIcon(":/images/qt.png"));
    btn->setIconSize(QSize(36,36));

    QMenu *menu = new QMenu();
    menu->setFont(QFont("Times", 14));
    menu->setStyleSheet("background-color:yellow");
    menu->addAction("Copy");
    menu->addAction("Paste");
    menu->addAction("Cut");

    btn->setMenu(menu);
}

Widget::~Widget() {}
