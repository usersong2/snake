#pragma once
#include <stdio.h>
#include <vector>
#include <wtypes.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#define random(x) rand()%(x)
using namespace std;
class danyuan
{
public:
	int x, y;
	char z;
	void bianhua()
	{
		HANDLE hOut;
		COORD pos = { x,y };
		hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hOut, pos);
		printf("*");
	}
	void cachu()
	{
		HANDLE hOut;
		COORD pos = { x,y };
		hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hOut, pos);
		printf(" ");
	}
	danyuan(int in_x, int in_y, char in_z)
	{
		x = in_x;
		y = in_y;
		z = in_z;
	}
};
class food :public danyuan
{
public:
	int food_wide;
	int food_high;
	food(int wide,int high):danyuan(0,0,'#')
	{
		food_wide = wide;
		food_high = high;
		srand((int)time(0));
		x = random(food_wide-21)+1;
		y = random(food_high-4)+2;
	}
	void put()
	{
		HANDLE hOut;
		COORD pos = { x,y };
		hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hOut, pos);
		printf("#");
	}
};