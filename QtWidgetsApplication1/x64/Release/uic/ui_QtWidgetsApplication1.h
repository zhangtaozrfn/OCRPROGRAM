/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication1.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION1_H
#define UI_QTWIDGETSAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication1Class
{
public:
    QWidget *centralWidget;
    QPushButton *PBEnroll;
    QPushButton *PBBack;
    QLabel *TMachineCode;
    QLabel *TAuthorizeCode;
    QLabel *TCooperateCode;
    QTextBrowser *TBMachineNum;
    QTextBrowser *TBAuthorizeNum;
    QTextBrowser *TBAuthorizeNum_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication1Class)
    {
        if (QtWidgetsApplication1Class->objectName().isEmpty())
            QtWidgetsApplication1Class->setObjectName("QtWidgetsApplication1Class");
        QtWidgetsApplication1Class->resize(600, 400);
        centralWidget = new QWidget(QtWidgetsApplication1Class);
        centralWidget->setObjectName("centralWidget");
        PBEnroll = new QPushButton(centralWidget);
        PBEnroll->setObjectName("PBEnroll");
        PBEnroll->setGeometry(QRect(340, 230, 75, 24));
        PBBack = new QPushButton(centralWidget);
        PBBack->setObjectName("PBBack");
        PBBack->setGeometry(QRect(440, 230, 75, 24));
        TMachineCode = new QLabel(centralWidget);
        TMachineCode->setObjectName("TMachineCode");
        TMachineCode->setGeometry(QRect(53, 100, 111, 20));
        TAuthorizeCode = new QLabel(centralWidget);
        TAuthorizeCode->setObjectName("TAuthorizeCode");
        TAuthorizeCode->setGeometry(QRect(53, 140, 111, 20));
        TCooperateCode = new QLabel(centralWidget);
        TCooperateCode->setObjectName("TCooperateCode");
        TCooperateCode->setGeometry(QRect(53, 180, 111, 20));
        TBMachineNum = new QTextBrowser(centralWidget);
        TBMachineNum->setObjectName("TBMachineNum");
        TBMachineNum->setGeometry(QRect(200, 100, 256, 21));
        TBMachineNum->setOpenExternalLinks(false);
        TBMachineNum->setOpenLinks(true);
        TBAuthorizeNum = new QTextBrowser(centralWidget);
        TBAuthorizeNum->setObjectName("TBAuthorizeNum");
        TBAuthorizeNum->setGeometry(QRect(200, 140, 256, 21));
        TBAuthorizeNum_2 = new QTextBrowser(centralWidget);
        TBAuthorizeNum_2->setObjectName("TBAuthorizeNum_2");
        TBAuthorizeNum_2->setGeometry(QRect(200, 180, 256, 21));
        QtWidgetsApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetsApplication1Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        QtWidgetsApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsApplication1Class);
        mainToolBar->setObjectName("mainToolBar");
        QtWidgetsApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetsApplication1Class);
        statusBar->setObjectName("statusBar");
        QtWidgetsApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtWidgetsApplication1Class);

        QMetaObject::connectSlotsByName(QtWidgetsApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication1Class)
    {
        QtWidgetsApplication1Class->setWindowTitle(QCoreApplication::translate("QtWidgetsApplication1Class", "QtWidgetsApplication1", nullptr));
        PBEnroll->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "LogOn", nullptr));
        PBBack->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "Quit", nullptr));
        TMachineCode->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "MachineCode", nullptr));
        TAuthorizeCode->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "AuthorCode", nullptr));
        TCooperateCode->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "WorkCode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication1Class: public Ui_QtWidgetsApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION1_H
