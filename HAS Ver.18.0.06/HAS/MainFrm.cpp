
// MainFrm.cpp : CMainFrame 클래스의 구현
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
	ID_SEPARATOR,           // 상태 줄 표시기
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

// CMainFrame 생성/소멸

CMainFrame::CMainFrame() : m_bFirst(false)
{
	// TODO: 여기에 멤버 초기화 코드를 추가합니다.
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
		TRACE0("도구 모음을 만들지 못했습니다.\n");
		return -1;      // 만들지 못했습니다.
	}

	if (!m_wndStatusBar.Create(this))
	{
		TRACE0("상태 표시줄을 만들지 못했습니다.\n");
		return -1;      // 만들지 못했습니다.
	}
	m_wndStatusBar.SetIndicators(indicators, sizeof(indicators)/sizeof(UINT));

	// TODO: 도구 모음을 도킹할 수 없게 하려면 이 세 줄을 삭제하십시오.
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);


	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	cs.x = 0;    //  왼쪽에서 100

	cs.y = 0;    //  위쪽에서 100


				   //  윈도우가 폭과 높이
	cs.cx = GetSystemMetrics(SM_CXFULLSCREEN);;    //  윈도우 폭

	cs.cy = GetSystemMetrics(SM_CYFULLSCREEN);;    //  윈도우 높이

	return TRUE;
}

// CMainFrame 진단

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


// CMainFrame 메시지 처리기



BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
	m_pHASView = new CHASView;   //뷰 클래스로 객체 변수를 선언한 후
								   //뷰 객체를 생성한다. 
	((CView *)m_pHASView)->Create(NULL, NULL, 0L, CFrameWnd::rectDefault,
		this, IDD_HAS_FORM, pContext);
	m_pHASView->ShowWindow(SW_HIDE);             //생성한 뷰를 숨긴다. 
	m_pHASView->SetDlgCtrlID(IDD_HAS_FORM);  //생성된 뷰에 컨트롤 ID를 설정

	m_pHASBView = new CHASBView;   //뷰 클래스로 객체 변수를 선언한 후
									 //뷰 객체를 생성한다. 
	((CView *)m_pHASBView)->Create(NULL, NULL, 0L, CFrameWnd::rectDefault,
		this, IDD_HASBVIEW, pContext);
	m_pHASBView->ShowWindow(SW_HIDE);             //생성한 뷰를 숨긴다. 
	m_pHASBView->SetDlgCtrlID(IDD_HASBVIEW);  //생성된 뷰에 컨트롤 ID를 설정

	m_pHASCView = new CHASCView;         //뷰 클래스로 객체 변수를 선언한 후
										   //뷰 객체를 생성한다. 
	((CView *)m_pHASCView)->Create(NULL, NULL, 0L, CFrameWnd::rectDefault,
		this, IDD_HASCVIEW, pContext);
	m_pHASCView->ShowWindow(SW_HIDE);         //생성한 뷰를 숨긴다. 
	m_pHASCView->SetDlgCtrlID(IDD_HASCVIEW);  //생성된 뷰에 컨트롤 ID를 설정

	m_pHASDView = new CHASDView;         //뷰 클래스로 객체 변수를 선언한 후
										 //뷰 객체를 생성한다. 
	((CView *)m_pHASDView)->Create(NULL, NULL, 0L, CFrameWnd::rectDefault,
		this, IDD_HASDVIEW, pContext);
	m_pHASDView->ShowWindow(SW_HIDE);         //생성한 뷰를 숨긴다. 
	m_pHASDView->SetDlgCtrlID(IDD_HASDVIEW);  //생성된 뷰에 컨트롤 ID를 설정
	return CFrameWnd::OnCreateClient(lpcs, pContext);
}

int ScreenNum = 1;

void CMainFrame::SwitchToForm(unsigned int viewID)
{
	//SwitchToForm( ) 함수가 최초로 호출되었다면 
	if (m_bFirst == false) {  //m_bFirst가 false이고 이때 활성화된 뷰는 비디오 뷰이기에
							  //m_pDynamic5View에 비디오 뷰 포인터를 저장해 둔다. 
		m_pHASView = (CHASView*)GetActiveView();
		//이후에 SwitchToForm( ) 함수에 대해서는 위문장들이 수행되지 않도록 하기 위해서
		m_bFirst = true;    //m_bFirst에 true를 저장한다.
	}

}


