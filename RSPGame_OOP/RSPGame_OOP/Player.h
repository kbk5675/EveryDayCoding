#pragma once

class Player
{
public:
	Player();
	~Player();

	void ShowScore();
	void SetScore(int value);


private:
	int _win;
	int _lose;
	int _draw;
};

