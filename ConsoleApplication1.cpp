#include "class.h"
#include <conio.h>
#include <string.h>
#include "biankuang.h"
#include "snakemove.h"
#include<Windows.h>
#include<Mmsystem.h>
#pragma comment(lib,"winmm.lib")

int wide=63, high=32;
void HideCursor()			//隐藏光标
{
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}
int main()
{
	int a;
	HideCursor();
	PlaySound(TEXT("D:\\KwDownload\\song\\kuangwang.wav"), NULL, SND_FILENAME | SND_ASYNC);
	while (1)
	{
		biankuang(wide,high);
	    snake(6, wide, high);
		a = MessageBox(NULL, L"游戏结束，您已死亡，是否选择继续？", L"游戏结束", MB_OKCANCEL);
		if (a == IDOK)
		{
			system("cls");
		}
		else
		{
			break;
		}
	}
}
