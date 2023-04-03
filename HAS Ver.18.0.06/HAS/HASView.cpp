
// HASView.cpp : CHASView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "HAS.h"
#endif

#include "HASDoc.h"
#include "HASView.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
// parm_data : ','를  포함하지 않은 숫자가 저장된 문자열. 예) 1234
// parm_string : parm_data에 들어있는 숫자에 ',' 처리를 하여 저장할 문자열. 예) 1,234
//
// [ 함수 사용 방법 ]
// CString org_number = "1234", display_number;
// ConvertDataToString(org_number, display_number);
// 또는
// ConvertDataToString("1234", display_number);

void ConvertDataToString(CString parm_data, CString &parm_string)
{
	// 결과값을 정확하게 구성하기 위해서 ',' 처리결과가 저장될 문자열 변수를 초기화한다.
	if (parm_string.GetLength()) parm_string.Format(_T(""));
	// 문자열의 길이를 구한다.
	int count = parm_data.GetLength();

	for (int i = 0; i < count; i++) {
		// 3의 배수일 때 "," 를 문자열에 추가한다.
		if (i && !(i % 3)) parm_string = _T(",") + parm_string;
		// parm_data 에서 parm_string으로 숫자한개씩 순차적으로 복사한다.
		parm_string = CString(parm_data[count - 1 - i]) + parm_string;
	}
}


//

CString CodeToName(long);

CString CodeToName(long CODENAME)
{
	CString temp;

	/*if (CODENAME == )
	temp = _T("");*/
	if (CODENAME == 1)
		temp = _T("자산");
	if (CODENAME == 2)
		temp = _T("자본");
	if (CODENAME == 3)
		temp = _T("부채");
	if (CODENAME == 4)
		temp = _T("수익");
	if (CODENAME == 5)
		temp = _T("비용");

	//자산
	if (CODENAME == 6)
		temp = _T("현금");
	if (CODENAME == 11)
		temp = _T("투자자산(유동)");
	if (CODENAME == 16)
		temp = _T("투자자산(비유동)");
	if (CODENAME == 21)
		temp = _T("단기채권");
	if (CODENAME == 26)
		temp = _T("장기채권");
	if (CODENAME == 31)
		temp = _T("미수금");
	if (CODENAME == 36)
		temp = _T("선급금");
	if (CODENAME == 41)
		temp = _T("비품");
	if (CODENAME == 46)
		temp = _T("소모품");
	if (CODENAME == 51)
		temp = _T("재고자산");
	if (CODENAME == 56)
		temp = _T("부동산");
	if (CODENAME == 61)
		temp = _T("무형자산");

	//자본
	if (CODENAME == 7)
		temp = _T("보통자본금");
	if (CODENAME == 12)
		temp = _T("우선자본금");
	if (CODENAME == 17)
		temp = _T("자본거래비용");
	if (CODENAME == 22)
		temp = _T("이익잉여금(자본)");
	if (CODENAME == 27)
		temp = _T("취득");
	if (CODENAME == 32)
		temp = _T("배당");
	if (CODENAME == 37)
		temp = _T("증여");
	if (CODENAME == 42)
		temp = _T("주식발행초과금");
	if (CODENAME == 47)
		temp = _T("주식할인발행차금");
	if (CODENAME == 52)
		temp = _T("자본조정");


	//부채
	if (CODENAME == 8)
		temp = _T("차입금");
	if (CODENAME == 13)
		temp = _T("단기채무");
	if (CODENAME == 18)
		temp = _T("장기채무");
	if (CODENAME == 23)
		temp = _T("예수금");
	if (CODENAME == 28)
		temp = _T("미지급비용");
	if (CODENAME == 33)
		temp = _T("채권발행");
	if (CODENAME == 38)
		temp = _T("보증충당부채");
	if (CODENAME == 43)
		temp = _T("할부조건부채");
	if (CODENAME == 48)
		temp = _T("매입채무");
	if (CODENAME == 53)
		temp = _T("증여성부채");


	//수익
	if (CODENAME == 9)
		temp = _T("영업수익");
	if (CODENAME == 14)
		temp = _T("급여수취");
	if (CODENAME == 19)
		temp = _T("금융자산처분이익");
	if (CODENAME == 24)
		temp = _T("유형자산처분이익");
	if (CODENAME == 29)
		temp = _T("이자수익");
	if (CODENAME == 34)
		temp = _T("배당금수익");
	if (CODENAME == 39)
		temp = _T("임대료");
	if (CODENAME == 44)
		temp = _T("매출");
	if (CODENAME == 49)
		temp = _T("세입");
	if (CODENAME == 54)
		temp = _T("기타수익");


	//비용
	if (CODENAME == 10)
		temp = _T("H.R");
	if (CODENAME == 15)
		temp = _T("필요경비");
	if (CODENAME == 20)
		temp = _T("납세");
	if (CODENAME == 25)
		temp = _T("생활비");
	if (CODENAME == 30)
		temp = _T("식비");
	if (CODENAME == 35)
		temp = _T("소모품비");
	if (CODENAME == 40)
		temp = _T("교통비");
	if (CODENAME == 45)
		temp = _T("교육비");
	if (CODENAME == 50)
		temp = _T("유흥비");
	if (CODENAME == 55)
		temp = _T("자기관리비");
	if (CODENAME == 60)
		temp = _T("특수비");
	if (CODENAME == 65)
		temp = _T("기부금");
	if (CODENAME == 70)
		temp = _T("임차료");
	if (CODENAME == 75)
		temp = _T("인건비");
	if (CODENAME == 80)
		temp = _T("자산처분손실");
	if (CODENAME == 85)
		temp = _T("매출원가");
	if (CODENAME == 90)
		temp = _T("이자비용");
	if (CODENAME == 95)
		temp = _T("기타손실");

	return temp;
}

