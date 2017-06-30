// Dance_2017_A.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Map.h"
#include "GameManager.h"
#include "Arrow.h"
#include "Player.h"
#include <conio.h>
#include <time.h>
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define TECLA_ARRIBA       72 
#define TECLA_ABAJO        80
#define TECLA_IZQUIERDA    75
#define TECLA_DERECHA      77

int main()
{
	GameManager gm;
	gm.GetPlayer().GetScore();
	gm.GetPlayer().AddScore(100);
	gm.GetPlayer().GetScore();


	/* seteando la posicion de las flechas */
	// up
	gm.SetArrowsPosition(gm.GetArrow("up"), 0, 0, 'x');
	gm.SetArrowsPosition(gm.GetArrow("up"), 0, 1, 'y');
	// down
	gm.SetArrowsPosition(gm.GetArrow("down"), 1, 0, 'x');
	gm.SetArrowsPosition(gm.GetArrow("down"), 1, 1, 'y');
	// left
	gm.SetArrowsPosition(gm.GetArrow("left"), 2, 0, 'x');
	gm.SetArrowsPosition(gm.GetArrow("left"), 2, 1, 'y');
	// right
	gm.SetArrowsPosition(gm.GetArrow("right"), 3, 0, 'x');
	gm.SetArrowsPosition(gm.GetArrow("right"), 3, 1, 'y');

	int random;
	while (1)
	{
		gm.GetArrow("up")->MoveCursorToXY(12, 0);
		std::cout << gm.GetPlayer().GetScore();
		//Entrar al juego
		char tecla;
		if (_kbhit())
		{
			_flushall();
			tecla = _getch();

			switch (tecla)
			{
			case 72:
				if (gm.GetArrow("up")->getX() == 17)
				{
					gm.GetArrow("up")->SetStatus(false);
					gm.GetArrow("up")->ReuseArrow();
					gm.SetArrowsPosition(gm.GetArrow("up"), 0, 0, 'x');
					gm.SetArrowsPosition(gm.GetArrow("up"), 0, 1, 'y');
					gm.GetPlayer().AddScore(100);

				}

				break;
			case 80:
				if (gm.GetArrow("down")->getX() == 17)
				{
					gm.GetArrow("down")->SetStatus(false);
					gm.GetArrow("down")->ReuseArrow();
					gm.SetArrowsPosition(gm.GetArrow("down"), 1, 0, 'x');
					gm.SetArrowsPosition(gm.GetArrow("down"), 1, 1, 'y');
					gm.GetPlayer().AddScore(100);

				}

				break;
			case 75:
				if (gm.GetArrow("left")->getX() == 17)
				{
					gm.GetArrow("left")->SetStatus(false);
					gm.GetArrow("left")->ReuseArrow();
					gm.SetArrowsPosition(gm.GetArrow("left"), 2, 0, 'x');
					gm.SetArrowsPosition(gm.GetArrow("left"), 2, 1, 'y');
					gm.GetPlayer().AddScore(100);

				}

				break;
			case 77:
				if (gm.GetArrow("right")->getX() == 17)
				{
					gm.GetArrow("right")->SetStatus(false);
					gm.GetArrow("right")->ReuseArrow();
					gm.SetArrowsPosition(gm.GetArrow("right"), 3, 0, 'x');
					gm.SetArrowsPosition(gm.GetArrow("right"), 3, 1, 'y');
					gm.GetPlayer().AddScore(100);

				}

				break;
			}
		}
		srand(time(NULL));
		random = rand() % 4;
		if (rand() % 4) {
			if (random == 0)
			{
				gm.GetArrow("up")->SetStatus(true);
			}
			else if (random == 1)
			{
				gm.GetArrow("down")->SetStatus(true);
			}
			else if (random == 2)
			{
				gm.GetArrow("right")->SetStatus(true);
			}
			else if (random == 3)
			{
				gm.GetArrow("left")->SetStatus(true);

			}
		}
		if (gm.GetArrow("up")->getX() == 18)
		{
			gm.GetArrow("up")->SetStatus(false);
			gm.GetArrow("up")->ReuseArrow();
			gm.SetArrowsPosition(gm.GetArrow("up"), 0, 0, 'x');
			gm.SetArrowsPosition(gm.GetArrow("up"), 0, 1, 'y');
		}
		else if(gm.GetArrow("up")->GetStatus() == true){
			gm.GetArrow("up")->MoveArrowDown();
		}

		if (gm.GetArrow("down")->getX() == 18)
		{
			gm.GetArrow("down")->SetStatus(false);
			gm.GetArrow("down")->ReuseArrow();
			gm.SetArrowsPosition(gm.GetArrow("down"), 1, 0, 'x');
			gm.SetArrowsPosition(gm.GetArrow("down"), 1, 1, 'y');
		}
		else if (gm.GetArrow("down")->GetStatus() == true) {
			gm.GetArrow("down")->MoveArrowDown();
		}

		if (gm.GetArrow("left")->getX() == 18)
		{
			gm.GetArrow("left")->SetStatus(false);
			gm.GetArrow("left")->ReuseArrow();
			gm.SetArrowsPosition(gm.GetArrow("left"), 2, 0, 'x');
			gm.SetArrowsPosition(gm.GetArrow("left"), 2, 1, 'y');
		}
		else if (gm.GetArrow("left")->GetStatus() == true) {
			gm.GetArrow("left")->MoveArrowDown();
		}

		if (gm.GetArrow("right")->getX() == 18)
		{
			gm.GetArrow("right")->SetStatus(false);
			gm.GetArrow("right")->ReuseArrow();
			gm.SetArrowsPosition(gm.GetArrow("right"), 3, 0, 'x');
			gm.SetArrowsPosition(gm.GetArrow("right"), 3, 1, 'y');
		}
		else if (gm.GetArrow("right")->GetStatus() == true) {
			gm.GetArrow("right")->MoveArrowDown();
		}
		Sleep(150);
	}
    return 0;
}