void CMainFrame::OnFirstview()
{
	SwitchToForm(IDD_HAS_FORM);
	//현재 활성화된 뷰를 pOldActiveView에 저장해 둔다. 
	CView* pOldActiveView = GetActiveView();
	//SwitchToForm( ) 함수의 매개변수로 전달된 값은 전환하고자하는 대화상자의 
	//템플릿 아이디이므로 뷰의 포인터 값을 얻어 와서 pNewActiveView에 저장해 둔다.
	CView* pNewActiveView = (CView*)GetDlgItem(IDD_HAS_FORM);

	if (pNewActiveView != NULL) {
		if (ScreenNum == 1)  //전환하고자하는 뷰가 이전 뷰와 동일하다면
			return;                           //아래 문장들을 수행하지 않고 함수에서 벗어남

		pOldActiveView->ShowWindow(SW_HIDE);//현재 보이는 뷰를 화면에서 감춘다.
		if (ScreenNum == 2)
			pOldActiveView->SetDlgCtrlID(IDD_HASBVIEW);
		if (ScreenNum == 3)
			pOldActiveView->SetDlgCtrlID(IDD_HASCVIEW);
		if (ScreenNum == 4)
			pOldActiveView->SetDlgCtrlID(IDD_HASDVIEW);

		SetActiveView(pNewActiveView);      //전환하고자하는 새로운 뷰를 활성화한 후에
		pNewActiveView->ShowWindow(SW_SHOW);//이를 화면에 보이게 한다. 
											//SetDlgCtrlID( )에 AFX_IDW_PANE_FIRST 아이디를 부여하여 단일문서에서 하나뿐인
											//클라이언트 뷰가 되도록 한다. 
		pNewActiveView->SetDlgCtrlID(AFX_IDW_PANE_FIRST);
		//프레임 윈도우 레이아웃을 변경한다. 즉, 크기 등을 재설정한다. 
		RecalcLayout();
	}
	
	ScreenNum = 1;

}


void CMainFrame::OnSecondview()
{
	SwitchToForm(IDD_HASBVIEW);
	//현재 활성화된 뷰를 pOldActiveView에 저장해 둔다. 
	CView* pOldActiveView = GetActiveView();
	//SwitchToForm( ) 함수의 매개변수로 전달된 값은 전환하고자하는 대화상자의 
	//템플릿 아이디이므로 뷰의 포인터 값을 얻어 와서 pNewActiveView에 저장해 둔다.
	CView* pNewActiveView = (CView*)GetDlgItem(IDD_HASBVIEW);

	if (pNewActiveView != NULL) {
		if (ScreenNum == 2)  //전환하고자하는 뷰가 이전 뷰와 동일하다면
			return;                           //아래 문장들을 수행하지 않고 함수에서 벗어남

		pOldActiveView->ShowWindow(SW_HIDE);//현재 보이는 뷰를 화면에서 감춘다.
		if (ScreenNum == 1)
			pOldActiveView->SetDlgCtrlID(IDD_HAS_FORM);
		if (ScreenNum == 3)
			pOldActiveView->SetDlgCtrlID(IDD_HASCVIEW);
		if (ScreenNum == 4)
			pOldActiveView->SetDlgCtrlID(IDD_HASDVIEW);

		SetActiveView(pNewActiveView);      //전환하고자하는 새로운 뷰를 활성화한 후에
		pNewActiveView->ShowWindow(SW_SHOW);//이를 화면에 보이게 한다. 
											//SetDlgCtrlID( )에 AFX_IDW_PANE_FIRST 아이디를 부여하여 단일문서에서 하나뿐인
											//클라이언트 뷰가 되도록 한다. 
		pNewActiveView->SetDlgCtrlID(AFX_IDW_PANE_FIRST);
		//프레임 윈도우 레이아웃을 변경한다. 즉, 크기 등을 재설정한다. 
		RecalcLayout();
	}

	ScreenNum = 2;

}

