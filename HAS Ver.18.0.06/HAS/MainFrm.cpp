
// MainFrm.cpp : CMainFrame Ŭ������ ����
//

#include "stdafx.h"
#include "HAS.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()
	ON_COMMAND(ID_FIRSTVIEW, &CMainFrame::OnFirstview)
	ON_COMMAND(ID_SECONDVIEW, &CMainFrame::OnSecondview)
	ON_COMMAND(ID_THIRDVIEW, &CMainFrame::OnThirdview)
	ON_COMMAND(ID_FOURTHVIEW, &CMainFrame::OnFourthview)
	ON_WM_GETMINMAXINFO()
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // ���� �� ǥ�ñ�
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

// CMainFrame ����/�Ҹ�

CMainFrame::CMainFrame() : m_bFirst(false)
{
	// TODO: ���⿡ ��� �ʱ�ȭ �ڵ带 �߰��մϴ�.
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP | CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("���� ������ ������ ���߽��ϴ�.\n");
		return -1;      // ������ ���߽��ϴ�.
	}

	if (!m_wndStatusBar.Create(this))
	{
		TRACE0("���� ǥ������ ������ ���߽��ϴ�.\n");
		return -1;      // ������ ���߽��ϴ�.
	}
	m_wndStatusBar.SetIndicators(indicators, sizeof(indicators)/sizeof(UINT));

	// TODO: ���� ������ ��ŷ�� �� ���� �Ϸ��� �� �� ���� �����Ͻʽÿ�.
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);


	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	cs.x = 0;    //  ���ʿ��� 100

	cs.y = 0;    //  ���ʿ��� 100


				   //  �����찡 ���� ����
	cs.cx = GetSystemMetrics(SM_CXFULLSCREEN);;    //  ������ ��

	cs.cy = GetSystemMetrics(SM_CYFULLSCREEN);;    //  ������ ����

	return TRUE;
}

// CMainFrame ����

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}
#endif //_DEBUG


// CMainFrame �޽��� ó����



BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
	m_pHASView = new CHASView;   //�� Ŭ������ ��ü ������ ������ ��
								   //�� ��ü�� �����Ѵ�. 
	((CView *)m_pHASView)->Create(NULL, NULL, 0L, CFrameWnd::rectDefault,
		this, IDD_HAS_FORM, pContext);
	m_pHASView->ShowWindow(SW_HIDE);             //������ �並 �����. 
	m_pHASView->SetDlgCtrlID(IDD_HAS_FORM);  //������ �信 ��Ʈ�� ID�� ����

	m_pHASBView = new CHASBView;   //�� Ŭ������ ��ü ������ ������ ��
									 //�� ��ü�� �����Ѵ�. 
	((CView *)m_pHASBView)->Create(NULL, NULL, 0L, CFrameWnd::rectDefault,
		this, IDD_HASBVIEW, pContext);
	m_pHASBView->ShowWindow(SW_HIDE);             //������ �並 �����. 
	m_pHASBView->SetDlgCtrlID(IDD_HASBVIEW);  //������ �信 ��Ʈ�� ID�� ����

	m_pHASCView = new CHASCView;         //�� Ŭ������ ��ü ������ ������ ��
										   //�� ��ü�� �����Ѵ�. 
	((CView *)m_pHASCView)->Create(NULL, NULL, 0L, CFrameWnd::rectDefault,
		this, IDD_HASCVIEW, pContext);
	m_pHASCView->ShowWindow(SW_HIDE);         //������ �並 �����. 
	m_pHASCView->SetDlgCtrlID(IDD_HASCVIEW);  //������ �信 ��Ʈ�� ID�� ����

	m_pHASDView = new CHASDView;         //�� Ŭ������ ��ü ������ ������ ��
										 //�� ��ü�� �����Ѵ�. 
	((CView *)m_pHASDView)->Create(NULL, NULL, 0L, CFrameWnd::rectDefault,
		this, IDD_HASDVIEW, pContext);
	m_pHASDView->ShowWindow(SW_HIDE);         //������ �並 �����. 
	m_pHASDView->SetDlgCtrlID(IDD_HASDVIEW);  //������ �信 ��Ʈ�� ID�� ����
	return CFrameWnd::OnCreateClient(lpcs, pContext);
}

int ScreenNum = 1;

void CMainFrame::SwitchToForm(unsigned int viewID)
{
	//SwitchToForm( ) �Լ��� ���ʷ� ȣ��Ǿ��ٸ� 
	if (m_bFirst == false) {  //m_bFirst�� false�̰� �̶� Ȱ��ȭ�� ��� ���� ���̱⿡
							  //m_pDynamic5View�� ���� �� �����͸� ������ �д�. 
		m_pHASView = (CHASView*)GetActiveView();
		//���Ŀ� SwitchToForm( ) �Լ��� ���ؼ��� ��������� ������� �ʵ��� �ϱ� ���ؼ�
		m_bFirst = true;    //m_bFirst�� true�� �����Ѵ�.
	}

}