// CHASView

IMPLEMENT_DYNCREATE(CHASView, CFormView)

BEGIN_MESSAGE_MAP(CHASView, CFormView)
	ON_WM_GETMINMAXINFO()
	ON_BN_CLICKED(IDC_ADD, &CHASView::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_DELETE, &CHASView::OnBnClickedDelete)
	ON_BN_CLICKED(IDC_APPLY, &CHASView::OnBnClickedApply)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST_JOUR, &CHASView::OnLvnItemchangedListJour)
	ON_BN_CLICKED(IDC_Set, &CHASView::OnBnClickedSet)
	ON_NOTIFY(MCN_SELECT, IDC_MONTHCALENDAR3, &CHASView::OnMcnSelectMonthcalendar3)
	ON_BN_CLICKED(IDC_INSERT, &CHASView::OnBnClickedInsert)
END_MESSAGE_MAP()

// CHASView 생성/소멸

CHASView::CHASView()
	: CFormView(IDD_HAS_FORM)
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CHASView::~CHASView()
{
}

void CHASView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_JOUR, m_List);
	DDX_Control(pDX, IDC_EDIT1, m_TradeNum);
	DDX_Control(pDX, IDC_EDIT2, m_TradeCodeL);
	DDX_Control(pDX, IDC_EDIT3, m_TradeContentL);
	DDX_Control(pDX, IDC_EDIT4, m_TradeCostL);
	DDX_Control(pDX, IDC_EDIT5, m_TradeCodeR);
	DDX_Control(pDX, IDC_EDIT6, m_TradeContentR);
	DDX_Control(pDX, IDC_EDIT7, m_TradeCostR);
	DDX_Control(pDX, IDC_EDIT8, m_TradeDetail);
	DDX_Control(pDX, IDC_MONTHCALENDAR3, m_CalendarJ);
}

BOOL CHASView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CFormView::PreCreateWindow(cs);
}



