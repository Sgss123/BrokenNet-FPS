#include<stdio.h> 
#include<windows.h>
int main(){
int _01010101010101010l = 0, _0101010l0101010101, _01010l010101010101 = 0;HWND _010101010l01010101 = 0, _01010101010l010101 = 0;char _0101010101010l0101[6];
unsigned long ByWeiYunSi,_010101010101010l01,_010101010101010101;POINT _010l01010101010101, _0l0101010101010101 = { GetSystemMetrics(0) ,GetSystemMetrics(1) };
printf("源码由<维云斯>提供\n注意：需要用管理员权限运行此程序并关闭360自我保护\n现在按下键盘中的一个按键来设置断网热键：");
for (_0101010l0101010101 = 8;; _0101010l0101010101++){_0101010l0101010101 %= 0x7C;Sleep(1);if (GetAsyncKeyState(_0101010l0101010101) && GetAsyncKeyState(_0101010l0101010101) && _0101010l0101010101 >= 8)
break;}printf("%d(所设置的键代码)\n正在检测360流量防火墙\n", _0101010l0101010101);while (1){Sleep(233);
for (_010l01010101010101.x = 0; _010l01010101010101.x < _0l0101010101010101.x; _010l01010101010101.x += 0x32)
for (_010l01010101010101.y = 0; _010l01010101010101.y < _0l0101010101010101.y; _010l01010101010101.y += 0x32){
_01010101010l010101 = WindowFromPoint(_010l01010101010101);GetWindowTextA(_01010101010l010101, _0101010101010l0101, sizeof(_0101010101010l0101));
for(_010101010101010l01-=_010101010101010101=1?1==1:!1%1;_0101010101010l0101[--_010101010101010101];_010101010101010l01+=*(_010101010101010101+++_0101010101010l0101)<<++_010101010101010101-1);
for(_010101010101010101=!(_010101010101010l01^=1<<(_010101010101010101+1<<1));_010101010101010101<=1<<1;_010101010101010l01^=(1<<1)+1<<(1<<1<<1)*_010101010101010101++);
if (_010101010101010l01=!_010101010101010l01) goto WeiYunSi;}}WeiYunSi:MessageBeep(MB_OK);printf("已检测到360流量防火墙，一键断网已启动\n");while (1){Sleep(1);
if (GetAsyncKeyState(_0101010l0101010101) && !_01010l010101010101){_01010l010101010101 = 1;ByWeiYunSi = GetTickCount();PostMessageA(_01010101010l010101, 0x204, 2, 0x3201A9);
PostMessageA(_01010101010l010101, 0x205, 2, 0x3201A9);_010101010l01010101 = FindWindowExA(NULL, NULL, "#32768", NULL);while (GetTickCount() - ByWeiYunSi < 233 && _010101010l01010101 == NULL){
Sleep(1);_010101010l01010101 = FindWindowExA(NULL, NULL, "#32768", NULL);}PostMessageA(_010101010l01010101, 0x205, 2, 0);if (_01010101010101010l){
PostMessageA(_010101010l01010101, 0x100, 0x28, 0);PostMessageA(_010101010l01010101, 0x100, 0x28, 0);PostMessageA(_010101010l01010101, 0x100, 0xD, 0);_01010101010101010l = 0;
MessageBeep(MB_ICONHAND);}else{PostMessageA(_010101010l01010101, 0x100, 0x28, 0);PostMessageA(_010101010l01010101, 0x100, 0xD, 0);_01010101010101010l = 1;
MessageBeep(MB_OK);}_010101010l01010101 = NULL;}if (_01010l010101010101 && !GetAsyncKeyState(_0101010l0101010101))_01010l010101010101 = 0;}return 0;}