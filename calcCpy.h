
// calcCpy.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CcalcCpyApp:
// �� Ŭ������ ������ ���ؼ��� calcCpy.cpp�� �����Ͻʽÿ�.
//

class CcalcCpyApp : public CWinApp
{
public:
	CcalcCpyApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CcalcCpyApp theApp;
