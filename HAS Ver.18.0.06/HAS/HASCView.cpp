// HASCView.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "HAS.h"
#include "HASCView.h" 

void ConvertDataToStringC(CString parm_data, CString &parm_string)
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

int ARRAYSET = 0;



CString CodeToNameC(long);

CString CodeToNameC(long CODENAME)
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


// CHASCView

IMPLEMENT_DYNCREATE(CHASCView, CFormView)

CHASCView::CHASCView()
	: CFormView(IDD_HASCVIEW)
{

}

CHASCView::~CHASCView()
{
}

void CHASCView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_INCOMESTATEMENT, m_ListC);
	DDX_Control(pDX, IDC_ISCONCLUSION, m_ListCD);
}

BEGIN_MESSAGE_MAP(CHASCView, CFormView)
	ON_BN_CLICKED(IDC_ISREAD, &CHASCView::OnBnClickedIsread)
END_MESSAGE_MAP()


// CHASCView 진단입니다.

#ifdef _DEBUG
void CHASCView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CHASCView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CHASDoc* CHASCView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHASDoc)));
	return (CHASDoc*)m_pDocument;
}
#endif
#endif //_DEBUG


// CHASCView 메시지 처리기입니다.


void CHASCView::OnInitialUpdate()
{
	CHASDoc *pDoc = GetDocument();
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	if (1 == 1) {
		CRect rect;
		//리스트 컨트롤의 크기를 얻어온다.
		m_ListC.GetClientRect(&rect);

		for (int i = 0; i < 6; i++)
			m_ListC.DeleteColumn(0);

		// 컬럼 추가
		m_ListC.InsertColumn(0, _T("항목"), LVCFMT_LEFT, 140);
		m_ListC.InsertColumn(1, _T("수익계정 (Debit)"), LVCFMT_LEFT, 160);
		m_ListC.InsertColumn(2, _T("수익계정 (Credit)"), LVCFMT_LEFT, 188);
		m_ListC.InsertColumn(3, _T("비용계정 (Debit)"), LVCFMT_LEFT, 160);
		m_ListC.InsertColumn(4, _T("비용계정 (Credit)"), LVCFMT_LEFT, 188);

		//마지막에 추가할 컬럼의 폭은 리스트 컨트롤의 너비에서 이미 추가한 
		//컬럼들의 너비를 뺀 값으로 하면 컬럼이 리스트 컨트롤에 딱 맞게 추가된다.
		m_ListC.InsertColumn(5, _T(" "), LVCFMT_LEFT, rect.Width() - 853);

		m_ListC.SetExtendedStyle(m_ListC.GetExtendedStyle() | LVS_EX_FULLROWSELECT);

	}
	else
		return;
	if (1 == 1) {
		CRect rect;
		//리스트 컨트롤의 크기를 얻어온다.
		m_ListCD.GetClientRect(&rect);

		for (int i = 0; i < 4; i++)
			m_ListCD.DeleteColumn(0);

		// 컬럼 추가
		m_ListCD.InsertColumn(0, _T("항목"), LVCFMT_LEFT, 300);
		m_ListCD.InsertColumn(1, _T("Credit"), LVCFMT_LEFT, 160);
		m_ListCD.InsertColumn(2, _T("Debit"), LVCFMT_LEFT, 188);

		//마지막에 추가할 컬럼의 폭은 리스트 컨트롤의 너비에서 이미 추가한 
		//컬럼들의 너비를 뺀 값으로 하면 컬럼이 리스트 컨트롤에 딱 맞게 추가된다.
		m_ListCD.InsertColumn(3, _T(" "), LVCFMT_LEFT, rect.Width() - 1041);

		m_ListCD.SetExtendedStyle(m_ListCD.GetExtendedStyle() | LVS_EX_FULLROWSELECT);

	}
	else
		return;

}


