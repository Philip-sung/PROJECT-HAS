// HASCView.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "HAS.h"
#include "HASCView.h" 

void ConvertDataToStringC(CString parm_data, CString &parm_string)
{
	// ������� ��Ȯ�ϰ� �����ϱ� ���ؼ� ',' ó������� ����� ���ڿ� ������ �ʱ�ȭ�Ѵ�.
	if (parm_string.GetLength()) parm_string.Format(_T(""));
	// ���ڿ��� ���̸� ���Ѵ�.
	int count = parm_data.GetLength();

	for (int i = 0; i < count; i++) {
		// 3�� ����� �� "," �� ���ڿ��� �߰��Ѵ�.
		if (i && !(i % 3)) parm_string = _T(",") + parm_string;
		// parm_data ���� parm_string���� �����Ѱ��� ���������� �����Ѵ�.
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
		temp = _T("�ڻ�");
	if (CODENAME == 2)
		temp = _T("�ں�");
	if (CODENAME == 3)
		temp = _T("��ä");
	if (CODENAME == 4)
		temp = _T("����");
	if (CODENAME == 5)
		temp = _T("���");

	//�ڻ�
	if (CODENAME == 6)
		temp = _T("����");
	if (CODENAME == 11)
		temp = _T("�����ڻ�(����)");
	if (CODENAME == 16)
		temp = _T("�����ڻ�(������)");
	if (CODENAME == 21)
		temp = _T("�ܱ�ä��");
	if (CODENAME == 26)
		temp = _T("���ä��");
	if (CODENAME == 31)
		temp = _T("�̼���");
	if (CODENAME == 36)
		temp = _T("���ޱ�");
	if (CODENAME == 41)
		temp = _T("��ǰ");
	if (CODENAME == 46)
		temp = _T("�Ҹ�ǰ");
	if (CODENAME == 51)
		temp = _T("����ڻ�");
	if (CODENAME == 56)
		temp = _T("�ε���");
	if (CODENAME == 61)
		temp = _T("�����ڻ�");

	//�ں�
	if (CODENAME == 7)
		temp = _T("�����ں���");
	if (CODENAME == 12)
		temp = _T("�켱�ں���");
	if (CODENAME == 17)
		temp = _T("�ں��ŷ����");
	if (CODENAME == 22)
		temp = _T("�����׿���(�ں�)");
	if (CODENAME == 27)
		temp = _T("���");
	if (CODENAME == 32)
		temp = _T("���");
	if (CODENAME == 37)
		temp = _T("����");
	if (CODENAME == 42)
		temp = _T("�ֽĹ����ʰ���");
	if (CODENAME == 47)
		temp = _T("�ֽ����ι�������");
	if (CODENAME == 52)
		temp = _T("�ں�����");


	//��ä
	if (CODENAME == 8)
		temp = _T("���Ա�");
	if (CODENAME == 13)
		temp = _T("�ܱ�ä��");
	if (CODENAME == 18)
		temp = _T("���ä��");
	if (CODENAME == 23)
		temp = _T("������");
	if (CODENAME == 28)
		temp = _T("�����޺��");
	if (CODENAME == 33)
		temp = _T("ä�ǹ���");
	if (CODENAME == 38)
		temp = _T("��������ä");
	if (CODENAME == 43)
		temp = _T("�Һ����Ǻ�ä");
	if (CODENAME == 48)
		temp = _T("����ä��");
	if (CODENAME == 53)
		temp = _T("��������ä");


	//����
	if (CODENAME == 9)
		temp = _T("��������");
	if (CODENAME == 14)
		temp = _T("�޿�����");
	if (CODENAME == 19)
		temp = _T("�����ڻ�ó������");
	if (CODENAME == 24)
		temp = _T("�����ڻ�ó������");
	if (CODENAME == 29)
		temp = _T("���ڼ���");
	if (CODENAME == 34)
		temp = _T("���ݼ���");
	if (CODENAME == 39)
		temp = _T("�Ӵ��");
	if (CODENAME == 44)
		temp = _T("����");
	if (CODENAME == 49)
		temp = _T("����");
	if (CODENAME == 54)
		temp = _T("��Ÿ����");


	//���
	if (CODENAME == 10)
		temp = _T("H.R");
	if (CODENAME == 15)
		temp = _T("�ʿ���");
	if (CODENAME == 20)
		temp = _T("����");
	if (CODENAME == 25)
		temp = _T("��Ȱ��");
	if (CODENAME == 30)
		temp = _T("�ĺ�");
	if (CODENAME == 35)
		temp = _T("�Ҹ�ǰ��");
	if (CODENAME == 40)
		temp = _T("�����");
	if (CODENAME == 45)
		temp = _T("������");
	if (CODENAME == 50)
		temp = _T("�����");
	if (CODENAME == 55)
		temp = _T("�ڱ������");
	if (CODENAME == 60)
		temp = _T("Ư����");
	if (CODENAME == 65)
		temp = _T("��α�");
	if (CODENAME == 70)
		temp = _T("������");
	if (CODENAME == 75)
		temp = _T("�ΰǺ�");
	if (CODENAME == 80)
		temp = _T("�ڻ�ó�мս�");
	if (CODENAME == 85)
		temp = _T("�������");
	if (CODENAME == 90)
		temp = _T("���ں��");
	if (CODENAME == 95)
		temp = _T("��Ÿ�ս�");

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


// CHASCView �����Դϴ�.

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

CHASDoc* CHASCView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHASDoc)));
	return (CHASDoc*)m_pDocument;
}
#endif
#endif //_DEBUG


