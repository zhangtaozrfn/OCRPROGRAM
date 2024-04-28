/*!
   �ļ���  syslogmanager.h
   ��Ҫ˵���� ϵͳ��־�����ļ�\n
   ��Ȩ���У� ����XXX���޹�˾\n
   ��Ŀ��OCR��ʶ��ϵͳ \n
   ���ߣ����� / 2024-04-06 \n
   �޸ļ�¼��\n
	   ����/2024-04-06/�״δ���
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
/*��
	\struct LogConfig;
	\brief  ��־���ýṹ��

	��Ϊ��־ϵͳ����

	�޸ļ�¼�� \n
	����  /2024-04-06/����
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




#endif
