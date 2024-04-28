/*!
   文件：  syslogmanager.h
   简要说明： 系统日志管理文件\n
   版权所有： 沈阳XXX有限公司\n
   项目：OCR码识别系统 \n
   作者：张涛 / 2024-04-06 \n
   修改记录：\n
	   张涛/2024-04-06/首次创建
*/
#pragma once

#include <iostream>
#include <string>

#include "spdlog/spdlog.h"
#include "spdlog/pattern_formatter.h"
#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/async.h"

#ifdef SYSLOGMANAGER_EXPORTS
#define SYSLOGMANAGER_API __declspec(dllexport)
#else 
#define SYSLOGMANAGER_API __declspec(dllimport)
#pragma comment(lib, "Sys.Log.Manager.lib")
#endif


struct LogConfig {
	std::string level;
	std::string path;
	int64_t size;
	int     count;
};

class SYSLOGMANAGER_API LogMessage
{
public:
	static  LogMessage* getInstance() {
		static LogMessage instance;
		return &instance;
	}
	void Initlize(const char* pModuleName);
	void Debug(const char* pModuleName, const char* pMsg);
	void Info(const char* pModuleName, const char* pMsg);
	void Warning(const char* pModuleName, const char* pMsg);
	void Error(const char* pModuleName, const char* pMsg);
private:
	LogConfig m_logConfig;
};

#define LOGMSG_INIT      LogMessage::getInstance()->Initlize 
#define LOGMSG_DEBUG     LogMessage::getInstance()->Debug
#define LOGMSG_INFO      LogMessage::getInstance()->Info
#define LOGMSG_WARNING   LogMessage::getInstance()->Warning
#define LOGMSG_ERROR     LogMessage::getInstance()->Error
#define MAX_PATH_LENGTH  1000

inline std::string LogFormatA_A(const char* pFormat, ...)
{
	va_list args;
	va_start(args, pFormat);
	char pRet[1024] = { 0 };
	_vsnprintf_s(pRet, 1023, pFormat, args);
	va_end(args);

	return std::string(pRet);
}
/*！
	\struct LogConfig;
	\brief  日志配置结构体

	作为日志系统配置

	修改记录： \n
	张涛  /2024-04-06/创建
*/

/*！
	\struct LogConfig;
	\brief  日志配置结构体

	作为日志系统配置

	修改记录： \n
	张涛  /2024-04-06/创建
*/





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




