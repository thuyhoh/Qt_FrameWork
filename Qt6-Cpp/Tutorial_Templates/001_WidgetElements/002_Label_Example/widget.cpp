#include "widget.h"
#include "./ui_widget.h"
#include <QLabel>
#include <QMovie>

#define LabelBase  0
// #define LabelImage 1
// #define LableGif   2

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    setWindowTitle("QLabel");
    resize(600,600);

#ifdef LabelBase /* Basic Example */
    QLabel *label = new QLabel(this);
    label->setText("This is the text");
    //label->move(100,100);
    label->setFont(QFont("Sanserif", 14));
    label->setGeometry(100,100, 120,300);
    label->setStyleSheet("color:red");
#endif
#ifdef LabelImage /* Image Example */
    QLabel *label = new QLabel(this);
    label->setPixmap(QPixmap(":/Images/qt.png"));
#endif
#ifdef LableGif   /* GIF Image Example */
    QLabel *label = new QLabel(this);
    QMovie *movie = new QMovie(":/Images/sky.gif");
    label->setMovie(movie);
    movie->start();
#endif
}

Widget::~Widget()
{
    delete ui;
}
