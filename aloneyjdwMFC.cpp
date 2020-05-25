
// MFCApplication1Dlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"
#include "afxdialogex.h"
#include "afxinet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif

void Close360(void*);
void CountSound(void*);
void START();
// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

LPCTSTR keytoname(int key)
{
	LPCTSTR name;
	const char key92[1] = { 92 };
	switch (key)
	{
	case 16:name = _T("Shift"); break;
	case 17:name = _T("Ctrl"); break;
	case 18:name = _T("Alt"); break;
	case 48:name = _T("0"); break;
	case 49:name = _T("1"); break;
	case 50:name = _T("2"); break;
	case 51:name = _T("3"); break;
	case 52:name = _T("4"); break;
	case 53:name = _T("5"); break;
	case 54:name = _T("6"); break;
	case 55:name = _T("7"); break;
	case 56:name = _T("8"); break;
	case 57:name = _T("9"); break;
	case 65:name = _T("A"); break;
	case 66:name = _T("B"); break;
	case 67:name = _T("C"); break;
	case 68:name = _T("D"); break;
	case 69:name = _T("E"); break;
	case 70:name = _T("F"); break;
	case 71:name = _T("G"); break;
	case 72:name = _T("H"); break;
	case 73:name = _T("I"); break;
	case 74:name = _T("J"); break;
	case 75:name = _T("K"); break;
	case 76:name = _T("L"); break;
	case 77:name = _T("M"); break;
	case 78:name = _T("N"); break;
	case 79:name = _T("O"); break;
	case 80:name = _T("P"); break;
	case 81:name = _T("Q"); break;
	case 82:name = _T("R"); break;
	case 83:name = _T("S"); break;
	case 84:name = _T("T"); break;
	case 85:name = _T("U"); break;
	case 86:name = _T("V"); break;
	case 87:name = _T("W"); break;
	case 88:name = _T("X"); break;
	case 89:name = _T("Y"); break;
	case 90:name = _T("Z"); break;
	case 112:name = _T("F1"); break;
	case 113:name = _T("F2"); break;
	case 114:name = _T("F3"); break;
	case 115:name = _T("F4"); break;
	case 116:name = _T("F5"); break;
	case 117:name = _T("F6"); break;
	case 118:name = _T("F7"); break;
	case 119:name = _T("F8"); break;
	case 120:name = _T("F9"); break;
	case 121:name = _T("F10"); break;
	case 122:name = _T("F11"); break;
	case 123:name = _T("F12"); break;
	case 13:name = _T("Enter"); break;
	case 19:name = _T("Pause"); break;
	case 20:name = _T("Caps Lock"); break;
	case 144:name = _T("Num Lock"); break;
	case 145:name = _T("Scroll Lock"); break;
	case 27:name = _T("Esc"); break;
	case 33:name = _T("Page Up"); break;
	case 34:name = _T("Page Down"); break;
	case 36:name = _T("Home"); break;
	case 35:name = _T("End"); break;
	case 38:name = _T("Up"); break;
	case 40:name = _T("Down"); break;
	case 37:name = _T("Left"); break;
	case 39:name = _T("Right"); break;
	case 45:name = _T("Insert"); break;
	case 32:name = _T("Space"); break;
	case 46:name = _T("Delete"); break;
	case 187:name = _T("="); break;
	case 186:name = _T(";"); break;
	case 188:name = _T(","); break;
	case 189:name = _T("-"); break;
	case 190:name = _T("."); break;
	case 191:name = _T("."); break;
	case 192:name = _T("`"); break;
	case 219:name = _T("["); break;
	case 221:name = _T("]"); break;
	case 8:name = _T("Back Space"); break;
	case 91:name = _T("Win"); break;
	case 9:name = _T("Tab"); break;
	default:name = _T(""); break;
	}
	return name;
}

class h360 {
private:
	HWND ID, IDK, IDF;
	HANDLE time;
	RECT nowRect, oldRect;
	MSG CurrMsg;
	double rect;
public:
	bool state = false, stateL = false;
	h360(HWND ID360) :ID(ID360)
	{
		RECT rect360;
		CString aaa;
		IDK = FindWindowExA(ID360, FindWindowExA(ID360, NULL, NULL, NULL), NULL, NULL);
		IDF = GetAncestor(ID, 3);
		GetWindowRect(IDF, &rect360);
		oldRect = rect360;
		rect = (rect360.right - rect360.left) / 850.0;
	}

	void Broken()
	{
		DWORD t = GetTickCount();
		HWND ID360 = NULL;
		PostMessageA(ID, 516, 2, 425 + 50 * 65536);
		PostMessageA(ID, 517, 2, 425 + 50 * 65536);
		ID360 = FindWindowExA(NULL, NULL, "#32768", NULL);
		while (GetTickCount() - t < 150 && ID360 == NULL)
		{
			Sleep(1);
			ID360 = FindWindowExA(NULL, NULL, "#32768", NULL);
		}
		PostMessageA(ID360, 517, 2, 0);
		if (!state)
		{
			PostMessageA(ID360, 256, 40, 0);
			PostMessageA(ID360, 256, 13, 0);
			state = true;
				_beginthread(CountSound, 0, NULL);
				MessageBeep(MB_OK);
		}
		else
		{
			PostMessageA(ID360, 256, 40, 0);
			PostMessageA(ID360, 256, 40, 0);
			PostMessageA(ID360, 256, 13, 0);
			state = false;
				MessageBeep(MB_ICONHAND);
		}
	}