void CHASCView::OnBnClickedIsread()
{
	//선언
	CHASDoc *pDoc = GetDocument();
	long SumL = 0;
	long SumR = 0;
	long templong = 0;
	long CODEG = 0;
	long CODEGB = 0;
	long Code1 = 0;
	CString CostComma;
	CString temp;
	CString Temp;



	//코드별 합계, DCCODE 초기화
	//코드번호가  (i * 5) + 1~5에따라 다르게 저장
	//CODE가 (i * 5) + 1일때 1, 6, 11 순으로 SumLR_1, DCCODE_1 의 0번째 원소부터 저장
	if (pDoc->ASumLR_1.GetSize() == 0) {	//배열이 비어있는경우 그냥 실행
		for (CODEGB = 0; CODEGB < 13; CODEGB++) {	// CODE 개수만큼으로 설정
			for (int i = 0; i < pDoc->ATradeCodeR.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeR[i]);
				if (CODEG == (CODEGB * 5) + 1) {
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumL += templong;
				}
			}

			for (int i = 0; i < pDoc->ATradeCodeL.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeL[i]);
				if (CODEG == (CODEGB * 5) + 1) {
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumR += templong;
				}
			}
			if (SumR != NULL || SumL != NULL) {
				if (SumR >= SumL) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumR - SumL));
					pDoc->ASumLR_1.Add(SumLR);				
					pDoc->ADCCode_1.Add(_T("1")); // Debit = 1
					pDoc->AName_1.Add(CodeToNameC((CODEGB * 5) + 1));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_1.Add(SumLR);
					pDoc->ADCCode_1.Add(_T("2")); // Credit = 2
					pDoc->AName_1.Add(CodeToNameC((CODEGB * 5) + 1));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR을 초기화 해주어야 새 값을 받아들임.
		}
	}
	else {	//배열이 비어있지 않을때, 배열을 초기화함
		pDoc->ASumLR_1.RemoveAll();
		for (CODEGB = 0; CODEGB < 13; CODEGB++) {	//CODE 개수만큼 설정
			for (int i = 0; i < pDoc->ATradeCodeR.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeR[i]);
				if (CODEG == (CODEGB * 5) + 1) {
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumL += templong;
				}
			}

			for (int i = 0; i < pDoc->ATradeCodeL.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeL[i]);
				if (CODEG == (CODEGB * 5) + 1) {
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumR += templong;
				}
			}
			if (SumR != NULL || SumL != NULL) {
				if (SumR >= SumL) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumR - SumL));
					pDoc->ASumLR_1.Add(SumLR);
					pDoc->ADCCode_1.Add(_T("1")); // Debit = 1
					pDoc->AName_1.Add(CodeToNameC((CODEGB * 5) + 1));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_1.Add(SumLR);
					pDoc->ADCCode_1.Add(_T("2")); // Credit = 2
					pDoc->AName_1.Add(CodeToNameC((CODEGB * 5) + 1));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR을 초기화 해주어야 새 값을 받아들임.
		}
	}

	//CODE가 (i * 5) + 2일때 2, 7, 12 순으로 SumLR_2, DCCODE_2 의 0번째 원소부터 저장
	if (pDoc->ASumLR_2.GetSize() == 0) {	//배열이 비어있는경우 그냥 실행
		for (CODEGB = 0; CODEGB < 11; CODEGB++) {	//CODE 개수만큼 설정
			for (int i = 0; i < pDoc->ATradeCodeR.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeR[i]);
				if (CODEG == (CODEGB * 5) + 2) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumL += templong;
				}
			}

			for (int i = 0; i < pDoc->ATradeCodeL.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeL[i]);
				if (CODEG == (CODEGB * 5) + 2) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumR += templong;
				}
			}
			if (SumR != NULL || SumL != NULL) {
				if (SumR >= SumL) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumR - SumL));
					pDoc->ASumLR_2.Add(SumLR);	//-
					pDoc->ADCCode_2.Add(_T("1"));	//- // Debit = 1
					pDoc->AName_2.Add(CodeToNameC((CODEGB * 5) + 2));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_2.Add(SumLR);	//-
					pDoc->ADCCode_2.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_2.Add(CodeToNameC((CODEGB * 5) + 2));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR을 초기화 해주어야 새 값을 받아들임.
		}
	}
	else {	//배열이 비어있지 않을때, 배열을 초기화함
		pDoc->ASumLR_2.RemoveAll();	//-
		for (CODEGB = 0; CODEGB < 11; CODEGB++) {	//CODE 개수만큼 설정
			for (int i = 0; i < pDoc->ATradeCodeR.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeR[i]);
				if (CODEG == (CODEGB * 5) + 2) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumL += templong;
				}
			}

			for (int i = 0; i < pDoc->ATradeCodeL.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeL[i]);
				if (CODEG == (CODEGB * 5) + 2) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumR += templong;
				}
			}
			if (SumR != NULL || SumL != NULL) {
				if (SumR >= SumL) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumR - SumL));
					pDoc->ASumLR_2.Add(SumLR);	//-
					pDoc->ADCCode_2.Add(_T("1"));	//- // Debit = 1
					pDoc->AName_2.Add(CodeToNameC((CODEGB * 5) + 2));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_2.Add(SumLR);	//-
					pDoc->ADCCode_2.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_2.Add(CodeToNameC((CODEGB * 5) + 2));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR을 초기화 해주어야 새 값을 받아들임.
		}
	}

	//CODE가 (i * 5) + 3일때 3, 8, 13 순으로 SumLR_3, DCCODE_3 의 0번째 원소부터 저장
	if (pDoc->ASumLR_3.GetSize() == 0) {	//배열이 비어있는경우 그냥 실행
		for (CODEGB = 0; CODEGB < 11; CODEGB++) {	//CODE 개수만큼 설정
			for (int i = 0; i < pDoc->ATradeCodeR.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeR[i]);
				if (CODEG == (CODEGB * 5) + 3) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumL += templong;
				}
			}

			for (int i = 0; i < pDoc->ATradeCodeL.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeL[i]);
				if (CODEG == (CODEGB * 5) + 3) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumR += templong;
				}
			}
			if (SumR != NULL || SumL != NULL) {
				if (SumR >= SumL) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumR - SumL));
					pDoc->ASumLR_3.Add(SumLR);	//-
					pDoc->ADCCode_3.Add(_T("1"));	//- // Debit = 1
					pDoc->AName_3.Add(CodeToNameC((CODEGB * 5) + 3));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_3.Add(SumLR);	//-
					pDoc->ADCCode_3.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_3.Add(CodeToNameC((CODEGB * 5) + 3));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR을 초기화 해주어야 새 값을 받아들임.
		}
	}
	else {	//배열이 비어있지 않을때, 배열을 초기화함
		pDoc->ASumLR_3.RemoveAll();	//-
		for (CODEGB = 0; CODEGB < 11; CODEGB++) {	//CODE 개수만큼 설정
			for (int i = 0; i < pDoc->ATradeCodeR.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeR[i]);
				if (CODEG == (CODEGB * 5) + 3) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumL += templong;
				}
			}

			for (int i = 0; i < pDoc->ATradeCodeL.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeL[i]);
				if (CODEG == (CODEGB * 5) + 3) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumR += templong;
				}
			}
			if (SumR != NULL || SumL != NULL) {
				if (SumR >= SumL) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumR - SumL));
					pDoc->ASumLR_3.Add(SumLR);	//-
					pDoc->ADCCode_3.Add(_T("1"));	//- // Debit = 1
					pDoc->AName_3.Add(CodeToNameC((CODEGB * 5) + 3));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_3.Add(SumLR);	//-
					pDoc->ADCCode_3.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_3.Add(CodeToNameC((CODEGB * 5) + 3));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR을 초기화 해주어야 새 값을 받아들임.
		}
	}

	//CODE가 (i * 5) + 4일때 4, 9, 14 순으로 SumLR_4, DCCODE_4 의 0번째 원소부터 저장
	if (pDoc->ASumLR_4.GetSize() == 0) {	//배열이 비어있는경우 그냥 실행
		for (CODEGB = 0; CODEGB < 11; CODEGB++) {	//CODE 개수만큼 설정
			for (int i = 0; i < pDoc->ATradeCodeR.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeR[i]);
				if (CODEG == (CODEGB * 5) + 4) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumL += templong;
				}
			}

			for (int i = 0; i < pDoc->ATradeCodeL.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeL[i]);
				if (CODEG == (CODEGB * 5) + 4) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumR += templong;
				}
			}
			if (SumR != NULL || SumL != NULL) {
				if (SumR >= SumL) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumR - SumL));
					pDoc->ASumLR_4.Add(SumLR);	//-
					pDoc->ADCCode_4.Add(_T("1"));	//- // Debit = 1
					pDoc->AName_4.Add(CodeToNameC((CODEGB * 5) + 4));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_4.Add(SumLR);	//-
					pDoc->ADCCode_4.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_4.Add(CodeToNameC((CODEGB * 5) + 4));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR을 초기화 해주어야 새 값을 받아들임.
		}
	}
	else {	//배열이 비어있지 않을때, 배열을 초기화함
		pDoc->ASumLR_4.RemoveAll();	//-
		for (CODEGB = 0; CODEGB < 11; CODEGB++) {	//CODE 개수만큼 설정
			for (int i = 0; i < pDoc->ATradeCodeR.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeR[i]);
				if (CODEG == (CODEGB * 5) + 4) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumL += templong;
				}
			}

			for (int i = 0; i < pDoc->ATradeCodeL.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeL[i]);
				if (CODEG == (CODEGB * 5) + 4) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumR += templong;
				}
			}
			if (SumR != NULL || SumL != NULL) {
				if (SumR >= SumL) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumR - SumL));
					pDoc->ASumLR_4.Add(SumLR);	//-
					pDoc->ADCCode_4.Add(_T("1"));	//- // Debit = 1
					pDoc->AName_5.Add(CodeToNameC((CODEGB * 5) + 4));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_4.Add(SumLR);	//-
					pDoc->ADCCode_4.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_5.Add(CodeToNameC((CODEGB * 5) + 4));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR을 초기화 해주어야 새 값을 받아들임.
		}
	}

	//CODE가 (i * 5) + 5일때 5, 10, 15 순으로 SumLR_5, DCCODE_5 의 0번째 원소부터 저장
	if (pDoc->ASumLR_5.GetSize() == 0) {	//배열이 비어있는경우 그냥 실행
		for (CODEGB = 0; CODEGB < 19; CODEGB++) {	//CODE 개수만큼 설정
			for (int i = 0; i < pDoc->ATradeCodeR.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeR[i]);
				if (CODEG == (CODEGB * 5) + 5) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumL += templong;
				}
			}

			for (int i = 0; i < pDoc->ATradeCodeL.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeL[i]);
				if (CODEG == (CODEGB * 5) + 5) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumR += templong;
				}
			}
			if (SumR != NULL || SumL != NULL) {
				if (SumR >= SumL) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumR - SumL));
					pDoc->ASumLR_5.Add(SumLR);	//-
					pDoc->ADCCode_5.Add(_T("1"));	//- // Debit = 1
					pDoc->AName_5.Add(CodeToNameC((CODEGB * 5) + 5));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_5.Add(SumLR);	//-
					pDoc->ADCCode_5.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_5.Add(CodeToNameC((CODEGB * 5) + 5));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR을 초기화 해주어야 새 값을 받아들임.
		}
	}
	else {	//배열이 비어있지 않을때, 배열을 초기화함
		pDoc->ASumLR_5.RemoveAll();	//-
		for (CODEGB = 0; CODEGB < 19; CODEGB++) {	//CODE 개수만큼 설정
			for (int i = 0; i < pDoc->ATradeCodeR.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeR[i]);
				if (CODEG == (CODEGB * 5) + 5) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumL += templong;
				}
			}

			for (int i = 0; i < pDoc->ATradeCodeL.GetSize(); i++) {
				CODEG = _wtol(pDoc->ATradeCodeL[i]);
				if (CODEG == (CODEGB * 5) + 5) {	//-
					templong = _wtol(pDoc->ATradeCostL[i]);
					SumR += templong;
				}
			}
			if (SumR != NULL || SumL != NULL) {
				if (SumR >= SumL) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumR - SumL));
					pDoc->ASumLR_5.Add(SumLR);	//-
					pDoc->ADCCode_5.Add(_T("1"));	//- // Debit = 1
					pDoc->AName_5.Add(CodeToNameC((CODEGB * 5) + 5));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_5.Add(SumLR);	//-
					pDoc->ADCCode_5.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_5.Add(CodeToNameC((CODEGB * 5) + 5));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR을 초기화 해주어야 새 값을 받아들임.
		}
	}
	//항목 없을 시 대화상자 구현
	int idx = 1;
	int idx2 = 1;
	idx = pDoc->ASumLR_4.GetSize();
	idx2 = pDoc->ASumLR_5.GetSize();
	if (idx2 == 0 && idx == 0) {
		AfxMessageBox(_T("항목이 없습니다."));
		pDoc->EarnedSurplus = _T("0");
		pDoc->SurPlusSign = 2;
		pDoc->SurPlusSet = 2;
		return;
	}

	//항목 갱신 위해 기존항목 삭제
	int count = m_ListC.GetItemCount();
	int i;
	for (i = count - 1; i >= 0; i--) {
		m_ListC.DeleteItem(i);
	}
	int countD = m_ListCD.GetItemCount();

	for (i = countD - 1; i >= 0; i--) {
		m_ListCD.DeleteItem(i);
	}


	//코드값 읽어서 리스트컨트롤에 표현
	if (pDoc->ASumLR_4.GetSize() != 0) {
		for (int i = 0; i < pDoc->ASumLR_4.GetSize(); i++) {	//	코드 4 읽음
			int nItemNum = m_ListC.GetItemCount();
			m_ListC.InsertItem(nItemNum, pDoc->AName_4[i], NULL);
			if (pDoc->ADCCode_4[i] == _T("1")) {					// ADCCODE에 차례대로 저장하기 때문에 한개일때 해당 원소에 접근하는건 불가능
				ConvertDataToStringC(pDoc->ASumLR_4[i], CostComma);
				m_ListC.SetItemText(nItemNum, 1, CostComma);
			}
			else if (pDoc->ADCCode_4[i] == _T("2")) {
				ConvertDataToStringC(pDoc->ASumLR_4[i], CostComma);
				m_ListC.SetItemText(nItemNum, 2, CostComma);
			}
		}
	}

	if (pDoc->ASumLR_5.GetSize() != 0) {
		for (int i = 0; i < pDoc->ASumLR_5.GetSize(); i++) {	//	코드 5 읽음
			int nItemNum = m_ListC.GetItemCount();
			m_ListC.InsertItem(nItemNum, pDoc->AName_5[i], NULL);
			if (pDoc->ADCCode_5[i] == _T("1")) {
				ConvertDataToStringC(pDoc->ASumLR_5[i], CostComma);
				m_ListC.SetItemText(nItemNum, 3, CostComma);
			}
			else if (pDoc->ADCCode_5[i] == _T("2")) {
				ConvertDataToStringC(pDoc->ASumLR_5[i], CostComma);
				m_ListC.SetItemText(nItemNum, 2, CostComma);
			}
		}
	}

	//포괄손익계산
	long Income = 0;
	long IncomeSum = 0;
	long Expense = 0;
	long ExpenseSum = 0;
	CString SumToString;
	CString SumComma;

	//수익계정에 대해
	if (pDoc->ASumLR_4.GetSize() != 0) {
		for (int i = 0; i < pDoc->ASumLR_4.GetSize(); i++) {	//	코드 4 합계구함, 코드 갯수만큼 설정
			if (pDoc->ADCCode_4[i] == _T("1")) {
				Expense = _wtol(pDoc->ASumLR_4[i]);
				ExpenseSum = (ExpenseSum + Expense);
			}
			else if (pDoc->ADCCode_4[i] == _T("2")) {
				Income = _wtol(pDoc->ASumLR_4[i]);
				IncomeSum = (IncomeSum + Income);
			}
		}
	}
	//비용계정에 대해
	if (pDoc->ASumLR_5.GetSize() != 0) {
		for (int i = 0; i < pDoc->ASumLR_5.GetSize(); i++) {	//	코드 5 합계구함, 코드 갯수만큼 설정
			if (pDoc->ADCCode_5[i] == _T("1")) {
				Expense = _wtol(pDoc->ASumLR_5[i]);
				ExpenseSum = (ExpenseSum + Expense);
			}
			else if (pDoc->ADCCode_5[i] == _T("2")) {
				Income = _wtol(pDoc->ASumLR_5[i]);
				IncomeSum = (IncomeSum + Income);
			}
		}
	}

	m_ListCD.InsertItem(0, _T("Debit"), NULL);
	m_ListCD.InsertItem(1, _T("Credit"), NULL);
	m_ListCD.InsertItem(2, _T("총 포괄 손익"), NULL);

	SumToString.Format(_T("%ld"), ExpenseSum);
	ConvertDataToStringC(SumToString, SumComma);
	m_ListCD.SetItemText(0, 2, SumComma);
	SumToString.Format(_T("%ld"), IncomeSum);
	ConvertDataToStringC(SumToString, SumComma);
	m_ListCD.SetItemText(1, 1, SumComma);

	if (ExpenseSum != NULL && IncomeSum != NULL) {
		if (ExpenseSum >= IncomeSum) {
			SumToString.Format(_T("%ld"), (ExpenseSum - IncomeSum));
			pDoc->EarnedSurplus = SumToString;
			pDoc->SurPlusSign = 1;
			pDoc->SurPlusSet = 2;
			ConvertDataToStringC(SumToString, SumComma);
			m_ListCD.SetItemText(2, 2, SumComma);
		}
		else if (IncomeSum > ExpenseSum) {
			SumToString.Format(_T("%ld"), (IncomeSum - ExpenseSum));
			pDoc->EarnedSurplus = SumToString;
			pDoc->SurPlusSign = 2;
			pDoc->SurPlusSet = 2;
			ConvertDataToStringC(SumToString, SumComma);
			m_ListCD.SetItemText(2, 1, SumComma);
		}
		else
			return;
	}
	else if (ExpenseSum != NULL && IncomeSum == NULL) {
		SumToString.Format(_T("%ld"), ExpenseSum);
		pDoc->EarnedSurplus = SumToString;
		pDoc->SurPlusSign = 1;
		pDoc->SurPlusSet = 2;
		ConvertDataToStringC(SumToString, SumComma);
		m_ListCD.SetItemText(2, 2, SumComma);
	}
	else if (ExpenseSum == NULL && IncomeSum != NULL) {
		SumToString.Format(_T("%ld"), IncomeSum);
		pDoc->EarnedSurplus = SumToString;
		pDoc->SurPlusSign = 2;
		pDoc->SurPlusSet = 2;
		ConvertDataToStringC(SumToString, SumComma);
		m_ListCD.SetItemText(2, 1, SumComma);
	}
	else
		return;

}