#pragma once
class CommandInterface
{
protected:
	bool _isAlive;
	char _simbol;
	int _x;
	int _y;
public:
	void MoveCursorToXY(int x, int y);
	bool GetStatus();
	void SetStatus(bool status);
	char GetSimbol();
	int getX();
	int GetY();
	void SetX(int value);
	void SetY(int value);
	virtual void ShowObject();
};

