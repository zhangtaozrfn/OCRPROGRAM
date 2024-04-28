/*!
   文件：  QtWidgetsApplication.h
   简要说明： 登陆窗口实现\n
   版权所有： 沈阳XXX有限公司\n
   项目：OCR码识别系统 \n
   作者：张涛 / 2024-03-30 \n
   修改记录：\n
       张涛/2024-03-30/首次创建
*/
#pragma once


#include <QtWidgets/QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QProcess>
#include <QString>
#include <QDebug>
#include "ui_QtWidgetsApplication1.h"


/*!
   类：  QtWidetsApplication1
   简要说明： 登陆窗口应用类\n
   版权所有： 沈阳XXX有限公司\n

   项目：OCR码识别系统 \n
   作者：张涛 / 2024-03-30 \n
   修改记录：\n
       张涛/2024-03-30/首次创建
*/

#define LOG_QtWidgetsApplication "Qt.Widgets.Application"

class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget *parent = nullptr);
    ~QtWidgetsApplication1();
private:
    Ui::QtWidgetsApplication1Class ui;                 //!定义登陆窗口ui
private slots:
    QString getMotherboardID(void);
signals:
    void getMoterboardId(void);
};
