
// EncryptDecrypt.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CEncryptDecryptApp:
// �йش����ʵ�֣������ EncryptDecrypt.cpp
//

class CEncryptDecryptApp : public CWinAppEx
{
public:
	CEncryptDecryptApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CEncryptDecryptApp theApp;