#include <iostream>
#include "Game.h"
#include "GameObject.h"
using namespace std;

int main()
{
	Game* g = new Game();
	g->update();

	delete g;

	return 0;
}