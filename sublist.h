#ifndef SUBLIST_H
#define SUBLIST_H

#include <QObject>
#include "QStringList"

class sublist : public QObject
{
    Q_OBJECT
public:
    explicit sublist(QObject *parent = 0);

signals:
    void done(QStringList);
public slots:
    void start(QString);

};

#endif // SUBLIST_H
