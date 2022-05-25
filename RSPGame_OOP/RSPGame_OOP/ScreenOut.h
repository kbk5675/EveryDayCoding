#pragma once

enum Lobby {
	GAMESTART = 1,
	SHOWSCORE
};

class Player;
class Game;

class ScreenOut
{
public:
	void GameLobby(Player* player1);
	void GameScreen(Player* player1);
	void ShowScore(Player* player1);

private:
	Game* game;
};

