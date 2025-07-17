#include "widget.h"
#include<QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *vbox = new QVBoxLayout(this);

    calendar = new QCalendarWidget();
    calendar->setGridVisible(true);
    calendar->setStyleSheet("background-color:yellow");
    connect(calendar, SIGNAL(selectionChanged()), this, SLOT(selectDate()));


    label = new QLabel("Hello");
    label->setFont(QFont("Times", 15));
    label->setStyleSheet("color:red");

    vbox->addWidget(calendar);
    vbox->addWidget(label);

}

Widget::~Widget()
{
}

void Widget::selectDate()
{
    QString dateSelected = calendar->selectedDate().toString();
    label->setText(dateSelected);

}

