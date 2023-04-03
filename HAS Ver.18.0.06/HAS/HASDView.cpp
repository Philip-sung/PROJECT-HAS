// HASDView.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "HAS.h"
#include "HASDView.h"

void ConvertDataToStringD(CString parm_data, CString &parm_string)
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


CString CodeToNameD(long);

CString CodeToNameD(long CODENAME)
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

// CHASDView

IMPLEMENT_DYNCREATE(CHASDView, CFormView)

CHASDView::CHASDView()
	: CFormView(IDD_HASDVIEW)
{

}

CHASDView::~CHASDView()
{
}

void CHASDView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_FINANCIALSTATEMENT, m_ListD);
	DDX_Control(pDX, IDC_FSCONCLUSION, m_ListDD);
}

BEGIN_MESSAGE_MAP(CHASDView, CFormView)
	ON_BN_CLICKED(IDC_FSREAD, &CHASDView::OnBnClickedFsread)
END_MESSAGE_MAP()


// CHASDView �����Դϴ�.

#ifdef _DEBUG
void CHASDView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CHASDView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
CHASDoc* CHASDView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHASDoc)));
	return (CHASDoc*)m_pDocument;
}
#endif
#endif //_DEBUG


// CHASDView �޽��� ó�����Դϴ�.


void CHASDView::OnInitialUpdate()
{
	CHASDoc *pDoc = GetDocument();
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	if (1 == 1) {
		CRect rect;
		//����Ʈ ��Ʈ���� ũ�⸦ ���´�.
		m_ListD.GetClientRect(&rect);

		for (int i = 0; i < 6; i++)
			m_ListD.DeleteColumn(0);

		// �÷� �߰�
		m_ListD.InsertColumn(0, _T("�׸�"), LVCFMT_LEFT, 140);
		m_ListD.InsertColumn(1, _T("�ڻ�(Asset)"), LVCFMT_LEFT, 160);
		m_ListD.InsertColumn(2, _T("�ں�(Equity)"), LVCFMT_LEFT, 188);
		m_ListD.InsertColumn(3, _T("��ä(Liabilities)"), LVCFMT_LEFT, 160);
		m_ListD.InsertColumn(4, _T(" "), LVCFMT_LEFT, 188);

		//�������� �߰��� �÷��� ���� ����Ʈ ��Ʈ���� �ʺ񿡼� �̹� �߰��� 
		//�÷����� �ʺ� �� ������ �ϸ� �÷��� ����Ʈ ��Ʈ�ѿ� �� �°� �߰��ȴ�.
		m_ListD.InsertColumn(5, _T(" "), LVCFMT_LEFT, rect.Width() - 853);

		m_ListD.SetExtendedStyle(m_ListD.GetExtendedStyle() | LVS_EX_FULLROWSELECT);

	}
	else
		return;
	if (1 == 1) {
		CRect rect;
		//����Ʈ ��Ʈ���� ũ�⸦ ���´�.
		m_ListDD.GetClientRect(&rect);

		for (int i = 0; i < 6; i++)
			m_ListDD.DeleteColumn(0);

		// �÷� �߰�
		m_ListDD.InsertColumn(0, _T("�׸�"), LVCFMT_LEFT, 140);
		m_ListDD.InsertColumn(1, _T("�ڻ�(Asset)"), LVCFMT_LEFT, 160);
		m_ListDD.InsertColumn(2, _T("�ں�(Equity)"), LVCFMT_LEFT, 188);
		m_ListDD.InsertColumn(3, _T("��ä(Liabilities)"), LVCFMT_LEFT, 160);
		m_ListDD.InsertColumn(4, _T(" "), LVCFMT_LEFT, 188);

		//�������� �߰��� �÷��� ���� ����Ʈ ��Ʈ���� �ʺ񿡼� �̹� �߰��� 
		//�÷����� �ʺ� �� ������ �ϸ� �÷��� ����Ʈ ��Ʈ�ѿ� �� �°� �߰��ȴ�.
		m_ListDD.InsertColumn(5, _T(" "), LVCFMT_LEFT, rect.Width() - 853);

		m_ListDD.SetExtendedStyle(m_ListDD.GetExtendedStyle() | LVS_EX_FULLROWSELECT);

	}
	else
		return;

}


