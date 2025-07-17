#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QSlider>
#include<QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void changeSlider();

private:
    QSlider *slider;
    QLabel *labelResult;
};
#endif // WIDGET_H