// CHASCView �޽��� ó�����Դϴ�.


void CHASCView::OnInitialUpdate()
{
	CHASDoc *pDoc = GetDocument();
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	if (1 == 1) {
		CRect rect;
		//����Ʈ ��Ʈ���� ũ�⸦ ���´�.
		m_ListC.GetClientRect(&rect);

		for (int i = 0; i < 6; i++)
			m_ListC.DeleteColumn(0);

		// �÷� �߰�
		m_ListC.InsertColumn(0, _T("�׸�"), LVCFMT_LEFT, 140);
		m_ListC.InsertColumn(1, _T("���Ͱ��� (Debit)"), LVCFMT_LEFT, 160);
		m_ListC.InsertColumn(2, _T("���Ͱ��� (Credit)"), LVCFMT_LEFT, 188);
		m_ListC.InsertColumn(3, _T("������ (Debit)"), LVCFMT_LEFT, 160);
		m_ListC.InsertColumn(4, _T("������ (Credit)"), LVCFMT_LEFT, 188);

		//�������� �߰��� �÷��� ���� ����Ʈ ��Ʈ���� �ʺ񿡼� �̹� �߰��� 
		//�÷����� �ʺ� �� ������ �ϸ� �÷��� ����Ʈ ��Ʈ�ѿ� �� �°� �߰��ȴ�.
		m_ListC.InsertColumn(5, _T(" "), LVCFMT_LEFT, rect.Width() - 853);

		m_ListC.SetExtendedStyle(m_ListC.GetExtendedStyle() | LVS_EX_FULLROWSELECT);

	}
	else
		return;
	if (1 == 1) {
		CRect rect;
		//����Ʈ ��Ʈ���� ũ�⸦ ���´�.
		m_ListCD.GetClientRect(&rect);

		for (int i = 0; i < 4; i++)
			m_ListCD.DeleteColumn(0);

		// �÷� �߰�
		m_ListCD.InsertColumn(0, _T("�׸�"), LVCFMT_LEFT, 300);
		m_ListCD.InsertColumn(1, _T("Credit"), LVCFMT_LEFT, 160);
		m_ListCD.InsertColumn(2, _T("Debit"), LVCFMT_LEFT, 188);

		//�������� �߰��� �÷��� ���� ����Ʈ ��Ʈ���� �ʺ񿡼� �̹� �߰��� 
		//�÷����� �ʺ� �� ������ �ϸ� �÷��� ����Ʈ ��Ʈ�ѿ� �� �°� �߰��ȴ�.
		m_ListCD.InsertColumn(3, _T(" "), LVCFMT_LEFT, rect.Width() - 1041);

		m_ListCD.SetExtendedStyle(m_ListCD.GetExtendedStyle() | LVS_EX_FULLROWSELECT);

	}
	else
		return;

}


