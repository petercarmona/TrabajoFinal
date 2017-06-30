#include "stdafx.h"
#include "Player.h"
#include <iostream>


Player::Player()
{
	score = 0;
	lives = 3;
}

int Player::GetScore() {
	return score;
}
void Player::AddScore(int value) {
	score = score + value;
	std::cout << score;
}
Player::~Player()
{
}
