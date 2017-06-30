#pragma once
class Player
{
private:
	int score;
	int lives;

public:
	Player();
	int GetScore();
	void AddScore(int value);
	~Player();
};