void CHASView::OnInitialUpdate()
{
	CHASDoc *pDoc = GetDocument();
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();


	if (1 == 1) {
		CRect rect;
		//리스트 컨트롤의 크기를 얻어온다.
		m_List.GetClientRect(&rect);

		for (int i = 0; i < 8; i++)
		m_List.DeleteColumn(0);

		// 컬럼 추가
		m_List.InsertColumn(0, _T("거래번호"), LVCFMT_LEFT, 72);
		m_List.InsertColumn(1, _T("코드"), LVCFMT_LEFT, 58);
		m_List.InsertColumn(2, _T("항목"), LVCFMT_LEFT, 135);
		m_List.InsertColumn(3, _T("금액"), LVCFMT_LEFT, 178);
		m_List.InsertColumn(4, _T("코드"), LVCFMT_LEFT, 58);
		m_List.InsertColumn(5, _T("항목"), LVCFMT_LEFT, 135);
		m_List.InsertColumn(6, _T("금액"), LVCFMT_LEFT, 178);

		//마지막에 추가할 컬럼의 폭은 리스트 컨트롤의 너비에서 이미 추가한 
		//컬럼들의 너비를 뺀 값으로 하면 컬럼이 리스트 컨트롤에 딱 맞게 추가된다.
		m_List.InsertColumn(7, _T("상세내역"), LVCFMT_LEFT, rect.Width() - 831);


		m_List.SetExtendedStyle(m_List.GetExtendedStyle() | LVS_EX_GRIDLINES);
		m_List.SetExtendedStyle(m_List.GetExtendedStyle() | LVS_EX_FULLROWSELECT);

	}
	else
		return;
	SYSTEMTIME cur_time;
	CString Year;
	CString Month;
	CString Day;
	CString ZERO = _T("0");
	long DateCode;
	CString DateCodeS;

	m_CalendarJ.GetCurSel(&cur_time);


	Year.Format(_T("%d"), cur_time.wYear);
	Month.Format(_T("%d"), cur_time.wMonth);
	Day.Format(_T("%d"), cur_time.wDay);

	if (_wtol(Month) < 10) {
		if (_wtol(Day) < 10) {
			DateCode = _wtol(Year + ZERO + Month + ZERO + Day) - 20000000;
			DateCodeS.Format(_T("%d"), DateCode);
			m_TradeNum.SetWindowTextW(DateCodeS);
		}
		else if (_wtol(Day) >= 10) {
			DateCode = _wtol(Year + ZERO + Month + Day) - 20000000;
			DateCodeS.Format(_T("%d"), DateCode);
			m_TradeNum.SetWindowTextW(DateCodeS);
		}
		else
			return;
	}
	else if (_wtol(Month) >= 10) {
		if (_wtol(Day) < 10) {
			DateCode = _wtol(Year + Month + ZERO + Day) - 20000000;
			DateCodeS.Format(_T("%d"), DateCode);
			m_TradeNum.SetWindowTextW(DateCodeS);
		}
		else if (_wtol(Day) >= 10) {
			DateCode = _wtol(Year + Month + Day) - 20000000;
			DateCodeS.Format(_T("%d"), DateCode);
			m_TradeNum.SetWindowTextW(DateCodeS);
		}
		else
			return;
	}
	else
		return;

}


// CHASView 진단

#ifdef _DEBUG
void CHASView::AssertValid() const
{
	CFormView::AssertValid();
}

void CHASView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CHASDoc* CHASView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHASDoc)));
	return (CHASDoc*)m_pDocument;
}
#endif //_DEBUG


// CHASView 메시지 처리기






void CHASView::AddList(void)
{
	return;
}

