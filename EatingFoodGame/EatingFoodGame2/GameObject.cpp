#include <iostream>
#include<windows.h>
#include "GameObject.h"

using namespace std;


void Human::move()
{
	char key;
	cout << "왼쪽(a), 위(w), 아래(s), 오른쪽(d) 입력 >> ";
	cin >> key;
	
	// 왼쪽
	if (key == 'a')
	{
		if (x != 0)
			x -= distance;
	}
	// 오른쪽
	if (key == 'd')
	{
		if (x != 19)
		{
			x += distance;
		}
	}

	// 위
	if (key == 'w')
	{
		if (y != 0)
		{
			y -= distance;
		}
	}

	// 아래
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
	case 0:				// 왼쪽
		if (x != 0)
			x -= distance;
		break;
	case 1:		
		if (y != 0)
			y -= distance;
		break;
	case 2:				// 아래
		if (y != 9)
			y += distance;
		if (y == 10)
			y = 9;
		break;
	case 3:				// 오른쪽
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
	case 0:				// 왼쪽
		if (x != 0)
			x -= distance;
		break;
	case 1:
		if (y != 0)
			y -= distance;
		break;
	case 2:				// 아래
		if (y != 9)
			y += distance;
		if (y == 10)
			y = 9;
		break;
	case 3:				// 오른쪽
		if (x != 19)
			x += distance;
		if (x == 20)
			x = 19;
		break;
	}
}
