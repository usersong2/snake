#pragma once
#include <iostream>

int death(int wide, int high, int head_x, int head_y, vector<danyuan>::iterator it, vector<danyuan> v)
{
//�Բ���
	for (it = v.begin() + 1; it != v.end(); it++)
	{
		if (it->x == head_x && it->y == head_y)
		{
			system("cls");
			cout << "��Ϸʧ��" << endl;
			return 0;
		}
	}
//ײǽ��
	if (head_x <= 0 || head_x >= wide - 20 || head_y <= 1 || head_y >= high - 2)
	{
		system("cls");
		printf("��Ϸʧ��\n");
		return 0;
	}
	else
		return 1;
}
