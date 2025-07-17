#include "widget.h"
#include "./ui_widget.h"
#include<QPainter>
#include<QTime>
#include<QTimer>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QTimer *timer = new QTimer(this);
    timer->start(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    static const QPoint hourHand[3] = {
        QPoint(4,4),
        QPoint(-4,4),
        QPoint(0,-40)

    };

    static const QPoint minutHand[3] = {
        QPoint(4,4),
        QPoint(-4,4),
        QPoint(0,-70)

    };

    static const QPoint secondHand[3] = {
        QPoint(2,2),
        QPoint(-2,2),
        QPoint(0,-90)

    };

   int side = qMin(width(), height());

   QPainter painter(this);
   painter.setRenderHint(QPainter::Antialiasing);
   painter.translate(width() /2, height() / 2);
   painter.scale(side / 250.0, side / 250.0);

   for(int i=0; i < 60; i++) {

       if((i % 5) != 0)
           painter.drawLine(92,0,96,0);
       else
           painter.drawLine(86, 0, 96, 0);
       painter.rotate(6.0);

   }

   QTime time = QTime::currentTime();

   //draw hour hand
   painter.save();
   painter.rotate((time.hour() * 360) / 12);
   painter.setPen(Qt::NoPen);
   painter.setBrush(Qt::black);
   painter.drawConvexPolygon(hourHand, 3);
   painter.restore();

   //draw miunte hand
   painter.save();
   painter.rotate((time.minute() * 360) / 60);
   painter.setPen(Qt::NoPen);
   painter.setBrush(Qt::black);
   painter.drawConvexPolygon(minutHand, 3);
   painter.restore();

   //draw second hand
   painter.save();
   painter.rotate((time.second() * 360) / 60);
   painter.setPen(Qt::NoPen);
   painter.setBrush(Qt::black);
   painter.drawConvexPolygon(secondHand, 3);
   painter.restore();





}

