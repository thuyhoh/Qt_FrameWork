#include "widget.h"
#include<QTableWidgetItem>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,250);

    table = new QTableWidget(this);
    table->setFont(QFont("Sanserif", 14));
    // table->setStyleSheet("background-color:yellow");

    table->setRowCount(3);
    table->setColumnCount(2);

    QTableWidgetItem *name = new QTableWidgetItem;
    name->setText("name");
    QTableWidgetItem *email = new QTableWidgetItem;
    email->setText("gmail");
    QTableWidgetItem **myname = new (QTableWidgetItem*);
    QTableWidgetItem **myemail = new (QTableWidgetItem*);

    (*myname) = new (QTableWidgetItem[2]);
    (*myemail) = new (QTableWidgetItem[2]);

    (*myname)[0].setText("nguyen");
    (*myname)[1].setText("thuy");

    (*myemail)[0].setText("nguyen@gmail");
    (*myemail)[1].setText("thuy@gmail");

    table->setItem(0,0, name);
    table->setItem(0,1, email);

    table->setItem(1,0, &(*myname)[0]);
    table->setItem(1,1, &(*myemail)[0]);
    table->setItem(2,0, &(*myname)[1]);
    table->setItem(2,1, &(*myemail)[1]);

}

Widget::~Widget() {}
