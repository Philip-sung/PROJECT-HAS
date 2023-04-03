
// HASDoc.h : CHASDoc Ŭ������ �������̽�
//


#pragma once


class CHASDoc : public CDocument
{
public:

	int SurPlusSet = 1;
	int SurPlusSign = 0;

public:
	//CStringArray�� ����
	CStringArray ATradeNum;
	CStringArray ATradeCodeL;
	CStringArray ATradeCostL;
	CStringArray ATradeCodeR;
	CStringArray ATradeDetail;
	CStringArray ASumLR_1;
	CStringArray ASumLR_2;
	CStringArray ASumLR_3;
	CStringArray ASumLR_4;
	CStringArray ASumLR_5;
	CStringArray ADCCode_1;
	CStringArray ADCCode_2;
	CStringArray ADCCode_3;
	CStringArray ADCCode_4;
	CStringArray ADCCode_5;
	CStringArray ADCCode;
	CStringArray ASumLR;
	CStringArray AName_1;
	CStringArray AName_2;
	CStringArray AName_3;
	CStringArray AName_4;
	CStringArray AName_5;
	CString EarnedSurplus = _T("0");
	WINDOWPLACEMENT Windowplace;
	HWND WP;


protected: // serialization������ ��������ϴ�.
	CHASDoc();
	DECLARE_DYNCREATE(CHASDoc)

// Ư���Դϴ�.
public:

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// �����Դϴ�.
public:
	virtual ~CHASDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// �˻� ó���⿡ ���� �˻� �������� �����ϴ� ����� �Լ�
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
