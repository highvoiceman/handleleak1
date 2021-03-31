
// HandleLeak1.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CHandleLeak1App:
// See HandleLeak1.cpp for the implementation of this class
//

class CHandleLeak1App : public CWinApp
{
public:
	CHandleLeak1App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CHandleLeak1App theApp;
