#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionQuite, &QAction::triggered, this, &QApplication::quit);

    //adding header to tableview

    model = new QStandardItemModel();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Name")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Phone")));

    ui->tableView->setModel(model);

    //adding item to tableview

    QStandardItem *firstItem = new QStandardItem(QString("Parwiz"));
    QStandardItem *secondItem = new QStandardItem(QString("0948484"));

    model->setItem(0,0, firstItem);
    model->setItem(0,1, secondItem);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonSave_clicked()
{
    QStandardItem *name = new QStandardItem(ui->lineEditName->text());
    QStandardItem *phone = new QStandardItem(ui->lineEditPhone->text());

    model->appendRow({name, phone});
    clearFields();

    QMessageBox::information(this, "Application", "Record has been saved");

}

void MainWindow::clearFields()
{
    ui->lineEditName->setText("");
    ui->lineEditPhone->setText("");

}


void MainWindow::on_actionAbout_App_triggered()
{
    QMessageBox::about(this, "About Application", "This is application is created with Qt6 & C++");
}


void MainWindow::on_pushButtonClear_clicked()
{
    msg = new QMessageBox();
    msg->setText("Delete Items");
    msg->setInformativeText("Do you want to delete all items ? ");
    msg->setStandardButtons(QMessageBox::Yes | QMessageBox::Discard | QMessageBox::Cancel);
    int ret = msg->exec();

    if(ret == QMessageBox::Yes)
        return model->clear();
}


void MainWindow::on_pushButtonClearOne_clicked()
{
    bool ok;

    int rowId = QInputDialog::getInt(this, "Select Row", "Please enter row to delete", 1, 1,model->rowCount(), 1, &ok);

    if(ok ){

        model->removeRow(rowId-1);

    }
}

