#include "Game.h"

#ifdef _DEBUG
	#define _CRTDBG_MAP_ALLOC
	#include <stdlib.h>
	#include <crtdbg.h>
#endif

int main(int argc, char **argv)
{
	// Scoping brackets so that pGame will fall out of scope before
	//		CrtDumpMemoryLeaks runs
	{
		Game *pGame = new Game(1280, 720, false, "Game");
		pGame->RunGame();
		delete pGame;
	}

#ifdef _DEBUG
	_CrtDumpMemoryLeaks();
#endif

	return 0;
};