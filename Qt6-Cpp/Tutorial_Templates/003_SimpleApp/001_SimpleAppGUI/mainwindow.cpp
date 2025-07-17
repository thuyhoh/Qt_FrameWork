#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionquit, &QAction::triggered, this, &QApplication::quit);

    // add header to tableView
    model = new QStandardItemModel();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Name")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Phone")));

    ui->tableView->setModel(model);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clearFields()
{
    ui->lineEdit_Name->setText("");
    ui->lineEdit_Phone->setText("");

}

void MainWindow::on_pushButton_Save_clicked()
{
    QStandardItem *name = new QStandardItem(ui->lineEdit_Name->text());
    QStandardItem *phone = new QStandardItem(ui->lineEdit_Phone->text());

    model->appendRow({name, phone});
    clearFields();

    QMessageBox::information(this, "Application", "Record has been saved");

}


void MainWindow::on_pushButton_Clear_clicked()
{
    msg = new QMessageBox();
    msg->setText("Delete Items");
    msg->setInformativeText("Do you want to delete all items ? ");
    msg->setStandardButtons(QMessageBox::Yes | QMessageBox::Discard | QMessageBox::Cancel);
    int ret = msg->exec();
    if(ret == QMessageBox::Yes)
    {
        return model->clear();
    }
}


void MainWindow::on_pushButton_ClearOne_clicked()
{
    bool ok;
    int rowId = QInputDialog::getInt(this, "Select Row", "Please enter row to delete", 1, 1,model->rowCount(), 1, &ok);
    if(ok ){
        model->removeRow(rowId-1);
    }
}

