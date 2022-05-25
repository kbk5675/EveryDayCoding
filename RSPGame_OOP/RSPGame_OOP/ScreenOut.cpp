#include <iostream>
#include "ScreenOut.h"
#include "Player.h"
#include "Game.h"

void ScreenOut::GameLobby(Player* player1)
{
	int input = 0;

	std::cout << "���������� ����" << std::endl;

	while (true)
	{
		
		std::cout << "\n1) ���� ����" << std::endl;
		std::cout << "2) ���� ����" << std::endl;
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
	std::cout << "���������� ������ �����մϴ�. 1)����, 2)����, 3)�� �߿��� �Է��ϼ���." << std::endl;
	std::cin >> input;

	result = game->GameResult(input);

	switch (result)
	{
	case 100:
		std::cout << "��� : ����" << std::endl;
		player1->SetScore(100);
		std::cout << " *** ����� �̰���ϴ�. ***" << std::endl;
		break;
	case 200:
		std::cout << "��� : ����"<< std::endl;
		player1->SetScore(200);
		std::cout << " *** ����� �����ϴ�. ***" << std::endl;
		break;
	case 300:
		std::cout << "��� : ��"<< std::endl;
		player1->SetScore(300);
		std::cout << " ***����� �����ϴ�. ***" << std::endl;
		break;
	}
}

void ScreenOut::ShowScore(Player* player1)
{
	system("cls");
	player1->ShowScore();
}

