#include "widget.h"
#include<QVBoxLayout>
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *vbox = new QVBoxLayout(this);

    textEdit = new QTextEdit();
    QPushButton *btn = new QPushButton();
    btn->setText("Change Color");
    connect(btn, SIGNAL(clicked()), this, SLOT(changeColor()));

    vbox->addWidget(textEdit);
    vbox->addWidget(btn);
}

Widget::~Widget() {}

void Widget::changeColor()
{
    colorDialog = new QColorDialog();

    QColor color = colorDialog->getColor();
    textEdit->setTextColor(color);


}
