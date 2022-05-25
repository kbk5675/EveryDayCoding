#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"
#include "ScreenOut.h"
#include "Player.h"

void Game::GameStart()
{
	ScreenOut screenOut;
	player = new Player();

	if (player != nullptr)
		std::cout << "PlAYER 준비완료" << std::endl;

	screenOut.GameLobby(player);
}

/*
	승리 시 100 반환,
	졌을 시 200 반환,
	무승 부 300 반환.
*/
int Game::GameResult(int value)
{
	srand((unsigned int)time(NULL));
	int computer = rand() % 3 + 1;

	if (computer == value)
		return 300;

	switch (computer)
	{
	case ROCK:
		return value > 2 ? 100 : 200;
		break;

	case SCISSORS:
		return value < 2 ? 100 : 200;
		break;

	case PAPER:
		
		return value > 1 ? 100 : 200;
		break;
	}
}


