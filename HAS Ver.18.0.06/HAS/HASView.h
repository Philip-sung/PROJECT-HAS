
// HASView.h : CHASView 클래스의 인터페이스
//

#pragma once
#include "afxcmn.h"
#include "afxwin.h"
#include "afxdtctl.h"


class CHASView : public CFormView
{
public: // serialization에서만 만들어집니다.
	CHASView();
	DECLARE_DYNCREATE(CHASView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_HAS_FORM };
#endif

// 특성입니다.
public:
	CHASDoc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	virtual void OnInitialUpdate(); // 생성 후 처음 호출되었습니다.

// 구현입니다.
public:
	virtual ~CHASView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
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



#ifndef _DEBUG  // HASView.cpp의 디버그 버전
inline CHASDoc* CHASView::GetDocument() const
   { return reinterpret_cast<CHASDoc*>(m_pDocument); }
#endif

