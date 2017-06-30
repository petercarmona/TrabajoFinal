#pragma once
#include "Player.h"
#include "Map.h"
#include "Arrow.h"
#include <string>
class GameManager
{
private:
	Map map;
	Player player;
	Arrow *up, *down, *left, *right;
	int arrowsPos[4][2] = 
	{
		{ 2,2 },// left
		{ 2,4 },// up
		{ 2,6 },// right
		{ 2,8 },// down
	};
public:
	GameManager();
	Map GetMap();
	Player GetPlayer();
	Arrow *GetArrow(std::string arrow);
	void SetArrowsPosition(Arrow *arrow, int i, int j, char XorY);
	~GameManager();
};

