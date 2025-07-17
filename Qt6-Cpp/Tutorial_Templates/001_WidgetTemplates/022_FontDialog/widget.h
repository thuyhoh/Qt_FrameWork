#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QTextEdit>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void changeFont();

private:
    QTextEdit *textEdit;

};
#endif // WIDGET_H