void CHASCView::OnBnClickedIsread()
{
	//����
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



	//�ڵ庰 �հ�, DCCODE �ʱ�ȭ
	//�ڵ��ȣ��  (i * 5) + 1~5������ �ٸ��� ����
	//CODE�� (i * 5) + 1�϶� 1, 6, 11 ������ SumLR_1, DCCODE_1 �� 0��° ���Һ��� ����
	if (pDoc->ASumLR_1.GetSize() == 0) {	//�迭�� ����ִ°�� �׳� ����
		for (CODEGB = 0; CODEGB < 13; CODEGB++) {	// CODE ������ŭ���� ����
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
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
		}
	}
	else {	//�迭�� ������� ������, �迭�� �ʱ�ȭ��
		pDoc->ASumLR_1.RemoveAll();
		for (CODEGB = 0; CODEGB < 13; CODEGB++) {	//CODE ������ŭ ����
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
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
		}
	}

	//CODE�� (i * 5) + 2�϶� 2, 7, 12 ������ SumLR_2, DCCODE_2 �� 0��° ���Һ��� ����
	if (pDoc->ASumLR_2.GetSize() == 0) {	//�迭�� ����ִ°�� �׳� ����
		for (CODEGB = 0; CODEGB < 11; CODEGB++) {	//CODE ������ŭ ����
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
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
		}
	}
	else {	//�迭�� ������� ������, �迭�� �ʱ�ȭ��
		pDoc->ASumLR_2.RemoveAll();	//-
		for (CODEGB = 0; CODEGB < 11; CODEGB++) {	//CODE ������ŭ ����
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
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
		}
	}

	//CODE�� (i * 5) + 3�϶� 3, 8, 13 ������ SumLR_3, DCCODE_3 �� 0��° ���Һ��� ����
	if (pDoc->ASumLR_3.GetSize() == 0) {	//�迭�� ����ִ°�� �׳� ����
		for (CODEGB = 0; CODEGB < 11; CODEGB++) {	//CODE ������ŭ ����
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
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
		}
	}
	else {	//�迭�� ������� ������, �迭�� �ʱ�ȭ��
		pDoc->ASumLR_3.RemoveAll();	//-
		for (CODEGB = 0; CODEGB < 11; CODEGB++) {	//CODE ������ŭ ����
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
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
		}
	}

	//CODE�� (i * 5) + 4�϶� 4, 9, 14 ������ SumLR_4, DCCODE_4 �� 0��° ���Һ��� ����
	if (pDoc->ASumLR_4.GetSize() == 0) {	//�迭�� ����ִ°�� �׳� ����
		for (CODEGB = 0; CODEGB < 11; CODEGB++) {	//CODE ������ŭ ����
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
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
		}
	}
	else {	//�迭�� ������� ������, �迭�� �ʱ�ȭ��
		pDoc->ASumLR_4.RemoveAll();	//-
		for (CODEGB = 0; CODEGB < 11; CODEGB++) {	//CODE ������ŭ ����
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
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
		}
	}

	//CODE�� (i * 5) + 5�϶� 5, 10, 15 ������ SumLR_5, DCCODE_5 �� 0��° ���Һ��� ����
	if (pDoc->ASumLR_5.GetSize() == 0) {	//�迭�� ����ִ°�� �׳� ����
		for (CODEGB = 0; CODEGB < 19; CODEGB++) {	//CODE ������ŭ ����
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
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
		}
	}
	else {	//�迭�� ������� ������, �迭�� �ʱ�ȭ��
		pDoc->ASumLR_5.RemoveAll();	//-
		for (CODEGB = 0; CODEGB < 19; CODEGB++) {	//CODE ������ŭ ����
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
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
		}
	}
	//�׸� ���� �� ��ȭ���� ����
	int idx = 1;
	int idx2 = 1;
	idx = pDoc->ASumLR_4.GetSize();
	idx2 = pDoc->ASumLR_5.GetSize();
	if (idx2 == 0 && idx == 0) {
		AfxMessageBox(_T("�׸��� �����ϴ�."));
		pDoc->EarnedSurplus = _T("0");
		pDoc->SurPlusSign = 2;
		pDoc->SurPlusSet = 2;
		return;
	}

	//�׸� ���� ���� �����׸� ����
	int count = m_ListC.GetItemCount();
	int i;
	for (i = count - 1; i >= 0; i--) {
		m_ListC.DeleteItem(i);
	}
	int countD = m_ListCD.GetItemCount();

	for (i = countD - 1; i >= 0; i--) {
		m_ListCD.DeleteItem(i);
	}


	//�ڵ尪 �о ����Ʈ��Ʈ�ѿ� ǥ��
	if (pDoc->ASumLR_4.GetSize() != 0) {
		for (int i = 0; i < pDoc->ASumLR_4.GetSize(); i++) {	//	�ڵ� 4 ����
			int nItemNum = m_ListC.GetItemCount();
			m_ListC.InsertItem(nItemNum, pDoc->AName_4[i], NULL);
			if (pDoc->ADCCode_4[i] == _T("1")) {					// ADCCODE�� ���ʴ�� �����ϱ� ������ �Ѱ��϶� �ش� ���ҿ� �����ϴ°� �Ұ���
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
		for (int i = 0; i < pDoc->ASumLR_5.GetSize(); i++) {	//	�ڵ� 5 ����
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

	//�������Ͱ��
	long Income = 0;
	long IncomeSum = 0;
	long Expense = 0;
	long ExpenseSum = 0;
	CString SumToString;
	CString SumComma;

	//���Ͱ����� ����
	if (pDoc->ASumLR_4.GetSize() != 0) {
		for (int i = 0; i < pDoc->ASumLR_4.GetSize(); i++) {	//	�ڵ� 4 �հ豸��, �ڵ� ������ŭ ����
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
	//�������� ����
	if (pDoc->ASumLR_5.GetSize() != 0) {
		for (int i = 0; i < pDoc->ASumLR_5.GetSize(); i++) {	//	�ڵ� 5 �հ豸��, �ڵ� ������ŭ ����
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
	m_ListCD.InsertItem(2, _T("�� ���� ����"), NULL);

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