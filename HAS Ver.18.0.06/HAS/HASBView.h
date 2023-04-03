
// HASView.h : CHASView 클래스의 인터페이스
//

#pragma once
#include "afxcmn.h"
#include "afxwin.h"
#include "afxdtctl.h"
#include "HASDoc.h"

//

//

class CHASBView : public CFormView
{
	DECLARE_DYNCREATE(CHASBView)

public:
	CHASBView();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~CHASBView();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HASBVIEW };
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
	CListCtrl m_ListB;
	CListCtrl m_ListBD;
	virtual void OnInitialUpdate();
	CEdit m_SearchCode;
	CEdit m_SearchCodeOut;
	afx_msg void OnBnClickedReadgeneral();
	afx_msg void OnBnClickedCodeadd();
};


#ifndef _DEBUG  // HASBView.cpp의 디버그 버전
inline CHASDoc* CHASBView::GetDocument() const
{
	return reinterpret_cast<CHASDoc*>(m_pDocument);
}
#endif

