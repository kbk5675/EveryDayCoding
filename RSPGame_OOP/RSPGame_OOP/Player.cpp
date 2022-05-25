#include "Player.h"
#include <iostream>

Player::Player(): _win(0), _lose(0), _draw(0)
{
	std::cout << "Player()" << std::endl;
}

Player::~Player()
{
	std::cout << "~Player()" << std::endl;
}

void Player::ShowScore()
{
	std::cout << "\n***** SCORE *****" << std::endl;
	std::cout << "\n    WIN  : " << _win << std::endl;
	std::cout << "    LOSE : " << _lose << std::endl;
	std::cout << "    DRAW : " << _draw << "\n" <<std::endl;
	std::cout << "*****************\n" << std::endl;
 }

void Player::SetScore(int value)
{
	switch (value)
	{
	case 100:
		++_win;
		break;

	case 200:
		++_lose;
		break;

	case 300:
		++_draw;
		break;
	}
}

