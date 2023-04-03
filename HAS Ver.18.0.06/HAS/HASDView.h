#pragma once
#include "afxcmn.h"
#include "afxwin.h"
#include "afxdtctl.h"
#include "HASDoc.h"



// CHASDView �� ���Դϴ�.

class CHASDView : public CFormView
{
	DECLARE_DYNCREATE(CHASDView)

public:
	CHASDView();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
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
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_ListD;
	CListCtrl m_ListDD;
	virtual void OnInitialUpdate();
	afx_msg void OnBnClickedFsread();
};


#ifndef _DEBUG  // HASBView.cpp�� ����� ����
inline CHASDoc* CHASDView::GetDocument() const
{
	return reinterpret_cast<CHASDoc*>(m_pDocument);
}
#endif
