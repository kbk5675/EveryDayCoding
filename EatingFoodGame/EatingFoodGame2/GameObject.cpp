#include <iostream>
#include<windows.h>
#include "GameObject.h"

using namespace std;


void Human::move()
{
	char key;
	cout << "����(a), ��(w), �Ʒ�(s), ������(d) �Է� >> ";
	cin >> key;
	
	// ����
	if (key == 'a')
	{
		if (x != 0)
			x -= distance;
	}
	// ������
	if (key == 'd')
	{
		if (x != 19)
		{
			x += distance;
		}
	}

	// ��
	if (key == 'w')
	{
		if (y != 0)
		{
			y -= distance;
		}
	}

	// �Ʒ�
	if (key == 's')
	{

		if (y != 9)
		{
			y += distance;
		}
	}
}

void Monster::move()
{
	int n = rand() % 4;


	switch (n)
	{
	case 0:				// ����
		if (x != 0)
			x -= distance;
		break;
	case 1:		
		if (y != 0)
			y -= distance;
		break;
	case 2:				// �Ʒ�
		if (y != 9)
			y += distance;
		if (y == 10)
			y = 9;
		break;
	case 3:				// ������
		if (x != 19)
			x += distance;
		if (x == 20)
			x = 19;
		break;
	}



}

void Food::move()
{
	int n = rand() % 4;

	switch (n)
	{
	case 0:				// ����
		if (x != 0)
			x -= distance;
		break;
	case 1:
		if (y != 0)
			y -= distance;
		break;
	case 2:				// �Ʒ�
		if (y != 9)
			y += distance;
		if (y == 10)
			y = 9;
		break;
	case 3:				// ������
		if (x != 19)
			x += distance;
		if (x == 20)
			x = 19;
		break;
	}
}
