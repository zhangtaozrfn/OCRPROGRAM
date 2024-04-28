/*!
   �ļ���  QtWidgetsApplication.cpp
   ��Ҫ˵���� ��½����ʵ�ִ���\n
   ��Ȩ���У� ����XXX���޹�˾\n
   ��Ŀ��OCR��ʶ��ϵͳ \n
   ���ߣ����� / 2024-03-30 \n
   �޸ļ�¼��\n
       ����/2024-03-30/�״δ���
*/


#include "QtWidgetsApplication1.h"
#include "Sys.Log.Manager/Sys.Log.Manager.h"
#include "SysCommonConfigFile/SysCommonConfigFile.h"
#include "Counter.h"
#include <iostream>




/*!
   \fn  QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
   \brief ������½����Ĺ��캯������
   \param QWidget *parent  QWidget�����ָ��
   \return void
   \author zhangtao/2024-03-31/
   �޸ļ�¼��
       zhangtao /2024-03-31/ ��������
*/
QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    setWindowTitle(tr("Develop"));
    resize(800, 800);
  
    int test = 1000;
    LOGMSG_INFO(LOG_QtWidgetsApplication,LogFormatA_A("INFO failed! ErrLevel is").c_str());
    LOGMSG_DEBUG(LOG_QtWidgetsApplication,LogFormatA_A("DEBUG::SetLogLevel failed! ErrLevel is %d",test).c_str());
    LOGMSG_WARNING(LOG_QtWidgetsApplication,LogFormatA_A("WARGING::SetLogLevel failed! ErrLevel is %d", test).c_str());
    LOGMSG_ERROR(LOG_QtWidgetsApplication,LogFormatA_A("ERROR::SetLogLevel failed! ErrLevel is %d", test).c_str());

    connect(this, &QtWidgetsApplication1::getMoterboardId, this, &QtWidgetsApplication1::getMotherboardID);
    emit getMoterboardId();
} 

QString QtWidgetsApplication1::getMotherboardID(void)
{
    QProcess process;
    process.start("wmic", QStringList() << "baseboard" << "get" << "SerialNumber");
    process.waitForFinished();
    QString result = QString::fromLocal8Bit(process.readAllStandardOutput()).simplified();
    result = result.replace("SerialNumber", "").simplified();
    return result;
}

/*!
   \fn  QtWidgetsApplication1::~QtWidgetsApplication1()
   \brief ������½�����������������
   \return void
   \author zhangtao/2024-03-31/
   �޸ļ�¼��
       zhangtao /2024-03-31/ ��������
*/
QtWidgetsApplication1::~QtWidgetsApplication1()
{}
