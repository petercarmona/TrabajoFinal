#pragma once
#include "CommandInterface.h"
class Arrow : public CommandInterface
{
private:
	int posX;
	int posY;

public:
	Arrow(char simbol);	
	void ShowObject();
	void MoveArrowDown();
	void ReuseArrow();
	~Arrow();
};

