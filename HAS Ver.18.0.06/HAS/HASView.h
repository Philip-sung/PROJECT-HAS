
// HASView.h : CHASView Ŭ������ �������̽�
//

#pragma once
#include "afxcmn.h"
#include "afxwin.h"
#include "afxdtctl.h"


class CHASView : public CFormView
{
public: // serialization������ ��������ϴ�.
	CHASView();
	DECLARE_DYNCREATE(CHASView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_HAS_FORM };
#endif

// Ư���Դϴ�.
public:
	CHASDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.
	virtual void OnInitialUpdate(); // ���� �� ó�� ȣ��Ǿ����ϴ�.

// �����Դϴ�.
public:
	virtual ~CHASView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:

	CListCtrl m_List;
	CEdit m_TradeNum;
	CEdit m_TradeCodeL;
	CEdit m_TradeContentL;
	CEdit m_TradeCostL;
	CEdit m_TradeCodeR;
	CEdit m_TradeContentR;
	CEdit m_TradeCostR;
	CEdit m_TradeDetail;
	CMonthCalCtrl m_CalendarJ;
	void AddList();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedDelete();
	afx_msg void OnBnClickedApply();
	afx_msg void OnLvnItemchangedListJour(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedModify();
	afx_msg void OnBnClickedSet();
	afx_msg void OnMcnSelectMonthcalendar3(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedInsert();
	afx_msg BOOL IsEdit(CWnd* pWnd);
	afx_msg void OnUpdateNeedSel(CCmdUI* pCmdUI);
	afx_msg void OnUpdateNeedClip(CCmdUI* pCmdUI);
	afx_msg void OnEditCopy();
	afx_msg void OnEditCut();
	afx_msg void OnEditPaste();
};



#ifndef _DEBUG  // HASView.cpp�� ����� ����
inline CHASDoc* CHASView::GetDocument() const
   { return reinterpret_cast<CHASDoc*>(m_pDocument); }
#endif

