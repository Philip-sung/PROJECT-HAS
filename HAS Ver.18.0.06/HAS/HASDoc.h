
// HASDoc.h : CHASDoc 클래스의 인터페이스
//


#pragma once


class CHASDoc : public CDocument
{
public:

	int SurPlusSet = 1;
	int SurPlusSign = 0;

public:
	//CStringArray를 생성
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


protected: // serialization에서만 만들어집니다.
	CHASDoc();
	DECLARE_DYNCREATE(CHASDoc)

// 특성입니다.
public:

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 구현입니다.
public:
	virtual ~CHASDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 검색 처리기에 대한 검색 콘텐츠를 설정하는 도우미 함수
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