void CHASDView::OnBnClickedFsread()
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
					pDoc->AName_1.Add(CodeToNameD((CODEGB * 5) + 1));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_1.Add(SumLR);
					pDoc->ADCCode_1.Add(_T("2")); // Credit = 2
					pDoc->AName_1.Add(CodeToNameD((CODEGB * 5) + 1));
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
					pDoc->AName_1.Add(CodeToNameD((CODEGB * 5) + 1));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_1.Add(SumLR);
					pDoc->ADCCode_1.Add(_T("2")); // Credit = 2
					pDoc->AName_1.Add(CodeToNameD((CODEGB * 5) + 1));
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
					pDoc->AName_2.Add(CodeToNameD((CODEGB * 5) + 2));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_2.Add(SumLR);	//-
					pDoc->ADCCode_2.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_2.Add(CodeToNameD((CODEGB * 5) + 2));
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
					pDoc->AName_2.Add(CodeToNameD((CODEGB * 5) + 2));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_2.Add(SumLR);	//-
					pDoc->ADCCode_2.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_2.Add(CodeToNameD((CODEGB * 5) + 2));
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
					pDoc->AName_3.Add(CodeToNameD((CODEGB * 5) + 3));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_3.Add(SumLR);	//-
					pDoc->ADCCode_3.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_3.Add(CodeToNameD((CODEGB * 5) + 3));
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
					pDoc->AName_3.Add(CodeToNameD((CODEGB * 5) + 3));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_3.Add(SumLR);	//-
					pDoc->ADCCode_3.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_3.Add(CodeToNameD((CODEGB * 5) + 3));
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
					pDoc->AName_4.Add(CodeToNameD((CODEGB * 5) + 4));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_4.Add(SumLR);	//-
					pDoc->ADCCode_4.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_4.Add(CodeToNameD((CODEGB * 5) + 4));
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
					pDoc->AName_5.Add(CodeToNameD((CODEGB * 5) + 4));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_4.Add(SumLR);	//-
					pDoc->ADCCode_4.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_5.Add(CodeToNameD((CODEGB * 5) + 4));
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
					pDoc->AName_5.Add(CodeToNameD((CODEGB * 5) + 5));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_5.Add(SumLR);	//-
					pDoc->ADCCode_5.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_5.Add(CodeToNameD((CODEGB * 5) + 5));
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
					pDoc->AName_5.Add(CodeToNameD((CODEGB * 5) + 5));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_5.Add(SumLR);	//-
					pDoc->ADCCode_5.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_5.Add(CodeToNameD((CODEGB * 5) + 5));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
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


	SumToString.Format(_T("%ld"), ExpenseSum);
	ConvertDataToStringD(SumToString, SumComma);
	SumToString.Format(_T("%ld"), IncomeSum);
	ConvertDataToStringD(SumToString, SumComma);

	if (ExpenseSum != NULL && IncomeSum != NULL) {
		if (ExpenseSum >= IncomeSum) {
			SumToString.Format(_T("%ld"), (ExpenseSum - IncomeSum));
			pDoc->EarnedSurplus = SumToString;
			pDoc->SurPlusSign = 1;
			pDoc->SurPlusSet = 2;
			ConvertDataToStringD(SumToString, SumComma);
		}
		else if (IncomeSum > ExpenseSum) {
			SumToString.Format(_T("%ld"), (IncomeSum - ExpenseSum));
			pDoc->EarnedSurplus = SumToString;
			pDoc->SurPlusSign = 2;
			pDoc->SurPlusSet = 2;
			ConvertDataToStringD(SumToString, SumComma);
		}
		else
			return;
	}
	else if (ExpenseSum != NULL && IncomeSum == NULL) {
		SumToString.Format(_T("%ld"), ExpenseSum);
		pDoc->EarnedSurplus = SumToString;
		pDoc->SurPlusSign = 1;
		pDoc->SurPlusSet = 2;
		ConvertDataToStringD(SumToString, SumComma);
	}
	else if (ExpenseSum == NULL && IncomeSum != NULL) {
		SumToString.Format(_T("%ld"), IncomeSum);
		pDoc->EarnedSurplus = SumToString;
		pDoc->SurPlusSign = 2;
		pDoc->SurPlusSet = 2;
		ConvertDataToStringD(SumToString, SumComma);
	}
	else if (ExpenseSum == NULL && IncomeSum == NULL) {
		SumToString.Format(_T("%ld"), ExpenseSum);
		pDoc->EarnedSurplus = SumToString;
		pDoc->SurPlusSign = 2;
		pDoc->SurPlusSet = 2;
		ConvertDataToStringD(SumToString, SumComma);
	}
	///////////////////////////////////////////////////////////
	//���� 
	/*
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
	*/

	//�ڵ庰 �հ�, DCCODE �ʱ�ȭ
	//�ڵ��ȣ��  (i * 5) + 1~5������ �ٸ��� ����
	//CODE�� (i * 5) + 1�϶� 1, 6, 11 ������ SumLR_1, DCCODE_1 �� 0��° ���Һ��� ����
	if (pDoc->ASumLR_1.GetSize() == 0) {	//�迭�� ����ִ°�� �׳� ����
		for (CODEGB = 0; CODEGB < 11; CODEGB++) {	// CODE ������ŭ���� ����
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
					pDoc->AName_1.Add(CodeToNameD((CODEGB * 5) + 1));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_1.Add(SumLR);
					pDoc->ADCCode_1.Add(_T("2")); // Credit = 2
					pDoc->AName_1.Add(CodeToNameD((CODEGB * 5) + 1));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
		}
	}
	else {	//�迭�� ������� ������, �迭�� �ʱ�ȭ��
		pDoc->ASumLR_1.RemoveAll();
		for (CODEGB = 0; CODEGB < 11; CODEGB++) {	//CODE ������ŭ ����
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
					pDoc->AName_1.Add(CodeToNameD((CODEGB * 5) + 1));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_1.Add(SumLR);
					pDoc->ADCCode_1.Add(_T("2")); // Credit = 2
					pDoc->AName_1.Add(CodeToNameD((CODEGB * 5) + 1));
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
					pDoc->AName_2.Add(CodeToNameD((CODEGB * 5) + 2));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_2.Add(SumLR);	//-
					pDoc->ADCCode_2.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_2.Add(CodeToNameD((CODEGB * 5) + 2));
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
					pDoc->AName_2.Add(CodeToNameD((CODEGB * 5) + 2));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_2.Add(SumLR);	//-
					pDoc->ADCCode_2.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_2.Add(CodeToNameD((CODEGB * 5) + 2));
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
					pDoc->AName_3.Add(CodeToNameD((CODEGB * 5) + 3));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_3.Add(SumLR);	//-
					pDoc->ADCCode_3.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_3.Add(CodeToNameD((CODEGB * 5) + 3));
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
					pDoc->AName_3.Add(CodeToNameD((CODEGB * 5) + 3));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_3.Add(SumLR);	//-
					pDoc->ADCCode_3.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_3.Add(CodeToNameD((CODEGB * 5) + 3));
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
					pDoc->AName_4.Add(CodeToNameD((CODEGB * 5) + 4));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_4.Add(SumLR);	//-
					pDoc->ADCCode_4.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_4.Add(CodeToNameD((CODEGB * 5) + 4));
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
					pDoc->AName_5.Add(CodeToNameD((CODEGB * 5) + 4));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_4.Add(SumLR);	//-
					pDoc->ADCCode_4.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_5.Add(CodeToNameD((CODEGB * 5) + 4));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
		}
	}

	//CODE�� (i * 5) + 5�϶� 5, 10, 15 ������ SumLR_5, DCCODE_5 �� 0��° ���Һ��� ����
	if (pDoc->ASumLR_5.GetSize() == 0) {	//�迭�� ����ִ°�� �׳� ����
		for (CODEGB = 0; CODEGB < 17; CODEGB++) {	//CODE ������ŭ ����
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
					pDoc->AName_5.Add(CodeToNameD((CODEGB * 5) + 5));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_5.Add(SumLR);	//-
					pDoc->ADCCode_5.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_5.Add(CodeToNameD((CODEGB * 5) + 5));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
		}
	}
	else {	//�迭�� ������� ������, �迭�� �ʱ�ȭ��
		pDoc->ASumLR_5.RemoveAll();	//-
		for (CODEGB = 0; CODEGB < 17; CODEGB++) {	//CODE ������ŭ ����
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
					pDoc->AName_5.Add(CodeToNameD((CODEGB * 5) + 5));
				}
				else if (SumL > SumR) {
					CString SumLR;
					SumLR.Format(_T("%ld"), (SumL - SumR));
					pDoc->ASumLR_5.Add(SumLR);	//-
					pDoc->ADCCode_5.Add(_T("2"));	//- // Credit = 2
					pDoc->AName_5.Add(CodeToNameD((CODEGB * 5) + 5));
				}
			}

			SumL = 0;
			SumR = 0; // SumL, SumR�� �ʱ�ȭ ���־�� �� ���� �޾Ƶ���.
		}
	}

	//�׸� ���� �� ��ȭ���� ����
	int idx = 1;
	int idx2 = 1;
	int idx3 = 1;
	idx = pDoc->ASumLR_1.GetSize();
	idx2 = pDoc->ASumLR_2.GetSize();
	idx3 = pDoc->ASumLR_3.GetSize();
	if (idx3 == 0 && idx2 == 0 && idx == 0) {
		AfxMessageBox(_T("�׸��� �����ϴ�."));
		return;
	}

	//�׸� ���� ���� �����׸� ����
	int count = m_ListD.GetItemCount();
	int i;
	for (i = count - 1; i >= 0; i--) {
		m_ListD.DeleteItem(i);
	}
	int countD = m_ListDD.GetItemCount();

	for (i = countD - 1; i >= 0; i--) {
		m_ListDD.DeleteItem(i);
	}

	if (pDoc->SurPlusSet == 1) {	//�����׿����� �ݿ����� �ʾ�����
		AfxMessageBox(_T("�����׿����� �ݿ����� �ʾҽ��ϴ�.\n���Ͱ�꼭�� ���� ��ȸ���ּ���."));
		//�ڵ尪 �о ����Ʈ��Ʈ�ѿ� ǥ��
		if (pDoc->ASumLR_1.GetSize() != 0) {
			for (int i = 0; i < pDoc->ASumLR_1.GetSize(); i++) {	//	�ڵ� 1 ����
				int nItemNum = m_ListD.GetItemCount();
				m_ListD.InsertItem(nItemNum, pDoc->AName_1[i], NULL);
				if (pDoc->ADCCode_1[i] == _T("1")) {
					ConvertDataToStringD(pDoc->ASumLR_1[i], CostComma);
					m_ListD.SetItemText(nItemNum, 1, CostComma);
				}
				else if (pDoc->ADCCode_1[i] == _T("2")) {
					ConvertDataToStringD(pDoc->ASumLR_1[i], CostComma);
					m_ListD.SetItemText(nItemNum, 1, _T("-") + CostComma);
				}
			}
		}

		if (pDoc->ASumLR_2.GetSize() != 0) {
			for (int i = 0; i < pDoc->ASumLR_2.GetSize(); i++) {	//	�ڵ� 2 ����
				int nItemNum = m_ListD.GetItemCount();
				m_ListD.InsertItem(nItemNum, pDoc->AName_2[i], NULL);
				if (pDoc->ADCCode_2[i] == _T("1")) {
					ConvertDataToStringD(pDoc->ASumLR_2[i], CostComma);
					m_ListD.SetItemText(nItemNum, 2, _T("-") + CostComma);
				}
				else if (pDoc->ADCCode_2[i] == _T("2")) {
					ConvertDataToStringD(pDoc->ASumLR_2[i], CostComma);
					m_ListD.SetItemText(nItemNum, 2, CostComma);
				}
			}
		}

		if (pDoc->ASumLR_3.GetSize() != 0) {
			for (int i = 0; i < pDoc->ASumLR_3.GetSize(); i++) {	//	�ڵ� 3 ����
				int nItemNum = m_ListD.GetItemCount();
				m_ListD.InsertItem(nItemNum, pDoc->AName_3[i], NULL);
				if (pDoc->ADCCode_3[i] == _T("1")) {
					ConvertDataToStringD(pDoc->ASumLR_3[i], CostComma);
					m_ListD.SetItemText(nItemNum, 3, _T("-") + CostComma);
				}
				else if (pDoc->ADCCode_3[i] == _T("2")) {
					ConvertDataToStringD(pDoc->ASumLR_3[i], CostComma);
					m_ListD.SetItemText(nItemNum, 3, CostComma);
				}
			}
		}
	}

	if (pDoc->SurPlusSet == 2) {	//�����׿����� �ݿ��� ���

		//�ڵ尪 �о ����Ʈ��Ʈ�ѿ� ǥ��
		if (pDoc->ASumLR_1.GetSize() != 0) {
			for (int i = 0; i < pDoc->ASumLR_1.GetSize(); i++) {	//	�ڵ� 1 ����
				int nItemNum = m_ListD.GetItemCount();
				m_ListD.InsertItem(nItemNum, pDoc->AName_1[i], NULL);
				if (pDoc->ADCCode_1[i] == _T("1")) {					// ADCCODE�� ���ʴ�� �����ϱ� ������ �Ѱ��϶� �ش� ���ҿ� �����ϴ°� �Ұ���
					ConvertDataToStringD(pDoc->ASumLR_1[i], CostComma);
					m_ListD.SetItemText(nItemNum, 1, CostComma);
				}
				else if (pDoc->ADCCode_1[i] == _T("2")) {
					ConvertDataToStringD(pDoc->ASumLR_1[i], CostComma);
					m_ListD.SetItemText(nItemNum, 1, _T("-") + CostComma);
				}
			}
		}


		int nItemNum = m_ListD.GetItemCount();
		m_ListD.InsertItem(nItemNum, _T("���� �׿���"), NULL);
		if (pDoc->SurPlusSign == 1) {
			ConvertDataToStringD(pDoc->EarnedSurplus, CostComma);
			m_ListD.SetItemText(nItemNum, 2, _T("-") + CostComma);
		}
		else if (pDoc->SurPlusSign == 2) {
			ConvertDataToStringD(pDoc->EarnedSurplus, CostComma);
			m_ListD.SetItemText(nItemNum, 2, CostComma);
		}
		else
			return;

		if (pDoc->ASumLR_2.GetSize() != 0) {
			for (int i = 0; i < pDoc->ASumLR_2.GetSize(); i++) {	//	�ڵ� 2 ����
				int nItemNum = m_ListD.GetItemCount();
				m_ListD.InsertItem(nItemNum, pDoc->AName_2[i], NULL);
				if (pDoc->ADCCode_2[i] == _T("1")) {
					ConvertDataToStringD(pDoc->ASumLR_2[i], CostComma);
					m_ListD.SetItemText(nItemNum, 2, _T("-") + CostComma);
				}
				else if (pDoc->ADCCode_2[i] == _T("2")) {
					ConvertDataToStringD(pDoc->ASumLR_2[i], CostComma);
					m_ListD.SetItemText(nItemNum, 2, CostComma);
				}
			}
		}

		if (pDoc->ASumLR_3.GetSize() != 0) {
			for (int i = 0; i < pDoc->ASumLR_3.GetSize(); i++) {	//	�ڵ� 3 ����
				int nItemNum = m_ListD.GetItemCount();
				m_ListD.InsertItem(nItemNum, pDoc->AName_3[i], NULL);
				if (pDoc->ADCCode_3[i] == _T("1")) {
					ConvertDataToStringD(pDoc->ASumLR_3[i], CostComma);
					m_ListD.SetItemText(nItemNum, 3, _T("-") + CostComma);
				}
				else if (pDoc->ADCCode_3[i] == _T("2")) {
					ConvertDataToStringD(pDoc->ASumLR_3[i], CostComma);
					m_ListD.SetItemText(nItemNum, 3, CostComma);
				}
			}
		}
	}

	//�繫����ǥ�հ豸��
	long Asset = 0;
	long AssetSum = 0;
	long Equity = 0;
	long EquitySum = 0;
	long Liabilities = 0;
	long LiabilitiesSum = 0;
	
	/*
	CString SumToString;
	CString SumComma;
	*/

	//�ڻ������ ����
	if (pDoc->ASumLR_1.GetSize() != 0) {
		for (int i = 0; i < pDoc->ASumLR_1.GetSize(); i++) {	//	�ڵ� 4 �հ豸��, �ڵ� ������ŭ ����
			if (pDoc->ADCCode_1[i] == _T("1")) {
				Asset = _wtol(pDoc->ASumLR_1[i]);
				AssetSum = (AssetSum + Asset);
			}
			else if (pDoc->ADCCode_1[i] == _T("2")) {
				Asset = _wtol(pDoc->ASumLR_1[i]);
				AssetSum = (AssetSum - Asset);
			}
		}
	}
	//�ں������� ����
	if (pDoc->ASumLR_2.GetSize() != 0) {
		for (int i = 0; i < pDoc->ASumLR_2.GetSize(); i++) {	//	�ڵ� 5 �հ豸��, �ڵ� ������ŭ ����
			if (pDoc->ADCCode_2[i] == _T("2")) {
				Equity = _wtol(pDoc->ASumLR_2[i]);
				EquitySum = (EquitySum + Equity);
			}
			else if (pDoc->ADCCode_2[i] == _T("1")) {
				Equity = _wtol(pDoc->ASumLR_2[i]);
				EquitySum = (EquitySum - Equity);
			}
		}
	}
	if (pDoc->SurPlusSign == 1) {
		EquitySum = (EquitySum - _wtol(pDoc->EarnedSurplus));
	}
	else if (pDoc->SurPlusSign == 2) {
		EquitySum = (EquitySum + _wtol(pDoc->EarnedSurplus));
	}
	else
		return;

	//��ä������ ����
	if (pDoc->ASumLR_3.GetSize() != 0) {
		for (int i = 0; i < pDoc->ASumLR_3.GetSize(); i++) {	//	�ڵ� 5 �հ豸��, �ڵ� ������ŭ ����
			if (pDoc->ADCCode_3[i] == _T("2")) {
				Liabilities = _wtol(pDoc->ASumLR_3[i]);
				LiabilitiesSum = (LiabilitiesSum + Liabilities);
			}
			else if (pDoc->ADCCode_3[i] == _T("1")) {
				Liabilities = _wtol(pDoc->ASumLR_3[i]);
				LiabilitiesSum = (LiabilitiesSum - Liabilities);
			}
		}
	}

	m_ListDD.InsertItem(0, _T("�ڻ� �հ�"), NULL);
	m_ListDD.InsertItem(1, _T("�ں� �հ�"), NULL);
	m_ListDD.InsertItem(2, _T("��ä �հ�"), NULL);

	SumToString.Format(_T("%ld"), AssetSum);
	ConvertDataToStringD(SumToString, SumComma);
	m_ListDD.SetItemText(0, 1, SumComma);
	SumToString.Format(_T("%ld"), EquitySum);
	ConvertDataToStringD(SumToString, SumComma);
	m_ListDD.SetItemText(1, 2, SumComma);
	SumToString.Format(_T("%ld"), LiabilitiesSum);
	ConvertDataToStringD(SumToString, SumComma);
	m_ListDD.SetItemText(2, 3, SumComma);
}