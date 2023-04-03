
// HASView.h : CHASView Ŭ������ �������̽�
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
	CHASBView();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
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
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

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


#ifndef _DEBUG  // HASBView.cpp�� ����� ����
inline CHASDoc* CHASBView::GetDocument() const
{
	return reinterpret_cast<CHASDoc*>(m_pDocument);
}
#endif

