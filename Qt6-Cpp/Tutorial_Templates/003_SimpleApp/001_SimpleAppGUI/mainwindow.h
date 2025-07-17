#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QApplication>
#include<QStandardItemModel>
#include<QMessageBox>
#include<QInputDialog>


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
    void on_pushButton_Save_clicked();

    void on_pushButton_Clear_clicked();

    void on_pushButton_ClearOne_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
    QMessageBox *msg;
    void clearFields();
};
#endif // MAINWINDOW_H
