#include "sublist.h"
#include "QProcess"
#include "QStringList"
#include"QDir"
#include "QDebug"
sublist::sublist(QObject *parent) :
    QObject(parent)
{
}
void sublist::start(QString domain){
    QStringList result;
    QProcess *pr = new QProcess();
    QStringList arg;
    arg<<"-d"<<domain;
    QString progarm = QDir::currentPath()+"/sublist.exe";
    pr->start(progarm,arg);
    pr->waitForFinished();
    qDebug()<<"chay xong";
    QString line=pr->readLine();
    if(line.contains("Total Unique Subdomains Found:"))
    {
        line=pr->readLine();
        while(line!=""){
//            qDebug()<<line;
            result<<line;
            line=pr->readLine();
        }
    }
    else{
        result.clear();
    }
    emit this->done(result);
}
