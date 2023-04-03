
// HASDoc.cpp : CHASDoc Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "HAS.h"
#endif

#include "HASDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CHASDoc

IMPLEMENT_DYNCREATE(CHASDoc, CDocument)

BEGIN_MESSAGE_MAP(CHASDoc, CDocument)
END_MESSAGE_MAP()

// CHASDoc ����/�Ҹ�

CHASDoc::CHASDoc()
{

}



CHASDoc::~CHASDoc()
{
}

BOOL CHASDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	AName_1.RemoveAll();
	AName_2.RemoveAll();
	AName_3.RemoveAll();
	AName_4.RemoveAll();
	AName_5.RemoveAll();
	ASumLR_1.RemoveAll();
	ASumLR_2.RemoveAll();
	ASumLR_3.RemoveAll();
	ASumLR_4.RemoveAll();
	ASumLR_5.RemoveAll();
	ADCCode_1.RemoveAll();
	ADCCode_2.RemoveAll();
	ADCCode_3.RemoveAll();
	ADCCode_4.RemoveAll();
	ADCCode_5.RemoveAll();
	ADCCode.RemoveAll();
	ASumLR.RemoveAll();
	EarnedSurplus = _T("0");

	ATradeNum.RemoveAll();
	ATradeCodeL.RemoveAll();
	ATradeCostL.RemoveAll();
	ATradeCodeR.RemoveAll();
	ATradeDetail.RemoveAll();


	return TRUE;
}




// CHASDoc serialization

void CHASDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		ar << ATradeNum.GetSize();
		ar << ATradeCodeL.GetSize();
		ar << ATradeCostL.GetSize();
		ar << ATradeCodeR.GetSize();
		ar << ATradeDetail.GetSize();
		for (int i = 0; i < ATradeNum.GetSize(); i++)
			ar << ATradeNum[i];
		for (int i = 0; i < ATradeCodeL.GetSize(); i++)
			ar << ATradeCodeL[i];
		for (int i = 0; i < ATradeCostL.GetSize(); i++)
			ar << ATradeCostL[i];
		for (int i = 0; i < ATradeCodeR.GetSize(); i++)
			ar << ATradeCodeR[i];
		for (int i = 0; i < ATradeDetail.GetSize(); i++)
			ar << ATradeDetail[i];
		
	}
	else
	{	
		CString ctr;
		int sizeATradeNum;
		int sizeATradeCodeL;
		int sizeATradeCostL;
		int sizeATradeCodeR;
		int sizeATradeDetail;

		ar >> sizeATradeNum;
		ar >> sizeATradeCodeL;
		ar >> sizeATradeCostL;
		ar >> sizeATradeCodeR;
		ar >> sizeATradeDetail;

		for (int i = 0; i < sizeATradeNum; i++) {
			ar >> ctr;
			ATradeNum.Add(ctr);
			
		}
		for (int i = 0; i < sizeATradeCodeL; i++) {
			ar >> ctr;
			ATradeCodeL.Add(ctr);
		}
		for (int i = 0; i < sizeATradeCostL; i++) {
			ar >> ctr;
			ATradeCostL.Add(ctr);
		}
		for (int i = 0; i < sizeATradeCodeR; i++) {
			ar >> ctr;
			ATradeCodeR.Add(ctr);
		}
		for (int i = 0; i < sizeATradeDetail; i++) {
			ar >> ctr;
			ATradeDetail.Add(ctr);
		}

	
	}
}

#ifdef SHARED_HANDLERS

// ����� �׸��� �����մϴ�.
void CHASDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// ������ �����͸� �׸����� �� �ڵ带 �����Ͻʽÿ�.
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// �˻� ó���⸦ �����մϴ�.
void CHASDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ������ �����Ϳ��� �˻� �������� �����մϴ�.
	// ������ �κ��� ";"�� ���еǾ�� �մϴ�.

	// ��: strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void CHASDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CHASDoc ����

#ifdef _DEBUG
void CHASDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CHASDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CHASDoc ���
