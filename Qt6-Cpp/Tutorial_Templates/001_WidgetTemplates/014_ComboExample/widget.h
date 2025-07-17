#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QComboBox>
#include<QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void comboChanged();

private:
    QComboBox *combo;
    QLabel *labelResult;
};
#endif // WIDGET_H
