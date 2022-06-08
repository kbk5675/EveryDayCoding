#pragma once
#include "GameObject.h"

class Game
{
public:
	Game();

	virtual ~Game();


	void update();
	void setBoard();
	void setObject();
	void screenOut();
	void moveFood();

public:
	int count_Round = 0;
	int count_FoodMove = 0;

	Human* h = new Human(0, 0, 1);
	Monster* m = new Monster(8, 4, 2);
	Food* f = new Food(13, 7, 1);
	char _board[10][20] = { 0, };
};

