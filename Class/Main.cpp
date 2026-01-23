#include <iostream>
#include "Player.h"

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	// ÀÎ½ºÅÏ½º/°´Ã¼.
	Player player1;
	player1.Move(5, 2);

	// Èü.
	Player* player2 = new Player("Ronnie");
	player2->Move(3, 1);
	delete player2;
	player2 = nullptr;

	std::cin.get();
}