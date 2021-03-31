
// HandleLeak1Dlg.h : header file
//

#pragma once


// CHandleLeak1Dlg dialog
class CHandleLeak1Dlg : public CDialogEx
{
// Construction
public:
	CHandleLeak1Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HANDLELEAK1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCreateLeakClicked();
private:
	HANDLE m_semaphore;
};
