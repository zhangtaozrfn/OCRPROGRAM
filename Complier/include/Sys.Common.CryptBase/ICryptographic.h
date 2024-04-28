/*！
  \file   ICryptographic.h
  \breif  加密接口文件
  \copyright   沈阳XXXX技术有限公司  \n\n
  
  项目: \n
  作者: 张涛 /2024-04-15/ \n
  修改记录：\n
*/
#pragma once

#include <string>
#include <sal.h>
#include "ErrorCodeDef/CryptErrorCode.h"
using namespace std;

#ifdef SYSCOMMONCRYPTBASE_EXPORTS
#define SYSCOMMONCRYPTBASE_API __declspec(dllexport)
#else
#define SYSCOMMONCRYPTBASE_API __declspec(dllimport)
#pragma comment(lib,"Sys.Common.CryptBase.lib")
#endif

class SYSCOMMONCRYPTBASE_API ICryptographic
{
public:
	static ICryptographic* GetInstance();

	virtual bool PermutationEncrypt(_In_ const std::string seed, _In_ const std::string plantext, _Out_ std::string& chiphertext) = 0;
	virtual bool PermutationDecrypt(_In_ const std::string seed, _In_ const std::string cipertext, _Out_ std::string& plaintext) = 0;

	virtual bool SH256Encrypt(_In_ const std::string seed, _Out_ std::string& ciphertext) = 0;
	
	virtual bool AES256Encrypt(_In_ const std::string seed, _In_ const std::string plaintext, _Out_ std::string& ciphertext) = 0;
	virtual bool AES256Decrypt(_In_ const std::string seed,_In_ const std::string ciphertext, _Out_ std::string& plaintext) = 0;
	
	virtual bool FileEncrypt(_In_ const std::string filepath, _Out_ std::string& ciphertext) = 0;
	virtual bool FileDecrypt(_In_ const std::string filepath, _Out_ std::string& plaintext) = 0;
	virtual bool OutputFileEncrypt(_In_ std::string srcfilepath) = 0;
	virtual bool OutputFileDecrypt(_In_ std::string srcfilepath) = 0;
};
