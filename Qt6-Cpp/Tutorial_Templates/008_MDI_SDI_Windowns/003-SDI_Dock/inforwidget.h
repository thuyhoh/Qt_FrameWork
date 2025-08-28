#ifndef INFORWIDGET_H
#define INFORWIDGET_H

#include <QLabel>

class inforWidget : public QLabel
{
    Q_OBJECT
public:
    inforWidget(QWidget *parent=0);

public slots:
    void documentChanged(int position, int charsRemoved, int charsAdded);
};

#endif // INFORWIDGET_H
