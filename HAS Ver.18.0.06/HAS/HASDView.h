#pragma once
#include "afxcmn.h"
#include "afxwin.h"
#include "afxdtctl.h"
#include "HASDoc.h"



// CHASDView 폼 뷰입니다.

class CHASDView : public CFormView
{
	DECLARE_DYNCREATE(CHASDView)

public:
	CHASDView();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~CHASDView();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HASDVIEW };
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
	CListCtrl m_ListD;
	CListCtrl m_ListDD;
	virtual void OnInitialUpdate();
	afx_msg void OnBnClickedFsread();
};


#ifndef _DEBUG  // HASBView.cpp의 디버그 버전
inline CHASDoc* CHASDView::GetDocument() const
{
	return reinterpret_cast<CHASDoc*>(m_pDocument);
}
#endif
