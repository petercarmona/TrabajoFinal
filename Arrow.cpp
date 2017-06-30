#include "stdafx.h"
#include "Arrow.h"
#include <iostream>

Arrow::Arrow(char simbol)
{
	_isAlive = false;
	_simbol = simbol;
}

void Arrow::ShowObject() // polymorfismo
{
	MoveCursorToXY(_y, _x);
	std::cout << _simbol;
}

void Arrow::MoveArrowDown() 
{
	MoveCursorToXY(_y, _x);
	std::cout << " ";
	_x++;
	ShowObject();
}
void Arrow::ReuseArrow()
{
	if (_x == 17) {
		MoveCursorToXY(_y, _x);
		std::cout << "H";
		MoveCursorToXY(_y, _x - 1);
		std::cout << " ";
	}
	else
	{
		//Eliminar rastro
		MoveCursorToXY(_y, _x - 1);
		std::cout << "H";
		MoveCursorToXY(_y, _x);
		std::cout << " ";
	}
}
Arrow::~Arrow() // en desuso
{
	MoveCursorToXY(_y, _x-1);
	std::cout << "H";
	MoveCursorToXY(_y, _x);
	std::cout <<" ";
}
