// HASBView.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "HAS.h"
#include "HASBView.h"

//
// parm_data : ','를  포함하지 않은 숫자가 저장된 문자열. 예) 1234
// parm_string : parm_data에 들어있는 숫자에 ',' 처리를 하여 저장할 문자열. 예) 1,234
//
// [ 함수 사용 방법 ]
// CString org_number = "1234", display_number;
// ConvertDataToStringB(org_number, display_number);
// 또는
// ConvertDataToStringB("1234", display_number);

void ConvertDataToStringB(CString parm_data, CString &parm_string)
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

CString CodeToNameB(long);

CString CodeToNameB(long CODENAME)
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

// CHASBView

IMPLEMENT_DYNCREATE(CHASBView, CFormView)

CHASBView::CHASBView()
	: CFormView(IDD_HASBVIEW)
{

}

CHASBView::~CHASBView()
{
}

void CHASBView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_GENERAL, m_ListB);
	DDX_Control(pDX, IDC_LIST_GENERALSUM, m_ListBD);
	DDX_Control(pDX, IDC_SERACHCODEPUT, m_SearchCode);
	DDX_Control(pDX, IDC_SEARCHCODEEXP, m_SearchCodeOut);
}

BEGIN_MESSAGE_MAP(CHASBView, CFormView)
	ON_BN_CLICKED(IDC_READGENERAL, &CHASBView::OnBnClickedReadgeneral)
	ON_BN_CLICKED(IDC_CodeAdd, &CHASBView::OnBnClickedCodeadd)
END_MESSAGE_MAP()


// CHASBView 진단입니다.

#ifdef _DEBUG
void CHASBView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CHASBView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CHASDoc* CHASBView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHASDoc)));
	return (CHASDoc*)m_pDocument;
}
#endif
#endif //_DEBUG


// CHASBView 메시지 처리기입니다.


void CHASBView::OnInitialUpdate()
{
	CHASDoc *pDoc = GetDocument();
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	if (1 == 1) {
		CRect rect;
		//리스트 컨트롤의 크기를 얻어온다.
		m_ListB.GetClientRect(&rect);

		for (int i = 0; i < 7; i++)
			m_ListB.DeleteColumn(0);

		// 컬럼 추가
		m_ListB.InsertColumn(0, _T("거래번호"), LVCFMT_LEFT, 72);
		m_ListB.InsertColumn(1, _T("항목"), LVCFMT_LEFT, 90);
		m_ListB.InsertColumn(2, _T("금액"), LVCFMT_LEFT, 188);
		m_ListB.InsertColumn(3, _T("항목"), LVCFMT_LEFT, 90);
		m_ListB.InsertColumn(4, _T("금액"), LVCFMT_LEFT, 188);


		//마지막에 추가할 컬럼의 폭은 리스트 컨트롤의 너비에서 이미 추가한 
		//컬럼들의 너비를 뺀 값으로 하면 컬럼이 리스트 컨트롤에 딱 맞게 추가된다.
		m_ListB.InsertColumn(5, _T("상세내역"), LVCFMT_LEFT, rect.Width() - 741);
		m_ListB.InsertColumn(6, _T("분류"), LVCFMT_LEFT, 90);

		m_ListB.SetExtendedStyle(m_ListB.GetExtendedStyle() | LVS_EX_FULLROWSELECT);

	}
	else
		return;
	if (1 == 1) {
		CRect rect;
		//리스트 컨트롤의 크기를 얻어온다.
		m_ListBD.GetClientRect(&rect);

		for (int i = 0; i < 6; i++)
			m_ListBD.DeleteColumn(0);

		// 컬럼 추가
		m_ListBD.InsertColumn(0, _T("거래번호"), LVCFMT_LEFT, 70);
		m_ListBD.InsertColumn(1, _T("항목"), LVCFMT_LEFT, 90);
		m_ListBD.InsertColumn(2, _T("금액"), LVCFMT_LEFT, 188);
		m_ListBD.InsertColumn(3, _T("항목"), LVCFMT_LEFT, 90);
		m_ListBD.InsertColumn(4, _T("금액"), LVCFMT_LEFT, 188);

		//마지막에 추가할 컬럼의 폭은 리스트 컨트롤의 너비에서 이미 추가한 
		//컬럼들의 너비를 뺀 값으로 하면 컬럼이 리스트 컨트롤에 딱 맞게 추가된다.
		m_ListBD.InsertColumn(5, _T("Debit / Credit"), LVCFMT_LEFT, rect.Width() - 783);

		m_ListBD.SetExtendedStyle(m_ListBD.GetExtendedStyle() | LVS_EX_FULLROWSELECT);

	}
	else
		return;

}


