#pragma once

#include "syscommonconfigfile_global.h"
#include "Sys.Log.Manager/Sys.Log.Manager.h"
#include <QFile>
#include <QDomDocument>
#include <QDomElement>
#include <QDebug>

#define PATHFILE "C:\\Users\\ZhangTao\\source\\repos\\OCRSLN\\Complier\\config\\common\\FileConfig.xml" ;
#define LOG_SysCommonConfigFile "SysCommonConfigFile"


class SYSCOMMONCONFIGFILE_EXPORT SysCommonConfigFile
{
public:
    static SysCommonConfigFile* GetInstance();
    SysCommonConfigFile();
    ~SysCommonConfigFile();
    bool ReadFileConfig(void);
private:
    static SysCommonConfigFile* g_instance;
    QString m_UserConfigPath;
};