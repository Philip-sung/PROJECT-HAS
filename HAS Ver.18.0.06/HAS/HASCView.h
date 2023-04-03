#pragma once
#include "afxcmn.h"
#include "afxwin.h"
#include "afxdtctl.h"
#include "HASDoc.h"



// CHASCView 폼 뷰입니다.

class CHASCView : public CFormView
{
	DECLARE_DYNCREATE(CHASCView)

public:
	CHASCView();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~CHASCView();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HASCVIEW };
#endif

public:
	CHASDoc* GetDocument() const;

#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
	CListCtrl m_ListC;
	CListCtrl m_ListCD;
	afx_msg void OnBnClickedIsread();
};


#ifndef _DEBUG  // HASBView.cpp의 디버그 버전
inline CHASDoc* CHASCView::GetDocument() const
{
	return reinterpret_cast<CHASDoc*>(m_pDocument);
}
#endif
