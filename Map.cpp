#include "stdafx.h"
#include "Map.h"
#include <iostream>

Map::Map()
{

}

void Map::ShowMap()
{
	system("cls");
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (map[i][j] == 1)
				std::cout << "#";
			else if (map[i][j] == 2)
				std::cout << "X";
			else if (map[i][j] == 0)
				std::cout << " ";
			else if (map[i][j] == 3)
				std::cout << "H";
		}
		std::cout<<std::endl;
	}
}
int Map::GetMap(int x, int y) {
	return map[x][y];
}
void Map::setMap(int x, int y) {

}

Map::~Map()
{
}