void CHASView::OnBnClickedAdd()
{
	int nItemNum = m_List.GetItemCount();

	CString temp;
	CString tempcomma;
	long Code1;
	CHASDoc *pDoc = GetDocument();

	m_TradeNum.GetWindowTextW(temp);
	m_List.InsertItem(nItemNum, temp, NULL);
	pDoc->ATradeNum.Add(temp);


	m_TradeCodeL.GetWindowTextW(temp);
	m_List.SetItemText(nItemNum, 1, temp);
	pDoc->ATradeCodeL.Add(temp);
	Code1 = _wtol(temp);
	m_List.SetItemText(nItemNum, 2, CodeToName(Code1));

	m_TradeCostL.GetWindowTextW(temp);
	ConvertDataToString(temp, tempcomma);
	m_List.SetItemText(nItemNum, 3, tempcomma);
	pDoc->ATradeCostL.Add(temp);

	m_TradeCodeR.GetWindowTextW(temp);
	m_List.SetItemText(nItemNum, 4, temp);
	pDoc->ATradeCodeR.Add(temp);
	Code1 = _wtol(temp);
	m_List.SetItemText(nItemNum, 5, CodeToName(Code1));

	m_List.SetItemText(nItemNum, 6, tempcomma);

	m_TradeDetail.GetWindowTextW(temp);
	m_List.SetItemText(nItemNum, 7, temp);
	pDoc->ATradeDetail.Add(temp);

	CString CODE;
	long CODEL;

	m_TradeCodeL.GetWindowTextW(CODE);
	CODEL = _wtol(CODE);
	m_TradeContentL.SetWindowTextW(CodeToName(CODEL));

	m_TradeCodeR.GetWindowTextW(CODE);
	CODEL = _wtol(CODE);
	m_TradeContentR.SetWindowTextW(CodeToName(CODEL));

	m_TradeCostL.GetWindowTextW(CODE);
	m_TradeCostR.SetWindowTextW(CODE);

	/*CString abc;
	m_TradeDetail.GetWindowTextW(abc);

	long abcl = _wtol(abc);

	abcl += 50;

	if (abcl == 70)
		m_List.SetItemText(nItemNum, 7, abc);*/ //CString을 long 형으로 바꾸는 함수 테스트

}


void CHASView::OnBnClickedDelete()
{
	CHASDoc *pDoc = GetDocument();
	int count = m_List.GetItemCount();
	int i;
	for (i = count - 1; i >= 0; i--) {
		if (m_List.GetItemState(i, LVIS_SELECTED) != 0) {
			m_List.DeleteItem(i);
			pDoc->ATradeNum.RemoveAt(i);
			pDoc->ATradeCodeL.RemoveAt(i);
			pDoc->ATradeCostL.RemoveAt(i);
			pDoc->ATradeCodeR.RemoveAt(i);
			pDoc->ATradeDetail.RemoveAt(i);
		}
	}

	//내용만 삭제되고 배열내용은 존재
}



void CHASView::OnBnClickedApply()
{
	CHASDoc *pDoc = GetDocument();
	CString CODE;
	CString CODEcomma;
	long CODEL;


	m_TradeCodeL.GetWindowTextW(CODE);
	CODEL = _wtol(CODE);
	m_TradeContentL.SetWindowTextW(CodeToName(CODEL));

	m_TradeCodeR.GetWindowTextW(CODE);
	CODEL = _wtol(CODE);
	m_TradeContentR.SetWindowTextW(CodeToName(CODEL));

	m_TradeCostL.GetWindowTextW(CODE);
	ConvertDataToString(CODE, CODEcomma);
	m_TradeCostR.SetWindowTextW(CODEcomma);


}


void CHASView::OnLvnItemchangedListJour(NMHDR *pNMHDR, LRESULT *pResult)
{
	CHASDoc *pDoc = GetDocument();
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	int nItem = pNMLV->iItem;
	m_TradeNum.SetWindowTextW(m_List.GetItemText(nItem, 0));
	m_TradeCodeL.SetWindowTextW(m_List.GetItemText(nItem, 1));
	if (pDoc->ATradeCostL.GetSize() != 0) {
		m_TradeCostL.SetWindowTextW(pDoc->ATradeCostL[nItem]);
	}
	else if (pDoc->ATradeCostL.GetSize() == 0) {
		m_TradeCostL.SetWindowTextW(m_List.GetItemText(nItem, 3));
	}
	m_TradeCodeR.SetWindowTextW(m_List.GetItemText(nItem, 4));
	m_TradeDetail.SetWindowTextW(m_List.GetItemText(nItem, 7));


	CString CODE;
	long CODEL;


	m_TradeCodeL.GetWindowTextW(CODE);
	CODEL = _wtol(CODE);
	m_TradeContentL.SetWindowTextW(CodeToName(CODEL));

	m_TradeCodeR.GetWindowTextW(CODE);
	CODEL = _wtol(CODE);
	m_TradeContentR.SetWindowTextW(CodeToName(CODEL));

	m_TradeCostL.GetWindowTextW(CODE);
	m_TradeCostR.SetWindowTextW(CODE);
	*pResult = 0;
}


