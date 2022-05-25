#include <iostream>
#include "ScreenOut.h"
#include "Player.h"
#include "Game.h"

void ScreenOut::GameLobby(Player* player1)
{
	int input = 0;

	std::cout << "가위바위보 게임" << std::endl;

	while (true)
	{
		
		std::cout << "\n1) 게임 시작" << std::endl;
		std::cout << "2) 전적 보기" << std::endl;
		std::cin >> input;

		switch (input)
		{
		case GAMESTART:
			GameScreen(player1);
			break;
		case SHOWSCORE:
			ShowScore(player1);
			break;
		}
		input = 0;
	}
}

void ScreenOut::GameScreen(Player* player1)
{
	int input = 0;
	int result = 0;
	int computer = 0;

	system("cls");
	std::cout << "가위바위보 게임을 시작합니다. 1)가위, 2)바위, 3)보 중에서 입력하세요." << std::endl;
	std::cin >> input;

	result = game->GameResult(input);

	switch (result)
	{
	case 100:
		std::cout << "당신 : 바위" << std::endl;
		player1->SetScore(100);
		std::cout << " *** 당신이 이겼습니다. ***" << std::endl;
		break;
	case 200:
		std::cout << "당신 : 가위"<< std::endl;
		player1->SetScore(200);
		std::cout << " *** 당신이 졌습니다. ***" << std::endl;
		break;
	case 300:
		std::cout << "당신 : 보"<< std::endl;
		player1->SetScore(300);
		std::cout << " ***당신은 비겼습니다. ***" << std::endl;
		break;
	}
}

void ScreenOut::ShowScore(Player* player1)
{
	system("cls");
	player1->ShowScore();
}