void CMainFrame::OnFirstview()
{
	SwitchToForm(IDD_HAS_FORM);
	//���� Ȱ��ȭ�� �並 pOldActiveView�� ������ �д�. 
	CView* pOldActiveView = GetActiveView();
	//SwitchToForm( ) �Լ��� �Ű������� ���޵� ���� ��ȯ�ϰ����ϴ� ��ȭ������ 
	//���ø� ���̵��̹Ƿ� ���� ������ ���� ��� �ͼ� pNewActiveView�� ������ �д�.
	CView* pNewActiveView = (CView*)GetDlgItem(IDD_HAS_FORM);

	if (pNewActiveView != NULL) {
		if (ScreenNum == 1)  //��ȯ�ϰ����ϴ� �䰡 ���� ��� �����ϴٸ�
			return;                           //�Ʒ� ������� �������� �ʰ� �Լ����� ���

		pOldActiveView->ShowWindow(SW_HIDE);//���� ���̴� �並 ȭ�鿡�� �����.
		if (ScreenNum == 2)
			pOldActiveView->SetDlgCtrlID(IDD_HASBVIEW);
		if (ScreenNum == 3)
			pOldActiveView->SetDlgCtrlID(IDD_HASCVIEW);
		if (ScreenNum == 4)
			pOldActiveView->SetDlgCtrlID(IDD_HASDVIEW);

		SetActiveView(pNewActiveView);      //��ȯ�ϰ����ϴ� ���ο� �並 Ȱ��ȭ�� �Ŀ�
		pNewActiveView->ShowWindow(SW_SHOW);//�̸� ȭ�鿡 ���̰� �Ѵ�. 
											//SetDlgCtrlID( )�� AFX_IDW_PANE_FIRST ���̵� �ο��Ͽ� ���Ϲ������� �ϳ�����
											//Ŭ���̾�Ʈ �䰡 �ǵ��� �Ѵ�. 
		pNewActiveView->SetDlgCtrlID(AFX_IDW_PANE_FIRST);
		//������ ������ ���̾ƿ��� �����Ѵ�. ��, ũ�� ���� �缳���Ѵ�. 
		RecalcLayout();
	}
	
	ScreenNum = 1;

}


void CMainFrame::OnSecondview()
{
	SwitchToForm(IDD_HASBVIEW);
	//���� Ȱ��ȭ�� �並 pOldActiveView�� ������ �д�. 
	CView* pOldActiveView = GetActiveView();
	//SwitchToForm( ) �Լ��� �Ű������� ���޵� ���� ��ȯ�ϰ����ϴ� ��ȭ������ 
	//���ø� ���̵��̹Ƿ� ���� ������ ���� ��� �ͼ� pNewActiveView�� ������ �д�.
	CView* pNewActiveView = (CView*)GetDlgItem(IDD_HASBVIEW);

	if (pNewActiveView != NULL) {
		if (ScreenNum == 2)  //��ȯ�ϰ����ϴ� �䰡 ���� ��� �����ϴٸ�
			return;                           //�Ʒ� ������� �������� �ʰ� �Լ����� ���

		pOldActiveView->ShowWindow(SW_HIDE);//���� ���̴� �並 ȭ�鿡�� �����.
		if (ScreenNum == 1)
			pOldActiveView->SetDlgCtrlID(IDD_HAS_FORM);
		if (ScreenNum == 3)
			pOldActiveView->SetDlgCtrlID(IDD_HASCVIEW);
		if (ScreenNum == 4)
			pOldActiveView->SetDlgCtrlID(IDD_HASDVIEW);

		SetActiveView(pNewActiveView);      //��ȯ�ϰ����ϴ� ���ο� �並 Ȱ��ȭ�� �Ŀ�
		pNewActiveView->ShowWindow(SW_SHOW);//�̸� ȭ�鿡 ���̰� �Ѵ�. 
											//SetDlgCtrlID( )�� AFX_IDW_PANE_FIRST ���̵� �ο��Ͽ� ���Ϲ������� �ϳ�����
											//Ŭ���̾�Ʈ �䰡 �ǵ��� �Ѵ�. 
		pNewActiveView->SetDlgCtrlID(AFX_IDW_PANE_FIRST);
		//������ ������ ���̾ƿ��� �����Ѵ�. ��, ũ�� ���� �缳���Ѵ�. 
		RecalcLayout();
	}

	ScreenNum = 2;

}

