/*!
   �ļ���  syslogmanager.h
   ��Ҫ˵���� ϵͳ��־�����ļ�\n
   ��Ȩ���У� ����XXX���޹�˾\n
   ��Ŀ��OCR��ʶ��ϵͳ \n
   ���ߣ����� / 2024-04-06 \n
   �޸ļ�¼��\n
	   ����/2024-04-06/�״δ���
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
/*��
	\struct LogConfig;
	\brief  ��־���ýṹ��

	��Ϊ��־ϵͳ����

	�޸ļ�¼�� \n
	����  /2024-04-06/����
*/

/*��
	\struct LogConfig;
	\brief  ��־���ýṹ��

	��Ϊ��־ϵͳ����

	�޸ļ�¼�� \n
	����  /2024-04-06/����
*/





/*��
	\typedef int(*SysLogManagerDLLGlobalLogInitFPtr)(const LogConfig& conf)
	\brief  ϵͳ��־�����ṹ����GlobalLogInit����ָ��
*/

/*��
	\typedef int(*SysLogManagerDLLGlobalLogGetLevelFPtr)();
	\brief  ϵͳ��־�����ṹ����GlobalLogGetLevel����ָ��
*/

/*��
	\typedef int(*SysLogManagerDLLGlobalLogSetLevelFPtr)(const std::string& level);
	\brief  ϵͳ��־�����ṹ����GlobalLogSetLevel����ָ��
*/

/*��
	\typedef int(*SysLogManagerDLLGlobalLogSetInfoFPtr)(const std::string& info);
	\brief  ϵͳ��־�����ṹ����GlobalLogSetInfo����ָ��
*/




