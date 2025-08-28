#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTextEdit>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle(tr("MDI"));

    QTextEdit *window1 = new QTextEdit();
    window1->setText("C++"); 
    ui->mdiArea->addSubWindow(window1); /// thêm cửa sổ con trong MidArea

    QTextEdit *window2 = new QTextEdit();
    window2->setText("Python");
    ui->mdiArea->addSubWindow(window2);

    QTextEdit *window3 = new QTextEdit();
    window3->setText("Java");
    ui->mdiArea->addSubWindow(window3);


    QTextEdit *window4 = new QTextEdit();
    window4->setText("Hello World");
    ui->mdiArea->addSubWindow(window4); 

    QWidget *window5 = new QWidget();
    ui->mdiArea->addSubWindow(window5);
    window5->setWindowTitle(tr("Window 5"));
    window5->setFixedSize(QSize(150,150));
    QPushButton *button = new QPushButton(window5);
    button->setText("button");

    ui->mdiArea->cascadeSubWindows();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CloseButton_clicked()
{
    ui->mdiArea->closeActiveSubWindow(); // đóng cửa sổ đang focus
}


void MainWindow::on_CloseAllButton_clicked()
{
    ui->mdiArea->closeAllSubWindows(); // đóng toàn bộ cửa sổ con 
}


void MainWindow::on_NextButton_clicked()
{
    ui->mdiArea->activateNextSubWindow(); // chuyển focus sang cửa sổ tiếp theo theo thứ tự danh sách subWindow mà QMdiArea quản lý
}


void MainWindow::on_PreviousButton_clicked()
{
    ui->mdiArea->activatePreviousSubWindow(); // chuyển focus sang cửa sổ trước đó 
}


void MainWindow::on_NewButton_clicked()
{
    newWin = new QMdiSubWindow();
    newWin->setWindowTitle("Test");
    newWin->setAttribute(Qt::WA_DeleteOnClose);
    newWin->resize(300,300);
    ui->mdiArea->addSubWindow(newWin);
    newWin->show();
}


void MainWindow::on_RemoveButton_clicked()
{
    ui->mdiArea->removeSubWindow(ui->mdiArea->currentSubWindow()); // xóa bỏ cửa sổ hiện tại
}


