#include "stdafx.h"
#include "GameManager.h"


GameManager::GameManager()
{
	players.push_back(player);
	up = new Arrow('^');
	down = new Arrow('v');
	right = new Arrow('>');
	left = new Arrow('<');
	map.ShowMap();

}
Player GameManager::GetPlayer() {
	return player;
}
Map GameManager::GetMap()
{
	return map;
}
Arrow *GameManager::GetArrow(std::string arrow)
{
	if (arrow == "up")
		return up;
	else if (arrow == "down")
		return down;
	else if (arrow == "right")
		return right;
	else if (arrow == "left")
		return left;
}

void GameManager::SetArrowsPosition(Arrow *arrow, int i, int j, char XorY) {
	if(XorY == 'x' || XorY == 'X')
		arrow->SetX(arrowsPos[i][j]);
	else if(XorY == 'y' || XorY == 'Y')
		arrow->SetY(arrowsPos[i][j]);
}
GameManager::~GameManager()
{
	delete up;
	delete down;
	delete left;
	delete right;
}
