#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMdiSubWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_CloseButton_clicked();

    void on_CloseAllButton_clicked();

    void on_NextButton_clicked();

    void on_PreviousButton_clicked();

    void on_NewButton_clicked();

    void on_RemoveButton_clicked();


private:
    Ui::MainWindow *ui;
    QMdiSubWindow *newWin;
};
#endif // MAINWINDOW_H
