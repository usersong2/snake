#pragma once
#include "class.h"
#include <conio.h>
#include <string.h>
#include "biankuang.h"
#include "wall_death.h"
#include "eatfood.h"

int snake(int legth,int wide,int high)
{
	vector<danyuan> v;
	int fenshu=0;
	char txt,before;
	int i,j,back,head_x,head_y;
	int eat = 0,time=500;
	j = 0;
	for (i = 0; i < legth; i++)
	{
		v.push_back(danyuan(10, 20 + i, '*'));
	}
	vector<danyuan>::iterator it;
	txt = 'w';
	while (1)
	{
		before = txt;
		if (_kbhit())
		{
			txt = _getch();
		}
		if (txt != 'w' && txt != 's' && txt != 'a' && txt != 'd')
		{
			system("pause>null");
			txt = before;
		}
		for (it = v.begin(); it != v.end(); it++)
		{
			it->bianhua();
			if (it == v.end() - 1)
			{
				it->cachu();
			}
		}


		for (it = v.end() - 1; it >= v.begin();)
		{
			if (it == v.begin() && txt == 'w')
			{
				it->y = it->y - 1;
				break;
			}
			else if (it == v.begin() && txt == 'd')
			{
				it->x = it->x + 1;
				break;
			}
			else if (it == v.begin() && txt == 'a')
			{
				it->x = it->x - 1;
				break;
			}
			else if (it == v.begin() && txt == 's')
			{
				it->y = it->y + 1;
				break;
			}
			else
			{
				it->x = (it - 1)->x;
				it->y = (it - 1)->y;
				it--;
			}
		}
		head_x = it->x;
		head_y = it->y;
		back=death(wide, high, head_x, head_y,it,v);
		if (back == 0)
		{
			return 0;
		}
		eat = eatfood(eat,wide,high,it,v);
		it = v.end() - 1;
		if (eat == 0)
		{
			v.push_back(danyuan(it->x, it->y, '*'));
			fenshu=fenshu+ 10;
			if(time>100)
			time = time - 10;
		}
		fenshuxianshi(fenshu, wide, high);
		Sleep(time);
	}
}