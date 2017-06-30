#include "stdafx.h"
#include "CommandInterface.h"
#include <Windows.h>
#include <iostream>

void CommandInterface::MoveCursorToXY(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
bool CommandInterface::GetStatus()
{
	return _isAlive;
}
void CommandInterface::SetStatus(bool status)
{
	_isAlive = status;
}
char CommandInterface::GetSimbol()
{
	return _simbol;
}
int CommandInterface::getX()
{
	return _x;
}
int CommandInterface::GetY()
{
	return _y;
}
void CommandInterface::SetX(int value)
{
	_x = value;
}
void CommandInterface::SetY(int value)
{
	_y = value;
}

void CommandInterface::ShowObject()
{	
	std::cout << _simbol;
}