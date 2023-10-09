
// Proga.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CProgaApp:
// Сведения о реализации этого класса: Proga.cpp
//

class CProgaApp : public CWinApp
{
public:
	CProgaApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CProgaApp theApp;
