#pragma once

enum {
	ROCK = 1,
	SCISSORS,
	PAPER,
};

class Player;

class Game
{
public:
	Game() : player(nullptr)
	{

	}

	~Game()
	{
		if (player != nullptr)
		{
			player = nullptr;
			delete player;
		}
	}

	void GameStart();
	int GameResult(int input);

private:
	Player* player;
	
};

