#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QProcess"
#include "QByteArray"
#include "QDir"
#include "QStandardItemModel"
#include "QHeaderView"
#include "QMessageBox"
#include "QThread"
#include "QTimer"
#include "QMovie"
#include "sublist.h"
#include "QLabel"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setupTable();

//    QMovie *movie = new QMovie(QDir::currentPath()+"/loading.gif");
//    this->ui->label->setMovie(movie);

//    movie->start();

//    this->ui->label->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::runstatus(QStringList l){
//    this->ui->label->hide();
   this->ui->progressBar->setValue(100);
//    this->ui->tableView->show();
    if(l.empty()){
        QMessageBox::information(
            this,
            QString::fromUtf8("Lỗi"),
                    QString::fromUtf8("Không tìm thấy tên miền con nào của ' ")+this->domain+" '");
        return;
    }
    for(int i=0; i<l.size();i++){
    QList<QStandardItem *> a;
    a.append(new QStandardItem(l.at(i).trimmed()));
    this->model->appendRow(a);
    }
//    timer->stop();
    //delete timer;
}
void MainWindow::runto100(){
    this->ui->progressBar->setValue(this->ui->progressBar->value()+1);

}

void MainWindow::setupTable(){

    model = new QStandardItemModel(0,1,this);
    model->setHorizontalHeaderItem(0,new QStandardItem(QString::fromUtf8("Kết quả")));
    this->ui->tableView->setModel(model);
    this->ui->tableView->setAlternatingRowColors(true);
    this->ui->tableView->setColumnWidth(0,700);
//    this->ui->tableView->verticalHeader()->hide();
//    this->ui->tableView->horizontalHeader()->setStyleSheet("color:black");
    this->ui->tableView->show();
}
void MainWindow::on_pushButton_clicked()
{
//    this->ui->label->show();
    this->ui->progressBar->setValue(0);
    QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(runto100()));
        timer->start(700);
//    this->ui->tableView->hide();
    this->model->clear();
    model->setHorizontalHeaderItem(0,new QStandardItem(QString::fromUtf8("Kết quả")));
        this->ui->tableView->setColumnWidth(0,700);
    this->domain = this->ui->lineEdit->text();
//    qDebug()<<domain;
    if(this->domain!=""){
        emit this->findSublist(domain);
    }else{
        QMessageBox::information(
            this,
            QString::fromUtf8("Lỗi"),
                    QString::fromUtf8("Không tìm thấy tên miền con nào của ' ")+this->domain+" '");
//        this->ui->label->hide();
        this->ui->tableView->show();
    }

}

void MainWindow::on_lineEdit_editingFinished()
{
    if(this->ui->lineEdit->text()!=this->domain)
    this->on_pushButton_clicked();
}
