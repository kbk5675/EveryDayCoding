#include <iostream>
#include <windows.h>
#include <iomanip>
#include "Game.h"

using namespace std;

Game::Game() : count_Round(0), count_FoodMove(0)
{
	// 보드 초기화
	setBoard();
	// 보드에 객체 초기화
	setObject();
}

Game::~Game()
{
	delete h;
	delete m;
	delete f;
}

void Game::update()
{
		while(1)
		{
			cout << "    방향키를 조절하여 열매를 먹으세요!" << endl;
			screenOut();
			_board[h->getY()][h->getX()] = '-';		
			h->move();
			_board[m->getY()][m->getX()] = '-';
			m->move();
			moveFood();
			setObject();

			// 몬스터가 플레이어를 잡게 되는 엔딩
			if (h->getX() == m->getX() && h->getY() == m->getY())
			{
				system("cls");
				_board[m->getY()][m->getX()] = m->getShape();
				screenOut();
				cout << "\n ** Monster Win! ** " << endl;
				break;
			}
			// 플레이어가 음식을 먹게 되는 엔딩
			if (h->getX() == f->getX() && h->getY() == f->getY())
			{
				system("cls");
				_board[h->getY()][h->getX()] = h->getShape();
				screenOut();
				cout << "\n ** Human Win! ** " << endl;
				break;
			}
			// 몬스터가 음식을 먹게 되는 엔딩
			if (m->getX() == f->getX() && m->getY() == f->getY())
			{
				system("cls");
				_board[m->getY()][m->getX()] = m->getShape();
				screenOut();
				cout << "\n ** Monster Win! ** " << endl;
				break;
			}

			system("cls");

		}
}

void Game::setBoard()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
			_board[i][j] = '-';
	}
}

void Game::setObject()
{
	_board[h->getY()][h->getX()] = h->getShape();
	_board[m->getY()][m->getX()] = m->getShape();
	_board[f->getY()][f->getX()] = f->getShape();
}

void Game::screenOut()
{
	for (int i = 0; i < 10; i++)
	{
		
		for (int j = 0; j < 20; j++)
		{
			
			cout << setw(2) << _board[i][j];
		}
		
		cout << endl;
	}
}

void Game::moveFood()
{
	srand((unsigned int)time(NULL));
	int n = rand();

	count_Round++;

	if (n % 2 == 0)
	{	
		if (count_FoodMove < 3)
		{
			count_FoodMove++;
			_board[f->getY()][f->getX()] = '-';
			f->move();
		}
	}
	if (count_Round >= 3 && count_FoodMove < 2)
	{
		count_FoodMove++;
		_board[f->getY()][f->getX()] = '-';
		f->move();
	}
		
	if (count_Round == 5)
	{
		count_Round = 0;
		count_FoodMove = 0;
	}
}
