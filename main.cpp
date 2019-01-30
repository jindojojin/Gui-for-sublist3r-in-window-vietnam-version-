#include <QtGui/QApplication>
#include "mainwindow.h"
#include "sublist.h"
#include "QThread"
#include "QObject"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QThread *th= new QThread();
    sublist *s = new sublist();
    s->moveToThread(th);
    QObject::connect(s,SIGNAL(done(QStringList)),&w,SLOT(runstatus(QStringList)));
    QObject::connect(&w,SIGNAL(findSublist(QString)),s,SLOT(start(QString)));
    th->start();

    return a.exec();
}
