
// calcCpyDlg.cpp : ���� ����
//

#include "stdafx.h"
#include "calcCpy.h"
#include "calcCpyDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ���� ���α׷� ������ ���Ǵ� CAboutDlg ��ȭ �����Դϴ�.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

// �����Դϴ�.
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


// CcalcCpyDlg ��ȭ ����



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


// CcalcCpyDlg �޽��� ó����

BOOL CcalcCpyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// �ý��� �޴��� "����..." �޴� �׸��� �߰��մϴ�.

	// IDM_ABOUTBOX�� �ý��� ��� ������ �־�� �մϴ�.
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

	// �� ��ȭ ������ �������� �����մϴ�.  ���� ���α׷��� �� â�� ��ȭ ���ڰ� �ƴ� ��쿡��
	//  �����ӿ�ũ�� �� �۾��� �ڵ����� �����մϴ�.
	SetIcon(m_hIcon, TRUE);			// ū �������� �����մϴ�.
	SetIcon(m_hIcon, FALSE);		// ���� �������� �����մϴ�.

	// TODO: ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.

	return TRUE;  // ��Ŀ���� ��Ʈ�ѿ� �������� ������ TRUE�� ��ȯ�մϴ�.
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

// ��ȭ ���ڿ� �ּ�ȭ ���߸� �߰��� ��� �������� �׸�����
//  �Ʒ� �ڵ尡 �ʿ��մϴ�.  ����/�� ���� ����ϴ� MFC ���� ���α׷��� ��쿡��
//  �����ӿ�ũ���� �� �۾��� �ڵ����� �����մϴ�.

void CcalcCpyDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �׸��⸦ ���� ����̽� ���ؽ�Ʈ�Դϴ�.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Ŭ���̾�Ʈ �簢������ �������� ����� ����ϴ�.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// �������� �׸��ϴ�.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ����ڰ� �ּ�ȭ�� â�� ���� ���ȿ� Ŀ���� ǥ�õǵ��� �ý��ۿ���
//  �� �Լ��� ȣ���մϴ�.
HCURSOR CcalcCpyDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CcalcCpyDlg::OnBnClickedButton1()
{
	CString temp;
	Calc c;
	edit1.GetWindowTextA(temp);
	// <=�� ���� NULL��. ���� �޾���.
	for (int i = 0; i <= temp.GetLength(); i++)
		c.inputArr[i] = temp.GetAt(i);
	c.infixToPostfix();

	int res = c.calcRes();
	temp.Format("%d", res);
	edit2.SetWindowTextA(temp);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

// + button
void CcalcCpyDlg::OnBnClickedButton2()
{
	if (script.GetLength() == 0) {}
	else if(isdigit(script.GetAt(script.GetLength()-1)) || script.GetAt(script.GetLength()-1) == '(' || script.GetAt(script.GetLength() - 1) == ')')
		script += '+';
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

// - button
void CcalcCpyDlg::OnBnClickedButton3()
{
	if (script.GetLength() == 0) {}
	else if (isdigit(script.GetAt(script.GetLength()-1)) || script.GetAt(script.GetLength() - 1) == '(' || script.GetAt(script.GetLength() - 1) == ')')
		script += '-';
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

// * button
void CcalcCpyDlg::OnBnClickedButton4()
{
	if (script.GetLength() == 0) {}
	else if (isdigit(script.GetAt(script.GetLength()-1)) || script.GetAt(script.GetLength() - 1) == '(' || script.GetAt(script.GetLength() - 1) == ')')
		script += '*';
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

// / button
void CcalcCpyDlg::OnBnClickedButton5()
{
	if (script.GetLength() == 0) {}
	else if (isdigit(script.GetAt(script.GetLength()-1)) || script.GetAt(script.GetLength() - 1) == '(' || script.GetAt(script.GetLength() - 1) == ')')
		script += '/';
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

void CcalcCpyDlg::OnBnClickedButton6()
{
	script += '1';
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

void CcalcCpyDlg::OnBnClickedButton7()
{
	script += '2';
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

void CcalcCpyDlg::OnBnClickedButton8()
{
	script += '3';
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

void CcalcCpyDlg::OnBnClickedButton9()
{
	script += '4';
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

void CcalcCpyDlg::OnBnClickedButton10()
{
	script += '5';
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

void CcalcCpyDlg::OnBnClickedButton11()
{
	script += '6';
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

void CcalcCpyDlg::OnBnClickedButton12()
{
	script += '7';
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

void CcalcCpyDlg::OnBnClickedButton13()
{
	script += '8';
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}
 
void CcalcCpyDlg::OnBnClickedButton14()
{
	script += '9';
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

void CcalcCpyDlg::OnBnClickedButton15()
{
	script += '0';
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
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
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

void CcalcCpyDlg::OnBnClickedButton17()
{
	if (parentNum == 0) {}
	else if (isdigit(script.GetAt(script.GetLength() - 1)) || script.GetAt(script.GetLength() - 1) == '(' || script.GetAt(script.GetLength() - 1) == ')') {
		script += ')';
		parentNum--;
	}
	edit1.SetWindowTextA(script);
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

// C button
void CcalcCpyDlg::OnBnClickedButton18()
{
	script = "";
	edit1.SetWindowTextA("");
	edit2.SetWindowTextA("");
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
}

//void CcalcCpyDlg::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
//{
//	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
//
//	CDialogEx::OnKeyDown(nChar, nRepCnt, nFlags);
//}

