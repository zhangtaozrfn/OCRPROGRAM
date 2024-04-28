#pragma once
/*!
   文件：  CryptErrorCode.h
   简要说明： 加密解密错误代码\n
   版权所有： 沈阳XXX有限公司\n
   项目：OCR码识别系统 \n
   作者：张涛 / 2024-04-22 \n
   修改记录：\n
	   张涛/2024-04-22/首次创建
*/
#include "BaseErrorCode.h"

#define EC_OK  0
/*! \enum EC_CRYPT_PROCESS_ERRCODE
    \brief 密码处理错误
*/

enum EC_CRYPT_PROCESS_ERRCODE : int
{
	EC_Sh256EncryptFailed = (CRYPT_CID_SH256_ENCRYPT * CODEBIT) + 1,    //!< 500100001 
};