void CMainFrame::OnThirdview()
{
	SwitchToForm(IDD_HASCVIEW);
	//현재 활성화된 뷰를 pOldActiveView에 저장해 둔다. 
	CView* pOldActiveView = GetActiveView();
	//SwitchToForm( ) 함수의 매개변수로 전달된 값은 전환하고자하는 대화상자의 
	//템플릿 아이디이므로 뷰의 포인터 값을 얻어 와서 pNewActiveView에 저장해 둔다.
	CView* pNewActiveView = (CView*)GetDlgItem(IDD_HASCVIEW);

	if (pNewActiveView != NULL) {
		if (ScreenNum == 3)  //전환하고자하는 뷰가 이전 뷰와 동일하다면
			return;                           //아래 문장들을 수행하지 않고 함수에서 벗어남

		pOldActiveView->ShowWindow(SW_HIDE);//현재 보이는 뷰를 화면에서 감춘다.
		if (ScreenNum == 2)
			pOldActiveView->SetDlgCtrlID(IDD_HASBVIEW);
		if (ScreenNum == 1)
			pOldActiveView->SetDlgCtrlID(IDD_HAS_FORM);
		if (ScreenNum == 4)
			pOldActiveView->SetDlgCtrlID(IDD_HASDVIEW);

		SetActiveView(pNewActiveView);      //전환하고자하는 새로운 뷰를 활성화한 후에
		pNewActiveView->ShowWindow(SW_SHOW);//이를 화면에 보이게 한다. 
											//SetDlgCtrlID( )에 AFX_IDW_PANE_FIRST 아이디를 부여하여 단일문서에서 하나뿐인
											//클라이언트 뷰가 되도록 한다. 
		pNewActiveView->SetDlgCtrlID(AFX_IDW_PANE_FIRST);
		//프레임 윈도우 레이아웃을 변경한다. 즉, 크기 등을 재설정한다. 
		RecalcLayout();
	}

	ScreenNum = 3;

}


void CMainFrame::OnFourthview()
{
	SwitchToForm(IDD_HASDVIEW);
	//현재 활성화된 뷰를 pOldActiveView에 저장해 둔다. 
	CView* pOldActiveView = GetActiveView();
	//SwitchToForm( ) 함수의 매개변수로 전달된 값은 전환하고자하는 대화상자의 
	//템플릿 아이디이므로 뷰의 포인터 값을 얻어 와서 pNewActiveView에 저장해 둔다.
	CView* pNewActiveView = (CView*)GetDlgItem(IDD_HASDVIEW);

	if (pNewActiveView != NULL) {
		if (ScreenNum == 4)  //전환하고자하는 뷰가 이전 뷰와 동일하다면
			return;                           //아래 문장들을 수행하지 않고 함수에서 벗어남

		pOldActiveView->ShowWindow(SW_HIDE);//현재 보이는 뷰를 화면에서 감춘다.
		if (ScreenNum == 2)
			pOldActiveView->SetDlgCtrlID(IDD_HASBVIEW);
		if (ScreenNum == 3)
			pOldActiveView->SetDlgCtrlID(IDD_HASCVIEW);
		if (ScreenNum == 1)
			pOldActiveView->SetDlgCtrlID(IDD_HAS_FORM);

		SetActiveView(pNewActiveView);      //전환하고자하는 새로운 뷰를 활성화한 후에
		pNewActiveView->ShowWindow(SW_SHOW);//이를 화면에 보이게 한다. 
											//SetDlgCtrlID( )에 AFX_IDW_PANE_FIRST 아이디를 부여하여 단일문서에서 하나뿐인
											//클라이언트 뷰가 되도록 한다. 
		pNewActiveView->SetDlgCtrlID(AFX_IDW_PANE_FIRST);
		//프레임 윈도우 레이아웃을 변경한다. 즉, 크기 등을 재설정한다. 
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
//	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
//
//	CFrameWnd::ActivateFrame(nCmdShow);
//}
