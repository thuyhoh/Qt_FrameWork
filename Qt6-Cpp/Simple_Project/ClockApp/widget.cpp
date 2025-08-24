#include "widget.h"
#include "./ui_widget.h"
#include <QTimer>
#include <QPainter>
#include <QTime>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    setWindowTitle("Clock App");

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
    painter.setRenderHint(QPainter::Antialiasing); // Bật chế độ khử răng cưa
    painter.translate(width() /2, height() / 2);  // Dịch (di chuyển) hệ trục tọa độ đến tâm của widget.
    painter.scale(side / 250.0, side / 250.0);    // Thu nhỏ 250x250 hệ trục tọa độ để phù hợp với kích thước của widget.

    // vẽ khung đồng hồ
    for(int i=0; i < 60; i++) {
        if((i % 5) != 0)
            painter.drawLine(90,0,96,0);
        else
            painter.drawLine(86, 0, 96, 0);
        painter.rotate(6.0); // xoay hệ tọa độ vẽ đi 6 dộ. Mọi thứ vẽ sau này sẽ bị lệnh tương ứng
    }

    QTime time = QTime::currentTime();

    //draw hour hand
    painter.save(); // Lưu lại trạng thái hiện tại của QPainter
    painter.rotate((time.hour() * 360) / 12); // xoay hệ trục tọa độ tương ứng mỗi giờ
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::black);
    painter.drawConvexPolygon(hourHand, 3); // Vẽ một hình đa giác lồi (convex polygon) với 3 điểm trong mảng hourHand.
    painter.restore();

    //draw miunte hand
    painter.save(); // Lưu lại trạng thái hiện tại của QPainter
    painter.rotate((time.minute() * 360) / 60); // xoay hệ trục tọa độ tương ứng mỗi giờ
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::black);
    painter.drawConvexPolygon(minutHand, 3); // Vẽ một hình đa giác lồi (convex polygon) với 3 điểm trong mảng hourHand.
    painter.restore();

    //draw second hand
    painter.save(); // Lưu lại trạng thái hiện tại của QPainter
    painter.rotate((time.second() * 360) / 60); // xoay hệ trục tọa độ tương ứng mỗi giờ
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::black);
    painter.drawConvexPolygon(secondHand, 3); // Vẽ một hình đa giác lồi (convex polygon) với 3 điểm trong mảng hourHand.
    painter.restore(); // mỗi thành phần trở lên độc lập không ảnh hưởng đén các thành phần khác

}
