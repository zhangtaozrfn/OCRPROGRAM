/*!
   文件：  syslogmanager.h
   简要说明： 系统日志管理文件\n
   版权所有： 沈阳XXX有限公司\n
   项目：OCR码识别系统 \n
   作者：张涛 / 2024-04-06 \n
   修改记录：\n
	   张涛/2024-04-06/首次创建
*/
#ifndef SYSLOGMANAGER_H_
#define SYSLOGMANAGER_H_

#include <iostream>
#include <string>

#ifdef SYSLOGMANAGER_EXPORTS
#define SYSLOGMANAGER_API __declspec(dllexport)
#else 
#define SYSLOGMANAGER_API __declspec(dllimport)
#pragma comment(lib, "Sys.Log.Manager.lib")
#endif


#define LIB_LOG_INSTANCE ILogMessage::GetLogMessage()
#define LOGMSG_DEBUG     ILogMessage::GetLogMessage()->Debug
#define LOGMSG_INFO      ILogMessage::GetLogMessage()->Info
#define LOGMSG_WARNING   ILogMessage::GetLogMessage()->Warning
#define LOGMSG_ERROR     ILogMessage::GetLogMessage()->Error
/*！
	\struct LogConfig;
	\brief  日志配置结构体

	作为日志系统配置

	修改记录： \n
	张涛  /2024-04-06/创建
*/

struct SYSLOGMANAGER_API LogConfig {
	std::string level;
	std::string path;
	int64_t size;
	int     count;
};

class SYSLOGMANAGER_API ILogMessage
{
protected:
	ILogMessage(void);
	virtual ~ILogMessage(void);
public:
	static ILogMessage* GetLogMessage();
    
	virtual bool Initlize(const std::string* pSettingPath = NULL, bool bServer = false) = 0;
	virtual bool UnInitlize() = 0;

	virtual void Debug(const std::string* pModuleName, const std::string* pMsg, const std::string* pRrocName = NULL, const std::string* pLogTime = NULL) = 0;
	virtual void Info(const std::string* pModuleName, const std::string* pMsg, const std::string* pRrocName = NULL, const std::string* pLogTime = NULL) = 0;
	virtual void Warning(const std::string* pModuleName, const std::string* pMsg, const std::string* pRrocName = NULL, const std::string* pLogTime = NULL) = 0;
	virtual void Error(const std::string* pModuleName, const std::string* pMsg, const std::string* pRrocName = NULL, const std::string* pLogTime = NULL) = 0;
};


/*！
	\typedef int(*SysLogManagerDLLGlobalLogInitFPtr)(const LogConfig& conf)
	\brief  系统日志管理库结构函数GlobalLogInit导出指针
*/

/*！
	\typedef int(*SysLogManagerDLLGlobalLogGetLevelFPtr)();
	\brief  系统日志管理库结构函数GlobalLogGetLevel导出指针
*/

/*！
	\typedef int(*SysLogManagerDLLGlobalLogSetLevelFPtr)(const std::string& level);
	\brief  系统日志管理库结构函数GlobalLogSetLevel导出指针
*/

/*！
	\typedef int(*SysLogManagerDLLGlobalLogSetInfoFPtr)(const std::string& info);
	\brief  系统日志管理库结构函数GlobalLogSetInfo导出指针
*/




#endif
