#pragma once
#include <stdio.h>
#include <vector>
#include <wtypes.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>


void modeset(int w, int h) {
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD size = { w, h };
	SetConsoleScreenBufferSize(hOut, size);
	SMALL_RECT rc = { 1,1, w, h };
	SetConsoleWindowInfo(hOut, true, &rc);
	system("cls");
	return;
}
void fenshuxianshi(int fenshu,int wide,int high)
{
	int i;
	i = (fenshu / 50)+1;
	HANDLE hOut;
	COORD pos = { wide - 10,high - 18 };
	COORD pos2= { wide - 10,high - 30 };
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
	cout << "·ÖÊý£º" << fenshu << endl;
	SetConsoleCursorPosition(hOut, pos2);
	cout << "¹Ø¿¨£º" << i<< endl;
}
void biankuang(int wide,int high)
{
	int  j;
	modeset(wide,high);
	for (j = 0; j <wide-1; j++)
	{
		HANDLE hOut;
		COORD pos = {j,1};
		COORD pos2 = { j,high-2 };
		hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hOut, pos);
		printf("-");
		SetConsoleCursorPosition(hOut, pos2);
		printf("-");
	}
	printf("\n");

	for (j = 1; j < high-1; j++)
	{
		HANDLE hOut;
		COORD pos = {wide-20,j };
		hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hOut, pos);
		printf("|\n");
	}
	for (j = 1; j < high-1; j++)
	{
		HANDLE hOut;
		COORD pos = {0,j };
		hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hOut, pos);
		printf("|\n");
	}
}
