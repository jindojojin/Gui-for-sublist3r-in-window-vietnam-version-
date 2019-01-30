#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QStandardItemModel"
#include "QProcess"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_pushButton_clicked();
    void runstatus(QStringList);
    void runto100(int,QProcess::ExitStatus);
private:
    Ui::MainWindow *ui;
    void setupTable();
    QStandardItemModel *model;
    QString domain;
signals:
    void findSublist(QString);

};

#endif // MAINWINDOW_H
