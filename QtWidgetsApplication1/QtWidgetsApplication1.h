/*!
   �ļ���  QtWidgetsApplication.h
   ��Ҫ˵���� ��½����ʵ��\n
   ��Ȩ���У� ����XXX���޹�˾\n
   ��Ŀ��OCR��ʶ��ϵͳ \n
   ���ߣ����� / 2024-03-30 \n
   �޸ļ�¼��\n
       ����/2024-03-30/�״δ���
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
   �ࣺ  QtWidetsApplication1
   ��Ҫ˵���� ��½����Ӧ����\n
   ��Ȩ���У� ����XXX���޹�˾\n

   ��Ŀ��OCR��ʶ��ϵͳ \n
   ���ߣ����� / 2024-03-30 \n
   �޸ļ�¼��\n
       ����/2024-03-30/�״δ���
*/

#define LOG_QtWidgetsApplication "Qt.Widgets.Application"

class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget *parent = nullptr);
    ~QtWidgetsApplication1();
private:
    Ui::QtWidgetsApplication1Class ui;                 //!�����½����ui
private slots:
    QString getMotherboardID(void);
signals:
    void getMoterboardId(void);
};
