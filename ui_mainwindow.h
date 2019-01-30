/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Wed Jan 30 17:50:42 2019
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTableView *tableView;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(793, 539);
    centralWidget = new QWidget(MainWindow);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    gridLayout = new QGridLayout(centralWidget);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    pushButton = new QPushButton(centralWidget);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    QFont font;
    font.setPointSize(14);
    pushButton->setFont(font);

    gridLayout->addWidget(pushButton, 0, 1, 1, 1);

    lineEdit = new QLineEdit(centralWidget);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setFont(font);

    gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

    tableView = new QTableView(centralWidget);
    tableView->setObjectName(QString::fromUtf8("tableView"));

    gridLayout->addWidget(tableView, 2, 0, 1, 2);

    label = new QLabel(centralWidget);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 1, 0, 1, 1);

    MainWindow->setCentralWidget(centralWidget);
    menuBar = new QMenuBar(MainWindow);
    menuBar->setObjectName(QString::fromUtf8("menuBar"));
    menuBar->setGeometry(QRect(0, 0, 793, 20));
    MainWindow->setMenuBar(menuBar);
    mainToolBar = new QToolBar(MainWindow);
    mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
    MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
    statusBar = new QStatusBar(MainWindow);
    statusBar->setObjectName(QString::fromUtf8("statusBar"));
    MainWindow->setStatusBar(statusBar);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "T\303\254m ki\341\272\277m subdomain", 0, QApplication::UnicodeUTF8));
    pushButton->setText(QApplication::translate("MainWindow", "T\303\254m ki\341\272\277m", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    lineEdit->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Nh\341\272\255p v\303\240o domain ( VD &quot;Google.com&quot; )v\303\240 b\341\272\245m n\303\272t &quot;t\303\254m ki\341\272\277m&quot;</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    lineEdit->setText(QString());
    label->setText(QString());
    Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
