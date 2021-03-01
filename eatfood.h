#pragma once
#include "class.h"
#include <iostream>
int food_x = 0, food_y = 0;
int eatfood(int eat,int wide,int high, vector<danyuan>::iterator it, vector<danyuan> v)
{
	food *a;
	while (1)
	{
		a = new food(wide, high);
		for (it = v.begin(); it<v.end()-1;)
		{
			if (a->x==it->x&&a->y==it->y)
			{
				break;
			}
			it++;
		}
		if (it==v.end()-1)
		{
			break;
		}
	}
	it = v.begin();
	if (eat == 0)
	{
		a->put();
		food_x = a->x;
		food_y = a->y;
		eat = 1;
	}
	if (food_x == it->x && food_y ==it->y)
	{
		eat = 0;
	}
	return eat;
}
