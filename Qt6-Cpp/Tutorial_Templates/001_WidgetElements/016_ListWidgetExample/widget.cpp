#include "widget.h"
#include<QListWidget>
#include<QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *vbox = new QVBoxLayout(this);

    QListWidget *listWidget = new QListWidget();

    listWidget->setFont(QFont("Times", 15));
    // listWidget->setStyleSheet("background-color:yellow");
    listWidget->contentsMargins();
    listWidget->insertItem(0, "C++");
    listWidget->insertItem(1, "Python");
    listWidget->insertItem(2, "Java");
    listWidget->insertItem(3,"C#");
    listWidget->insertItem(4,"Kotlin");

    vbox->addWidget(listWidget);
}

Widget::~Widget() {}
