
// MainFrm.h : CMainFrame 클래스의 인터페이스
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
	
protected: // serialization에서만 만들어집니다.
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// 특성입니다.
public:

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// 구현입니다.
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // 컨트롤 모음이 포함된 멤버입니다.
	CToolBar          m_wndToolBar;
	CStatusBar        m_wndStatusBar;

// 생성된 메시지 맵 함수
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