	HWND getIDF()
	{
		return IDF;
	}
};

h360 *p360 = NULL;
POINT screen = { ::GetSystemMetrics(0) ,::GetSystemMetrics(1) };
bool foucs = false;
int Key = 18;
HWND hEdit;

void CountSound(void*)
{
	DWORD t;
	for (int i = 0; (p360 == NULL ? false : p360->state); i++)
	{
		t = GetTickCount();
		MessageBeep(MB_OK);
		while (GetTickCount() - t < 985)
		{
			Sleep(15);
			if (!(p360 == NULL ? false : p360->state))
				return;
		}
	}
}

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
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


// CMFCApplication1Dlg 对话框



CMFCApplication1Dlg::CMFCApplication1Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATION1_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCApplication1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
//	ON_EN_CHANGE(IDC_EDIT1, &CMFCApplication1Dlg::OnEnChangeEdit1)
ON_EN_SETFOCUS(IDC_EDIT1, &CMFCApplication1Dlg::OnEnSetfocusEdit1)
ON_EN_KILLFOCUS(IDC_EDIT1, &CMFCApplication1Dlg::OnEnKillfocusEdit1)
END_MESSAGE_MAP()


// CMFCApplication1Dlg 消息处理程序

BOOL CMFCApplication1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	//ShowWindow(SW_MINIMIZE);

	// TODO: 在此添加额外的初始化代码
	hEdit = ((CEdit *)GetDlgItem(IDC_EDIT1))->m_hWnd;
	((CEdit *)GetDlgItem(IDC_EDIT1))->SetWindowText(_T("Alt"));
	START();
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMFCApplication1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCApplication1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCApplication1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


HWND FindPointWindow(char* windowtitle, int p = 50)
{
	POINT point;
	char title[233];
	HWND pointhwnd;
	for (point.x = p; point.x < screen.x; point.x += p)
		for (point.y = p; point.y < screen.y; point.y += p)
		{
			pointhwnd = WindowFromPoint(point);
			GetWindowTextA(pointhwnd, title, 233);
			if (strcmp(title, windowtitle) == 0)
			{
				return pointhwnd;
			}
		}
	return NULL;
}

void Check360(void*)
{
	HWND hwnd360;
	char title[233];
	while (1)
	{
		hwnd360 = FindPointWindow("List1");
		GetWindowText(GetAncestor(hwnd360, 3), title, 233);
		if (hwnd360 != NULL && strcmp(title, "360流量防火墙") == 0)
		{
			p360 = new h360(hwnd360);
			_beginthread(Close360, 0, NULL);
			MessageBeep(0);
			break;
		}
		Sleep(233);
	}
}

void Close360(void*)
{
	while (IsWindow(p360->getIDF()))
		Sleep(233);
	delete p360;
	p360 = NULL;
	_beginthread(Check360, 0, NULL);
}

BOOL CMFCApplication1Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	LPCTSTR name = _T("");
	if (pMsg->message == WM_KEYDOWN)
	{
		if (foucs)
		{
			Key = pMsg->wParam;
			name = keytoname(Key);
			((CEdit *)GetDlgItem(IDC_EDIT1))->SetWindowText(name);
		}
	}
	if (pMsg->message == WM_MOUSEWHEEL)
	{
		if (foucs)
		{
			name = _T("鼠标滚轮点击");
			Key = 4;
			((CEdit *)GetDlgItem(IDC_EDIT1))->SetWindowText(name);
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}

void AltKey(void*)
{
	while (foucs)
	{
		if (GetAsyncKeyState(18) != 0)
		{
			Key = 18;
			SetWindowTextA(hEdit, "Alt");
		}
		Sleep(5);
	}
}

void CMFCApplication1Dlg::OnEnSetfocusEdit1()
{
	Sleep(10);
	foucs = 1;
	_beginthread(AltKey, 0, NULL);
}

void CMFCApplication1Dlg::OnEnKillfocusEdit1()
{
	foucs = 0;
}

void BrokenNet(void*)
{
	if (p360 != NULL)
	{
		p360->Broken();
	}
}

void KeyMonitor(void*)
{
	bool keydown = false;
		GetAsyncKeyState(Key);
	while (1) {
		for (int i = 0; i <= 5; i++) {
			if (GetAsyncKeyState(Key) != 0 && !keydown && !foucs)
			{
				keydown = true;
				_beginthread(BrokenNet, 0, NULL);
			}
			if (keydown)
			{
				if (GetAsyncKeyState(Key) == 0)
					keydown = false;
			}
			Sleep(1);
		}
	}
}

void START()
{
	_beginthread(KeyMonitor, 0, NULL);
	_beginthread(Check360, 0, NULL);
}