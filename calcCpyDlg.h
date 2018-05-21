
// calcCpyDlg.h : 헤더 파일
//

#pragma once
#include "afxwin.h"


// CcalcCpyDlg 대화 상자
class CcalcCpyDlg : public CDialogEx
{
// 생성입니다.
public:
	CcalcCpyDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCCPY_DIALOG };
#endif
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.
// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int parentNum=0;
	CString script;
	CEdit edit1;
	CButton btn1;
	afx_msg void OnBnClickedButton1();

	// Stack Class
	class Stack {
	public:
		// top, Arr
		int Arr[128];
		int top;

	public:
		// constructor
		Stack() {
			top = -1;
		}

		// push
		void push(int data) {
			// stack full
			if (top == 255)	{
				return;
			}
			else {
				top += 1;
				Arr[top] = data;
				return;
			}
		}

		// pop
		int pop() {
			// Stack empty
			if (top == -1) {
				return NULL;
			}
			else {
				int temp;
				temp = Arr[top];
				top -= 1;
				return temp;
			}
		}

		//retn top of stack
		int tos() {
			if (top == -1) {
				return NULL;
			}
			else {
				return Arr[top];
			}
		}
	};

	// class Calc
	class Calc {
	public:
		// input array, parsed array.
		int inputArr[128];
		int parsedArr[128];

		//stack for parsing, stack for calculate
		Stack forParsing;
		Stack forCalc;
	public:
		//infix to postfix
		void infixToPostfix()
		{
			//index of inputArr, parsedArr
			int inputIdx;
			int parsedIdx = 0;
			int temp;

			// parsing loop
			// NULL = -858993460 .. 왜 NULL을 인식을 못할까?..

			for (inputIdx = 0; inputIdx != -858993460; inputIdx++) {
				if (inputArr[inputIdx] == '\0')
					break;
				// number processing
				if (isdigit(inputArr[inputIdx])) {
					for (temp = 0; isdigit(inputArr[inputIdx]); inputIdx++) {
						temp = temp * 10 + (inputArr[inputIdx] - '0');
					}
					inputIdx--;
					parsedArr[parsedIdx++] = temp;
				}
				// LParent processing
				else if (inputArr[inputIdx] == '(')
					forParsing.push(inputArr[inputIdx]);
				// RParent processing, pop until Lparent popped
				else if (inputArr[inputIdx] == ')') {
					do {
						parsedArr[parsedIdx++] = forParsing.pop();
					} while (forParsing.tos() != '(');
					temp = forParsing.pop();
				}
				// operator
				else if (inputArr[inputIdx] == '+' || inputArr[inputIdx] == '-' || inputArr[inputIdx] == '*' || inputArr[inputIdx] == '/') {
					switch (inputArr[inputIdx]) {
					case '+': case '-':
						while (forParsing.tos() != NULL && forParsing.tos() != '(')
							parsedArr[parsedIdx++] = forParsing.pop();
						forParsing.push(inputArr[inputIdx]);
						break;

					case '*': case '/':
						while (forParsing.tos() != '+' && forParsing.tos() != '-' && forParsing.tos() != '(' && forParsing.tos() != NULL)
							parsedArr[parsedIdx++] = forParsing.pop();
						forParsing.push(inputArr[inputIdx]);
						break;
					}
				}
				// ignore Others
				else
					continue;
			}
			// rest of operators popped
			while (forParsing.tos() != NULL)
				parsedArr[parsedIdx++] = forParsing.pop();
			//parsedArr[parsedIdx] = -858993460;
			return;
		}
		//calulate parsedArr (input infix)
		int calcRes()
		{
			int i = 0;
			int result = 0;
			int a, b; 
			int temp = 0;

			// loop until NULL
			for (i = 0; parsedArr[i] != -858993460;i++) {
				// number
				if (parsedArr[i] < 40 || parsedArr[i] > 47) {
					temp = parsedArr[i];
					forCalc.push(temp);
				}
				// operator
				else {
					b = forCalc.pop();
					a = forCalc.pop();
					switch (parsedArr[i]) {
					case '+':
						temp = a + b;
						forCalc.push(temp);
						break;
					case '-':
						temp = a - b;
						forCalc.push(temp);
						break;
					case '*':
						temp = a * b;
						forCalc.push(temp);
						break;
					case '/':
						// div by 0
						if (b == 0)
							exit(0);
						temp = a / b;
						forCalc.push(temp);
						break;
					}
				}
			}
			// result
			result = forCalc.pop();
			return result;
		}
	};

	CEdit edit2;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton17();
	CEdit edit3;
	afx_msg void OnBnClickedButton18();
//	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};


