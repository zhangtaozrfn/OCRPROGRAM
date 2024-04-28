#pragma once
/*!
   �ļ���  CryptErrorCode.h
   ��Ҫ˵���� ���ܽ��ܴ������\n
   ��Ȩ���У� ����XXX���޹�˾\n
   ��Ŀ��OCR��ʶ��ϵͳ \n
   ���ߣ����� / 2024-04-22 \n
   �޸ļ�¼��\n
	   ����/2024-04-22/�״δ���
*/
#include "BaseErrorCode.h"

#define EC_OK  0
/*! \enum EC_CRYPT_PROCESS_ERRCODE
    \brief ���봦�����
*/

enum EC_CRYPT_PROCESS_ERRCODE : int
{
	EC_Sh256EncryptFailed = (CRYPT_CID_SH256_ENCRYPT * CODEBIT) + 1,    //!< 500100001 
};
