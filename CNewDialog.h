#pragma once


// Диалоговое окно CNewDialog

class CNewDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CNewDialog)

public:
	CNewDialog(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CNewDialog();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NEWDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
