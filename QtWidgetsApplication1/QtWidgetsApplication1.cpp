/*!
   文件：  QtWidgetsApplication.cpp
   简要说明： 登陆窗口实现代码\n
   版权所有： 沈阳XXX有限公司\n
   项目：OCR码识别系统 \n
   作者：张涛 / 2024-03-30 \n
   修改记录：\n
       张涛/2024-03-30/首次创建
*/


#include "QtWidgetsApplication1.h"
#include "Sys.Log.Manager/Sys.Log.Manager.h"
#include "SysCommonConfigFile/SysCommonConfigFile.h"
#include "Counter.h"
#include <iostream>




/*!
   \fn  QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
   \brief 创建登陆界面的构造函数声明
   \param QWidget *parent  QWidget对象的指针
   \return void
   \author zhangtao/2024-03-31/
   修改记录：
       zhangtao /2024-03-31/ 创建函数
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
   \brief 创建登陆界面的析构函数声明
   \return void
   \author zhangtao/2024-03-31/
   修改记录：
       zhangtao /2024-03-31/ 创建函数
*/
QtWidgetsApplication1::~QtWidgetsApplication1()
{}
