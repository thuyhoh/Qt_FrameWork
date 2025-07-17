#include "widget.h"
#include<QTableWidgetItem>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);

    table = new QTableWidget(this);
    table->setFont(QFont("Sanserif", 14));
    table->setStyleSheet("background-color:yellow");

    table->setRowCount(3);
    table->setColumnCount(3);

    QTableWidgetItem *name = new QTableWidgetItem("Name");
    QTableWidgetItem *email = new QTableWidgetItem("Email");

    QTableWidgetItem *parwiz = new QTableWidgetItem("Parwiz");
    QTableWidgetItem *myemail = new QTableWidgetItem("par@gmail.com");

    table->setItem(0,0, name);
    table->setItem(0,1, email);

    table->setItem(1,0, parwiz);
    table->setItem(1,1,myemail);



}

Widget::~Widget()
{
}

