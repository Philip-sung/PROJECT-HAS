
// HASView.cpp : CHASView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "HAS.h"
#endif

#include "HASDoc.h"
#include "HASView.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
// parm_data : ','��  �������� ���� ���ڰ� ����� ���ڿ�. ��) 1234
// parm_string : parm_data�� ����ִ� ���ڿ� ',' ó���� �Ͽ� ������ ���ڿ�. ��) 1,234
//
// [ �Լ� ��� ��� ]
// CString org_number = "1234", display_number;
// ConvertDataToString(org_number, display_number);
// �Ǵ�
// ConvertDataToString("1234", display_number);

void ConvertDataToString(CString parm_data, CString &parm_string)
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

CString CodeToName(long);

CString CodeToName(long CODENAME)
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

// CHASView ����/�Ҹ�

CHASView::CHASView()
	: CFormView(IDD_HAS_FORM)
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

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
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

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
		//����Ʈ ��Ʈ���� ũ�⸦ ���´�.
		m_List.GetClientRect(&rect);

		for (int i = 0; i < 8; i++)
		m_List.DeleteColumn(0);

		// �÷� �߰�
		m_List.InsertColumn(0, _T("�ŷ���ȣ"), LVCFMT_LEFT, 72);
		m_List.InsertColumn(1, _T("�ڵ�"), LVCFMT_LEFT, 58);
		m_List.InsertColumn(2, _T("�׸�"), LVCFMT_LEFT, 135);
		m_List.InsertColumn(3, _T("�ݾ�"), LVCFMT_LEFT, 178);
		m_List.InsertColumn(4, _T("�ڵ�"), LVCFMT_LEFT, 58);
		m_List.InsertColumn(5, _T("�׸�"), LVCFMT_LEFT, 135);
		m_List.InsertColumn(6, _T("�ݾ�"), LVCFMT_LEFT, 178);

		//�������� �߰��� �÷��� ���� ����Ʈ ��Ʈ���� �ʺ񿡼� �̹� �߰��� 
		//�÷����� �ʺ� �� ������ �ϸ� �÷��� ����Ʈ ��Ʈ�ѿ� �� �°� �߰��ȴ�.
		m_List.InsertColumn(7, _T("�󼼳���"), LVCFMT_LEFT, rect.Width() - 831);


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


// CHASView ����

#ifdef _DEBUG
void CHASView::AssertValid() const
{
	CFormView::AssertValid();
}

void CHASView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CHASDoc* CHASView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHASDoc)));
	return (CHASDoc*)m_pDocument;
}
#endif //_DEBUG


// CHASView �޽��� ó����






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
		m_List.SetItemText(nItemNum, 7, abc);*/ //CString�� long ������ �ٲٴ� �Լ� �׽�Ʈ

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

	//���븸 �����ǰ� �迭������ ����
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
	return;	//�׳� ����
	int idx = -1;
	idx = m_List.GetNextItem(-1, LVNI_ALL | LVNI_SELECTED);
	if (idx == -1) {
		AfxMessageBox(_T("���õ� �׸��� �����ϴ�."));
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
} //MODIFY ��ư�ε� ù��°�ʸ� ����ǰ� ������ ���� �ȵǾ �ϴ� ���� �� ����


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
		AfxMessageBox(_T("���õ� �׸��� �����ϴ�."));
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
