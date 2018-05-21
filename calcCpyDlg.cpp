
// calcCpyDlg.cpp : 구현 파일
//

#include "stdafx.h"
#include "calcCpy.h"
#include "calcCpyDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CcalcCpyDlg 대화 상자



CcalcCpyDlg::CcalcCpyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_CALCCPY_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CcalcCpyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, edit1);
	DDX_Control(pDX, IDC_BUTTON1, btn1);
	DDX_Control(pDX, IDC_EDIT2, edit2);

}

BEGIN_MESSAGE_MAP(CcalcCpyDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CcalcCpyDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CcalcCpyDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CcalcCpyDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CcalcCpyDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CcalcCpyDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CcalcCpyDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CcalcCpyDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CcalcCpyDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CcalcCpyDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CcalcCpyDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CcalcCpyDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CcalcCpyDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CcalcCpyDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CcalcCpyDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CcalcCpyDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CcalcCpyDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CcalcCpyDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CcalcCpyDlg::OnBnClickedButton18)
//	ON_WM_KEYDOWN()
END_MESSAGE_MAP()


// CcalcCpyDlg 메시지 처리기

BOOL CcalcCpyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CcalcCpyDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 응용 프로그램의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CcalcCpyDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CcalcCpyDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CcalcCpyDlg::OnBnClickedButton1()
{
	CString temp;
	Calc c;
	edit1.GetWindowTextA(temp);
	// <=인 이유 NULL값. 오류 겪었음.
	for (int i = 0; i <= temp.GetLength(); i++)
		c.inputArr[i] = temp.GetAt(i);
	c.infixToPostfix();

	int res = c.calcRes();
	temp.Format("%d", res);
	edit2.SetWindowTextA(temp);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

// + button
void CcalcCpyDlg::OnBnClickedButton2()
{
	if (script.GetLength() == 0) {}
	else if(isdigit(script.GetAt(script.GetLength()-1)) || script.GetAt(script.GetLength()-1) == '(' || script.GetAt(script.GetLength() - 1) == ')')
		script += '+';
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

// - button
void CcalcCpyDlg::OnBnClickedButton3()
{
	if (script.GetLength() == 0) {}
	else if (isdigit(script.GetAt(script.GetLength()-1)) || script.GetAt(script.GetLength() - 1) == '(' || script.GetAt(script.GetLength() - 1) == ')')
		script += '-';
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

// * button
void CcalcCpyDlg::OnBnClickedButton4()
{
	if (script.GetLength() == 0) {}
	else if (isdigit(script.GetAt(script.GetLength()-1)) || script.GetAt(script.GetLength() - 1) == '(' || script.GetAt(script.GetLength() - 1) == ')')
		script += '*';
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

// / button
void CcalcCpyDlg::OnBnClickedButton5()
{
	if (script.GetLength() == 0) {}
	else if (isdigit(script.GetAt(script.GetLength()-1)) || script.GetAt(script.GetLength() - 1) == '(' || script.GetAt(script.GetLength() - 1) == ')')
		script += '/';
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CcalcCpyDlg::OnBnClickedButton6()
{
	script += '1';
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CcalcCpyDlg::OnBnClickedButton7()
{
	script += '2';
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CcalcCpyDlg::OnBnClickedButton8()
{
	script += '3';
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CcalcCpyDlg::OnBnClickedButton9()
{
	script += '4';
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CcalcCpyDlg::OnBnClickedButton10()
{
	script += '5';
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CcalcCpyDlg::OnBnClickedButton11()
{
	script += '6';
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CcalcCpyDlg::OnBnClickedButton12()
{
	script += '7';
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CcalcCpyDlg::OnBnClickedButton13()
{
	script += '8';
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
 
void CcalcCpyDlg::OnBnClickedButton14()
{
	script += '9';
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CcalcCpyDlg::OnBnClickedButton15()
{
	script += '0';
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CcalcCpyDlg::OnBnClickedButton16()
{
	if (script.GetLength() == 0) {
		script += '(';
		parentNum++;
	}
	else if (!isdigit(script.GetAt(script.GetLength() - 1))) {
		script += '(';
		parentNum++;
	}
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CcalcCpyDlg::OnBnClickedButton17()
{
	if (parentNum == 0) {}
	else if (isdigit(script.GetAt(script.GetLength() - 1)) || script.GetAt(script.GetLength() - 1) == '(' || script.GetAt(script.GetLength() - 1) == ')') {
		script += ')';
		parentNum--;
	}
	edit1.SetWindowTextA(script);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

// C button
void CcalcCpyDlg::OnBnClickedButton18()
{
	script = "";
	edit1.SetWindowTextA("");
	edit2.SetWindowTextA("");
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

//void CcalcCpyDlg::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
//{
//	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
//
//	CDialogEx::OnKeyDown(nChar, nRepCnt, nFlags);
//}