void CHASView::OnBnClickedModify()
{
	return;	//그냥 리턴
	int idx = -1;
	idx = m_List.GetNextItem(-1, LVNI_ALL | LVNI_SELECTED);
	if (idx == -1) {
		AfxMessageBox(_T("선택된 항목이 없습니다."));
		return;
	}

	CString temp;

	long Code1;

	m_TradeNum.GetWindowTextW(temp);
	m_List.SetItemText(idx, 0, temp);

	m_TradeCodeL.GetWindowTextW(temp);
	m_List.SetItemText(idx, 1, temp);
	Code1 = _wtol(temp);
	m_List.SetItemText(idx, 2, CodeToName(Code1));

	m_TradeCostL.GetWindowTextW(temp);
	m_List.SetItemText(idx, 3, temp);

	m_TradeCodeR.GetWindowTextW(temp);
	m_List.SetItemText(idx, 4, temp);
	Code1 = _wtol(temp);
	m_List.SetItemText(idx, 5, CodeToName(Code1));

	m_TradeCostL.GetWindowTextW(temp);
	m_List.SetItemText(idx, 6, temp);

	m_TradeDetail.GetWindowTextW(temp);
	m_List.SetItemText(idx, 7, temp);

	UpdateData(TRUE);
} //MODIFY 버튼인데 첫번째쪽만 변경되고 나머진 변경 안되어서 일단 삭제 후 보류


void CHASView::OnBnClickedSet()
{
	CHASDoc *pDoc = GetDocument();
	CString CostComma;

	int count = m_List.GetItemCount();
	int i;
	for (i = count - 1; i >= 0; i--) {
			m_List.DeleteItem(i);
	}
	long Code1;

	for (int i = 0; i < (pDoc->ATradeNum.GetSize()); i++) {
		m_List.InsertItem(i, pDoc->ATradeNum[i], NULL);
	}
	for (int i = 0; i < (pDoc->ATradeCodeL.GetSize()); i++) {
		m_List.SetItemText(i, 1, pDoc->ATradeCodeL[i]);
	}
	for (int i = 0; i < (pDoc->ATradeCodeL.GetSize()); i++) {
		Code1 = _wtol(pDoc->ATradeCodeL[i]);
		m_List.SetItemText(i, 2, CodeToName(Code1));
	}
	for (int i = 0; i < (pDoc->ATradeCostL.GetSize()); i++) {
		ConvertDataToString(pDoc->ATradeCostL[i], CostComma);
		m_List.SetItemText(i, 3, CostComma);
	}
	for (int i = 0; i < (pDoc->ATradeCodeR.GetSize()); i++) {
		m_List.SetItemText(i, 4, pDoc->ATradeCodeR[i]);
	}
	for (int i = 0; i < (pDoc->ATradeCodeR.GetSize()); i++) {
		Code1 = _wtol(pDoc->ATradeCodeR[i]);
		m_List.SetItemText(i, 5, CodeToName(Code1));
	}
	for (int i = 0; i < (pDoc->ATradeCostL.GetSize()); i++) {
		ConvertDataToString(pDoc->ATradeCostL[i], CostComma);
		m_List.SetItemText(i, 6, CostComma);
	}
	for (int i = 0; i < (pDoc->ATradeDetail.GetSize()); i++) {
		m_List.SetItemText(i, 7, pDoc->ATradeDetail[i]);
	}



}


