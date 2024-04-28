#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#include <QTranslator>
#include <QSettings>
#include <QDir>
#include <windows.h>
#include "SysCommonConfigFile/SysCommonConfigFile.h"
#include "Sys.Log.Manager/Sys.Log.Manager.h"
#include <iostream>

QTranslator* trans = NULL;
QString readSetting();


/*!
   \fn  QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
   \brief 创建登陆界面的构造函数声明
   \param QWidget *parent  QWidget对象的指针
   \return void
   \author zhangtao/2024-03-31/
   修改记录：
       zhangtao /2024-03-31/ 创建函数
*/


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator translator;
    QString curLang = readSetting();
   // if (curLang == "EN")
     //  translator.load("Translation_en.qm", "C:\\Users\\ZhangTao\\source\\repos\\QtWidgetsApplication1\\x64\\Release");
    //else
    QString exeDir = QCoreApplication::applicationDirPath();
    qDebug() << "absolutePath: " << exeDir;
    translator.load("Translation_zh_CN.qm", exeDir);
    a.installTranslator(&translator);
    LOGMSG_INIT(LOG_QtWidgetsApplication);
    LOGMSG_INIT(LOG_SysCommonConfigFile);
    bool check = SysCommonConfigFile::GetInstance()->ReadFileConfig();
    QtWidgetsApplication1 w;
    w.show();
    return a.exec();
}
QString readSetting()
{
    QString organization = "WWB-Qt";
    QString appName = "QtWidetsApplication1";
    QSettings settings(organization, appName);
    QString Language = settings.value("Language", "CN").toString();
    return Language;
}