void CHASBView::OnBnClickedReadgeneral()
{


	int count = m_ListB.GetItemCount();
	int i;
	for (i = count - 1; i >= 0; i--) {
		m_ListB.DeleteItem(i);
	}
	int countBD = m_ListBD.GetItemCount();
	int j;
	for (j = count - 1; j >= 0; j--) {
		m_ListBD.DeleteItem(j);
	}

	CHASDoc *pDoc = GetDocument();
	long SumL = 0;
	long SumR = 0;
	long templong = 0;
	long CODEG = 0;
	long CODEGB = 0;
	long Code1 = 0;
	CString CostComma;
	CString temp;
	CString Test;
	
	m_SearchCode.GetWindowTextW(temp);
	CODEGB = _wtol(temp);
	m_SearchCodeOut.SetWindowTextW(CodeToNameB(CODEGB));

	int idx = 1;
	idx = pDoc->ATradeCodeR.GetSize();
	if (idx == 0) {
		AfxMessageBox(_T("항목이 없습니다."));
		return;
	}

	for (int i = 0; i < pDoc->ATradeNum.GetSize(); i++) {			//0번째 거래부터 거래번호가 입력된 모든 거래를 조회한다.
		CODEG = _wtol(pDoc->ATradeCodeR[i]);						//코드조회를 위해 i번째 ATradeCodeR 변환
		int nItemNum = m_ListB.GetItemCount();						//리스트 출력을 위해 개수 셈
		if (CODEG == CODEGB) {										//만약 i번째의 ATradeCodeR이 입력한 코드와 같다면
			m_ListB.InsertItem(nItemNum, pDoc->ATradeNum[i], NULL);	//i번째 거래의 거래번호 출력
			Code1 = _wtol(pDoc->ATradeCodeL[i]);					//i번째 거래의 ATradeCodeR을 정수로 변환
			m_ListB.SetItemText(nItemNum, 1, CodeToNameB(Code1));	//i번째 거래의 ATradeCodeR에 해당하는 항목 출력 
			ConvertDataToStringB(pDoc->ATradeCostL[i], CostComma);	//i번째 거래의 가격을 콤마형으로 변환
			m_ListB.SetItemText(nItemNum, 2, CostComma);			//i번째 거래의 콤마형을 출력
			m_ListB.SetItemText(nItemNum, 5, pDoc->ATradeDetail[i]);//i번째 거래의 ATradeDetail 출력
			m_ListB.SetItemText(nItemNum, 6, CodeToNameB(CODEGB)); // TEST
			templong = _wtol(pDoc->ATradeCostL[i]);					//i번째 거래의 가격을 templong에 정수형으로 저장
			SumL = (SumL + templong);	
		}
		else
			continue;
	}

	for (int i = 0; i < pDoc->ATradeNum.GetSize(); i++) {
		CODEG = _wtol(pDoc->ATradeCodeL[i]);
		int nItemNum = m_ListB.GetItemCount();
		if (CODEG == CODEGB) {
			m_ListB.InsertItem(nItemNum, pDoc->ATradeNum[i], NULL);
			Code1 = _wtol(pDoc->ATradeCodeR[i]);
			m_ListB.SetItemText(nItemNum, 3, CodeToNameB(Code1));
			ConvertDataToStringB(pDoc->ATradeCostL[i], CostComma);
			m_ListB.SetItemText(nItemNum, 4, CostComma);
			m_ListB.SetItemText(nItemNum, 5, pDoc->ATradeDetail[i]);
			m_ListB.SetItemText(nItemNum, 6, CodeToNameB(CODEGB)); // TEST
			templong = _wtol(pDoc->ATradeCostL[i]);
			SumR = (SumR + templong);
		}
		else
			continue;
	}

	if (SumR != NULL && SumL != NULL) {
		if (SumR > SumL) {
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), (SumR - SumL));
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 2, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Debit"));
		}
		else if (SumL > SumR) {
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), (SumL - SumR));
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 4, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Credit"));
		}
		else if (SumL == SumR)
		{
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), (SumL - SumR));
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 4, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Equal"));
		}
		else
			return;
	}
	else if (SumR != NULL && SumL == NULL) {
		if (SumR >= SumL) {
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), SumR);
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 2, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Debit"));
		}
		else if (SumL > SumR) {
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), SumR);
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 4, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Credit"));
		}
		else if (SumL == SumR)
		{
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), (SumL - SumR));
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 4, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Equal"));
		}
		else
			return;
	}
	else if (SumR == NULL && SumL != NULL) {
		if (SumR >= SumL) {
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), SumL);
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 2, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Debit"));
		}
		else if (SumL > SumR) {
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 3, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), SumL);
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 4, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Credit"));
		}
		else if (SumL == SumR)
		{
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), (SumL - SumR));
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 4, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Equal"));
		}
		else
			return;
	}
	else
		return;

}