void CHASView::OnMcnSelectMonthcalendar3(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMSELCHANGE pSelChange = reinterpret_cast<LPNMSELCHANGE>(pNMHDR);
	SYSTEMTIME cur_time;
	CString Year;
	CString Month;
	CString Day;
	CString ZERO = _T("0");
	long DateCode;
	CString DateCodeS;

	m_CalendarJ.GetCurSel(&cur_time);


	Year.Format(_T("%d"), cur_time.wYear);
	Month.Format(_T("%d"), cur_time.wMonth);
	Day.Format(_T("%d"), cur_time.wDay);

	if (_wtol(Month) < 10) {
		if (_wtol(Day) < 10) {
			DateCode = _wtol(Year + ZERO + Month + ZERO + Day) - 20000000;
			DateCodeS.Format(_T("%d"), DateCode);
			m_TradeNum.SetWindowTextW(DateCodeS);
		}
		else if (_wtol(Day) >= 10) {
			DateCode = _wtol(Year + ZERO + Month + Day) - 20000000;
			DateCodeS.Format(_T("%d"), DateCode);
			m_TradeNum.SetWindowTextW(DateCodeS);
		}
		else
			return;
	}
	else if (_wtol(Month) >= 10) {
		if (_wtol(Day) < 10) {
			DateCode = _wtol(Year + Month + ZERO + Day) - 20000000;
			DateCodeS.Format(_T("%d"), DateCode);
			m_TradeNum.SetWindowTextW(DateCodeS);
		}
		else if (_wtol(Day) >= 10) {
			DateCode = _wtol(Year + Month + Day) - 20000000;
			DateCodeS.Format(_T("%d"), DateCode);
			m_TradeNum.SetWindowTextW(DateCodeS);
		}
		else
			return;
	}
	else
		return;


	*pResult = 0;
}


void CHASView::OnBnClickedInsert()
{
	CHASDoc *pDoc = GetDocument();
	int count = m_List.GetItemCount();
	int S = -1;
	int i;
	for (i = count - 1; i >= 0; i--) {
		if (m_List.GetItemState(i, LVIS_SELECTED) != 0) {
			S = i;
		}
	}

	if (S == -1) {
		AfxMessageBox(_T("선택된 항목이 없습니다."));
		return;
		}

	CString temp;

	m_TradeNum.GetWindowTextW(temp);
	pDoc->ATradeNum.InsertAt(S + 1, temp);

	m_TradeCodeL.GetWindowTextW(temp);
	pDoc->ATradeCodeL.InsertAt(S + 1, temp);

	m_TradeCostL.GetWindowTextW(temp);
	pDoc->ATradeCostL.InsertAt(S + 1, temp);

	m_TradeCodeR.GetWindowTextW(temp);
	pDoc->ATradeCodeR.InsertAt(S + 1, temp);

	m_TradeDetail.GetWindowTextW(temp);
	pDoc->ATradeDetail.InsertAt(S + 1, temp);

	CString CostComma;

	int countb = m_List.GetItemCount();
	for (i = countb - 1; i >= 0; i--) {
		m_List.DeleteItem(i);
	}
	long Code1;

	for (int i = 0; i < (pDoc->ATradeNum.GetSize()); i++) {
		m_List.InsertItem(i, pDoc->ATradeNum[i], NULL);
	}
	for (int i = 0; i < (pDoc->ATradeCodeL.GetSize()); i++) {
		m_List.SetItemText(i, 1, pDoc->ATradeCodeL[i]);
	}
	for (int i = 0; i < (pDoc->ATradeCodeL.GetSize()); i++) {
		Code1 = _wtol(pDoc->ATradeCodeL[i]);
		m_List.SetItemText(i, 2, CodeToName(Code1));
	}
	for (int i = 0; i < (pDoc->ATradeCostL.GetSize()); i++) {
		ConvertDataToString(pDoc->ATradeCostL[i], CostComma);
		m_List.SetItemText(i, 3, CostComma);
	}
	for (int i = 0; i < (pDoc->ATradeCodeR.GetSize()); i++) {
		m_List.SetItemText(i, 4, pDoc->ATradeCodeR[i]);
	}
	for (int i = 0; i < (pDoc->ATradeCodeR.GetSize()); i++) {
		Code1 = _wtol(pDoc->ATradeCodeR[i]);
		m_List.SetItemText(i, 5, CodeToName(Code1));
	}
	for (int i = 0; i < (pDoc->ATradeCostL.GetSize()); i++) {
		ConvertDataToString(pDoc->ATradeCostL[i], CostComma);
		m_List.SetItemText(i, 6, CostComma);
	}
	for (int i = 0; i < (pDoc->ATradeDetail.GetSize()); i++) {
		m_List.SetItemText(i, 7, pDoc->ATradeDetail[i]);
	}

}
