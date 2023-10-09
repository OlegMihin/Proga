// CNewDialog.cpp: файл реализации
//

#include "pch.h"
#include "Proga.h"
#include "CNewDialog.h"
#include "afxdialogex.h"


// Диалоговое окно CNewDialog

IMPLEMENT_DYNAMIC(CNewDialog, CDialogEx)

CNewDialog::CNewDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_NEWDIALOG, pParent)
{

}

CNewDialog::~CNewDialog()
{
}

void CNewDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CNewDialog, CDialogEx)
END_MESSAGE_MAP()


// Обработчики сообщений CNewDialog