void CHASBView::OnBnClickedCodeadd()
{

	
	CHASDoc *pDoc = GetDocument();
	long SumL = 0;
	long SumR = 0;
	long templong = 0;
	long CODEG = 0;
	long CODEGB = 0;
	long Code1 = 0;
	CString CostComma;
	CString temp;
	CString Test;


	m_SearchCode.GetWindowTextW(temp);
	CODEGB = _wtol(temp);
	m_SearchCodeOut.SetWindowTextW(CodeToNameB(CODEGB));

	int idx = 1;
	idx = pDoc->ATradeCodeR.GetSize();
	if (idx == 0) {
		AfxMessageBox(_T("항목이 없습니다."));
		return;
	}

	for (int i = 0; i < pDoc->ATradeNum.GetSize(); i++) {			//0번째 거래부터 거래번호가 입력된 모든 거래를 조회한다.
		CODEG = _wtol(pDoc->ATradeCodeR[i]);						//코드조회를 위해 i번째 ATradeCodeR 변환
		int nItemNum = m_ListB.GetItemCount();						//리스트 출력을 위해 개수 셈
		if (CODEG == CODEGB) {										//만약 i번째의 ATradeCodeR이 입력한 코드와 같다면
			m_ListB.InsertItem(nItemNum, pDoc->ATradeNum[i], NULL);	//i번째 거래의 거래번호 출력
			Code1 = _wtol(pDoc->ATradeCodeL[i]);					//i번째 거래의 ATradeCodeR을 정수로 변환
			m_ListB.SetItemText(nItemNum, 1, CodeToNameB(Code1));	//i번째 거래의 ATradeCodeR에 해당하는 항목 출력 
			ConvertDataToStringB(pDoc->ATradeCostL[i], CostComma);	//i번째 거래의 가격을 콤마형으로 변환
			m_ListB.SetItemText(nItemNum, 2, CostComma);			//i번째 거래의 콤마형을 출력
			m_ListB.SetItemText(nItemNum, 5, pDoc->ATradeDetail[i]);//i번째 거래의 ATradeDetail 출력
			m_ListB.SetItemText(nItemNum, 6, CodeToNameB(CODEGB)); // TEST
			templong = _wtol(pDoc->ATradeCostL[i]);					//i번째 거래의 가격을 templong에 정수형으로 저장
			SumL = (SumL + templong);
		}
		else
			continue;
	}

	for (int i = 0; i < pDoc->ATradeNum.GetSize(); i++) {
		CODEG = _wtol(pDoc->ATradeCodeL[i]);
		int nItemNum = m_ListB.GetItemCount();
		if (CODEG == CODEGB) {
			m_ListB.InsertItem(nItemNum, pDoc->ATradeNum[i], NULL);
			Code1 = _wtol(pDoc->ATradeCodeR[i]);
			m_ListB.SetItemText(nItemNum, 3, CodeToNameB(Code1));
			ConvertDataToStringB(pDoc->ATradeCostL[i], CostComma);
			m_ListB.SetItemText(nItemNum, 4, CostComma);
			m_ListB.SetItemText(nItemNum, 5, pDoc->ATradeDetail[i]);
			m_ListB.SetItemText(nItemNum, 6, CodeToNameB(CODEGB)); // TEST
			templong = _wtol(pDoc->ATradeCostL[i]);
			SumR = (SumR + templong);
		}
		else
			continue;
	}

	if (SumR != NULL && SumL != NULL) {
		if (SumR > SumL) {
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), (SumR - SumL));
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 2, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Debit"));
		}
		else if (SumL > SumR) {
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), (SumL - SumR));
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 4, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Credit"));
		}
		else if (SumL == SumR)
		{
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), (SumL - SumR));
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 4, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Equal"));
		}
		else
			return;
	}
	else if (SumR != NULL && SumL == NULL) {
		if (SumR >= SumL) {
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), SumR);
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 2, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Debit"));
		}
		else if (SumL > SumR) {
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), SumR);
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 4, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Credit"));
		}
		else if (SumL == SumR)
		{
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), (SumL - SumR));
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 4, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Equal"));
		}
		else
			return;
	}
	else if (SumR == NULL && SumL != NULL) {
		if (SumR >= SumL) {
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), SumL);
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 2, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Debit"));
		}
		else if (SumL > SumR) {
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), SumL);
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 4, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Credit"));
		}
		else if (SumL == SumR)
		{
			m_ListBD.InsertItem(0, temp, NULL);
			m_ListBD.SetItemText(0, 1, CodeToNameB(CODEGB));
			CString SumLR;
			SumLR.Format(_T("%ld"), (SumL - SumR));
			ConvertDataToStringB(SumLR, CostComma);
			m_ListBD.SetItemText(0, 4, CostComma);
			m_ListBD.SetItemText(0, 5, _T("Equal"));
		}
		else
			return;
	}
	else
		return;

}
