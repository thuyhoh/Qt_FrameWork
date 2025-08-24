#include "widget.h"
#include<QLineEdit>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QLabel Example");
    resize(500,300);

    QLineEdit *lineedit = new QLineEdit(this);
    lineedit->setGeometry(20,20, 250, 50);
    lineedit->setFont(QFont("Times", 14));
    lineedit->setPlaceholderText("Please enter your username");
    //lineedit->setEnabled(false);
    lineedit->setEchoMode(QLineEdit::EchoMode::Password);

}

Widget::~Widget() {}
