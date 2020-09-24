#include <stdio.h>//输入输出头文件
#include <windows.h>//WinAPI所需头文件

/*360一键断网最简单的写法源码及注释由<维云斯>QQ群：1074863834提供，允许分享，禁止倒卖*/

//HWND为窗口句柄类型
HWND GetMouseWindow()//对应易语言的：取鼠标所在窗口句柄()
{
	POINT point;
	GetCursorPos(&point);//取鼠标坐标，储存到point中
	return WindowFromPoint(point);//返回鼠标处窗口句柄
}

char* GetTitle(HWND hwnd)//对应易语言超级模块的，取标题()
{
	char title[233];//声明字符数组，即字符串
	GetWindowTextA(GetMouseWindow(), title, 233);//取所取到窗口句柄的标题存储到title中
	return title;//返回标题
}

void Net(HWND h360 ,int recovery)//断网或联网，h360为360列表控件句柄，recovery为断网或恢复，非0恢复，为0断网
{
	PostMessageA(h360,516,2,0);//后台发送鼠标右键按下信息，坐标为左上角(0,0)
	PostMessageA(h360,517,2,0);//后台发送鼠标右键弹起信息，此时完成右键点击
	//菜单点出来后，不必向菜单句柄发送消息，因为360列表接受到的消息会继承到菜单中，但电脑卡的话可能需要加一点延迟 ，或循环判断菜单窗口出现 
	PostMessageA(h360,517,2,0);//后台发送鼠标右键弹起信息，防止调用命令时，鼠标为右键按下状态，此时不加这行代码会导致菜单无法点击
	PostMessageA(h360,256,40,0);//发送一次键盘下方向键的消息
	if(recovery!=0)//如果recovery参数≠0
	{
		PostMessageA(h360,256,40,0);//则多发送一次键盘下方向键的消息，因为恢复网络在禁用网络的下面一格
	}
	PostMessageA(h360,256,13,0);//发送按下回车消息，点击当前菜单选中项
}

int main()
{
	HWND h360;//声明窗口句柄类型变量
	int key = 18;//18为Alt的键代码 
	int keydown = 0 ,recovery = 0;//按键是否按下和断网恢复状态 
	printf("360一键断网免费版由<维云斯>提供,禁止盗卖,更多高端功能见新QQqun:824961090");//作者声明
	printf("\n按Alt一键断网/恢复");
	printf("\n正在检测360流量防火墙...");
	while(1)//以300ms的间隔循环扫描屏幕是否有360流量防火墙
	{
		h360=GetMouseWindow();//取鼠标所在窗口句柄()
		if(strcmp(GetTitle(h360),"List1")==0)//如果鼠标所在窗口标题为List1，strcmp为字符串比较函数，相同返回0
		{
			break;//则此窗口为360列表控件句柄，跳出循环
		}
		Sleep(300);
	}
	printf("\n已检测到360流量防火墙，一键断网已开启！");
	MessageBeep(0);//系统提示音
	while(1)//以循环的方式监视热键
	{
		if(GetAsyncKeyState(key)&&!keydown)//如果设置的键被按下，并且之前为放开状态
		{
			keydown=1;//标志按键按下状态，使得按下键盘只调用一次下面的命令，否则按下键盘会一直调用Net函数
			Net(h360,recovery);//调用断网/联网
			MessageBeep(recovery * 16);//系统提示音，0为开启声音，16为关闭声音，故乘recovery可随断网联网状态提示不同的声音 
			recovery=1-recovery;//如果之前recovery为0，则变为1，为1，则变为0，即如果断网状态则调用联网，如果联网则调用断网
		}
		else if(!GetAsyncKeyState(key))//如果按键放开
		{
			keydown=0;//则标志keydown为放开状态
		}
		Sleep(1);//加入1ms延迟防止CPU占用过高
	}
	return 0;
} 