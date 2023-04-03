// HASBView.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "HAS.h"
#include "HASBView.h"

//
// parm_data : ','��  �������� ���� ���ڰ� ����� ���ڿ�. ��) 1234
// parm_string : parm_data�� ����ִ� ���ڿ� ',' ó���� �Ͽ� ������ ���ڿ�. ��) 1,234
//
// [ �Լ� ��� ��� ]
// CString org_number = "1234", display_number;
// ConvertDataToStringB(org_number, display_number);
// �Ǵ�
// ConvertDataToStringB("1234", display_number);

void ConvertDataToStringB(CString parm_data, CString &parm_string)
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


//

CString CodeToNameB(long);

CString CodeToNameB(long CODENAME)
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


// CHASBView �����Դϴ�.

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

CHASDoc* CHASBView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHASDoc)));
	return (CHASDoc*)m_pDocument;
}
#endif
#endif //_DEBUG


// CHASBView �޽��� ó�����Դϴ�.


void CHASBView::OnInitialUpdate()
{
	CHASDoc *pDoc = GetDocument();
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	if (1 == 1) {
		CRect rect;
		//����Ʈ ��Ʈ���� ũ�⸦ ���´�.
		m_ListB.GetClientRect(&rect);

		for (int i = 0; i < 7; i++)
			m_ListB.DeleteColumn(0);

		// �÷� �߰�
		m_ListB.InsertColumn(0, _T("�ŷ���ȣ"), LVCFMT_LEFT, 72);
		m_ListB.InsertColumn(1, _T("�׸�"), LVCFMT_LEFT, 90);
		m_ListB.InsertColumn(2, _T("�ݾ�"), LVCFMT_LEFT, 188);
		m_ListB.InsertColumn(3, _T("�׸�"), LVCFMT_LEFT, 90);
		m_ListB.InsertColumn(4, _T("�ݾ�"), LVCFMT_LEFT, 188);


		//�������� �߰��� �÷��� ���� ����Ʈ ��Ʈ���� �ʺ񿡼� �̹� �߰��� 
		//�÷����� �ʺ� �� ������ �ϸ� �÷��� ����Ʈ ��Ʈ�ѿ� �� �°� �߰��ȴ�.
		m_ListB.InsertColumn(5, _T("�󼼳���"), LVCFMT_LEFT, rect.Width() - 741);
		m_ListB.InsertColumn(6, _T("�з�"), LVCFMT_LEFT, 90);

		m_ListB.SetExtendedStyle(m_ListB.GetExtendedStyle() | LVS_EX_FULLROWSELECT);

	}
	else
		return;
	if (1 == 1) {
		CRect rect;
		//����Ʈ ��Ʈ���� ũ�⸦ ���´�.
		m_ListBD.GetClientRect(&rect);

		for (int i = 0; i < 6; i++)
			m_ListBD.DeleteColumn(0);

		// �÷� �߰�
		m_ListBD.InsertColumn(0, _T("�ŷ���ȣ"), LVCFMT_LEFT, 70);
		m_ListBD.InsertColumn(1, _T("�׸�"), LVCFMT_LEFT, 90);
		m_ListBD.InsertColumn(2, _T("�ݾ�"), LVCFMT_LEFT, 188);
		m_ListBD.InsertColumn(3, _T("�׸�"), LVCFMT_LEFT, 90);
		m_ListBD.InsertColumn(4, _T("�ݾ�"), LVCFMT_LEFT, 188);

		//�������� �߰��� �÷��� ���� ����Ʈ ��Ʈ���� �ʺ񿡼� �̹� �߰��� 
		//�÷����� �ʺ� �� ������ �ϸ� �÷��� ����Ʈ ��Ʈ�ѿ� �� �°� �߰��ȴ�.
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
		AfxMessageBox(_T("�׸��� �����ϴ�."));
		return;
	}

	for (int i = 0; i < pDoc->ATradeNum.GetSize(); i++) {			//0��° �ŷ����� �ŷ���ȣ�� �Էµ� ��� �ŷ��� ��ȸ�Ѵ�.
		CODEG = _wtol(pDoc->ATradeCodeR[i]);						//�ڵ���ȸ�� ���� i��° ATradeCodeR ��ȯ
		int nItemNum = m_ListB.GetItemCount();						//����Ʈ ����� ���� ���� ��
		if (CODEG == CODEGB) {										//���� i��°�� ATradeCodeR�� �Է��� �ڵ�� ���ٸ�
			m_ListB.InsertItem(nItemNum, pDoc->ATradeNum[i], NULL);	//i��° �ŷ��� �ŷ���ȣ ���
			Code1 = _wtol(pDoc->ATradeCodeL[i]);					//i��° �ŷ��� ATradeCodeR�� ������ ��ȯ
			m_ListB.SetItemText(nItemNum, 1, CodeToNameB(Code1));	//i��° �ŷ��� ATradeCodeR�� �ش��ϴ� �׸� ��� 
			ConvertDataToStringB(pDoc->ATradeCostL[i], CostComma);	//i��° �ŷ��� ������ �޸������� ��ȯ
			m_ListB.SetItemText(nItemNum, 2, CostComma);			//i��° �ŷ��� �޸����� ���
			m_ListB.SetItemText(nItemNum, 5, pDoc->ATradeDetail[i]);//i��° �ŷ��� ATradeDetail ���
			m_ListB.SetItemText(nItemNum, 6, CodeToNameB(CODEGB)); // TEST
			templong = _wtol(pDoc->ATradeCostL[i]);					//i��° �ŷ��� ������ templong�� ���������� ����
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
		AfxMessageBox(_T("�׸��� �����ϴ�."));
		return;
	}

	for (int i = 0; i < pDoc->ATradeNum.GetSize(); i++) {			//0��° �ŷ����� �ŷ���ȣ�� �Էµ� ��� �ŷ��� ��ȸ�Ѵ�.
		CODEG = _wtol(pDoc->ATradeCodeR[i]);						//�ڵ���ȸ�� ���� i��° ATradeCodeR ��ȯ
		int nItemNum = m_ListB.GetItemCount();						//����Ʈ ����� ���� ���� ��
		if (CODEG == CODEGB) {										//���� i��°�� ATradeCodeR�� �Է��� �ڵ�� ���ٸ�
			m_ListB.InsertItem(nItemNum, pDoc->ATradeNum[i], NULL);	//i��° �ŷ��� �ŷ���ȣ ���
			Code1 = _wtol(pDoc->ATradeCodeL[i]);					//i��° �ŷ��� ATradeCodeR�� ������ ��ȯ
			m_ListB.SetItemText(nItemNum, 1, CodeToNameB(Code1));	//i��° �ŷ��� ATradeCodeR�� �ش��ϴ� �׸� ��� 
			ConvertDataToStringB(pDoc->ATradeCostL[i], CostComma);	//i��° �ŷ��� ������ �޸������� ��ȯ
			m_ListB.SetItemText(nItemNum, 2, CostComma);			//i��° �ŷ��� �޸����� ���
			m_ListB.SetItemText(nItemNum, 5, pDoc->ATradeDetail[i]);//i��° �ŷ��� ATradeDetail ���
			m_ListB.SetItemText(nItemNum, 6, CodeToNameB(CODEGB)); // TEST
			templong = _wtol(pDoc->ATradeCostL[i]);					//i��° �ŷ��� ������ templong�� ���������� ����
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