void CMainFrame::OnThirdview()
{
	SwitchToForm(IDD_HASCVIEW);
	//���� Ȱ��ȭ�� �並 pOldActiveView�� ������ �д�. 
	CView* pOldActiveView = GetActiveView();
	//SwitchToForm( ) �Լ��� �Ű������� ���޵� ���� ��ȯ�ϰ����ϴ� ��ȭ������ 
	//���ø� ���̵��̹Ƿ� ���� ������ ���� ��� �ͼ� pNewActiveView�� ������ �д�.
	CView* pNewActiveView = (CView*)GetDlgItem(IDD_HASCVIEW);

	if (pNewActiveView != NULL) {
		if (ScreenNum == 3)  //��ȯ�ϰ����ϴ� �䰡 ���� ��� �����ϴٸ�
			return;                           //�Ʒ� ������� �������� �ʰ� �Լ����� ���

		pOldActiveView->ShowWindow(SW_HIDE);//���� ���̴� �並 ȭ�鿡�� �����.
		if (ScreenNum == 2)
			pOldActiveView->SetDlgCtrlID(IDD_HASBVIEW);
		if (ScreenNum == 1)
			pOldActiveView->SetDlgCtrlID(IDD_HAS_FORM);
		if (ScreenNum == 4)
			pOldActiveView->SetDlgCtrlID(IDD_HASDVIEW);

		SetActiveView(pNewActiveView);      //��ȯ�ϰ����ϴ� ���ο� �並 Ȱ��ȭ�� �Ŀ�
		pNewActiveView->ShowWindow(SW_SHOW);//�̸� ȭ�鿡 ���̰� �Ѵ�. 
											//SetDlgCtrlID( )�� AFX_IDW_PANE_FIRST ���̵� �ο��Ͽ� ���Ϲ������� �ϳ�����
											//Ŭ���̾�Ʈ �䰡 �ǵ��� �Ѵ�. 
		pNewActiveView->SetDlgCtrlID(AFX_IDW_PANE_FIRST);
		//������ ������ ���̾ƿ��� �����Ѵ�. ��, ũ�� ���� �缳���Ѵ�. 
		RecalcLayout();
	}

	ScreenNum = 3;

}


void CMainFrame::OnFourthview()
{
	SwitchToForm(IDD_HASDVIEW);
	//���� Ȱ��ȭ�� �並 pOldActiveView�� ������ �д�. 
	CView* pOldActiveView = GetActiveView();
	//SwitchToForm( ) �Լ��� �Ű������� ���޵� ���� ��ȯ�ϰ����ϴ� ��ȭ������ 
	//���ø� ���̵��̹Ƿ� ���� ������ ���� ��� �ͼ� pNewActiveView�� ������ �д�.
	CView* pNewActiveView = (CView*)GetDlgItem(IDD_HASDVIEW);

	if (pNewActiveView != NULL) {
		if (ScreenNum == 4)  //��ȯ�ϰ����ϴ� �䰡 ���� ��� �����ϴٸ�
			return;                           //�Ʒ� ������� �������� �ʰ� �Լ����� ���

		pOldActiveView->ShowWindow(SW_HIDE);//���� ���̴� �並 ȭ�鿡�� �����.
		if (ScreenNum == 2)
			pOldActiveView->SetDlgCtrlID(IDD_HASBVIEW);
		if (ScreenNum == 3)
			pOldActiveView->SetDlgCtrlID(IDD_HASCVIEW);
		if (ScreenNum == 1)
			pOldActiveView->SetDlgCtrlID(IDD_HAS_FORM);

		SetActiveView(pNewActiveView);      //��ȯ�ϰ����ϴ� ���ο� �並 Ȱ��ȭ�� �Ŀ�
		pNewActiveView->ShowWindow(SW_SHOW);//�̸� ȭ�鿡 ���̰� �Ѵ�. 
											//SetDlgCtrlID( )�� AFX_IDW_PANE_FIRST ���̵� �ο��Ͽ� ���Ϲ������� �ϳ�����
											//Ŭ���̾�Ʈ �䰡 �ǵ��� �Ѵ�. 
		pNewActiveView->SetDlgCtrlID(AFX_IDW_PANE_FIRST);
		//������ ������ ���̾ƿ��� �����Ѵ�. ��, ũ�� ���� �缳���Ѵ�. 
		RecalcLayout();
	}

	ScreenNum = 4;


}


void CMainFrame::OnGetMinMaxInfo(MINMAXINFO* lpMMI)
{
	//lpMMI->ptMinTrackSize.x = 1280;
	//lpMMI->ptMinTrackSize.y = 720;

	//lpMMI->ptMaxTrackSize.x = 1280;
	//lpMMI->ptMaxTrackSize.y = 720;

	CFrameWnd::OnGetMinMaxInfo(lpMMI);
}



//void CMainFrame::ActivateFrame(int nCmdShow)
//{
//	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
//
//	CFrameWnd::ActivateFrame(nCmdShow);
//}
