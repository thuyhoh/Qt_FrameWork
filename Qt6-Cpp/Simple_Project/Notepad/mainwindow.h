#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPrinter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();
    void save();
    void saveAs();
    void print();

    void printPreviewDialog();
    void printPreview(QPrinter *printer);
    void exportPdf();
    void undo();
    void redo();

    void copy();
    void cut();
    void paste();

    void fontBold();
    void fontItalic();
    void fontUnderLine();

    void right();
    void left();
    void center();
    void justify();

    void changeFont();
    void changeColor();
    void about();


private:
    Ui::MainWindow *ui;
    QString currentFile;
};
#endif // MAINWINDOW_H
