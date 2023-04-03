
// MainFrm.h : CMainFrame Ŭ������ �������̽�
//

#pragma once

#include "HASDoc.h"
#include "HASView.h"
#include "HASBView.h"
#include "HASCView.h"
#include "HASDView.h"

class CMainFrame : public CFrameWnd
{
public:
	CHASView * m_pHASView;
	CHASBView * m_pHASBView;
	CHASCView * m_pHASCView;
	CHASDView * m_pHASDView;
	bool m_bFirst;
	
protected: // serialization������ ��������ϴ�.
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// Ư���Դϴ�.
public:

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// �����Դϴ�.
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // ��Ʈ�� ������ ���Ե� ����Դϴ�.
	CToolBar          m_wndToolBar;
	CStatusBar        m_wndStatusBar;

// ������ �޽��� �� �Լ�
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()

	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
public:
	void SwitchToForm(unsigned int viewID);
	afx_msg void OnFirstview();
	afx_msg void OnSecondview();
	afx_msg void OnThirdview();
	afx_msg void OnFourthview();
	afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);
};

