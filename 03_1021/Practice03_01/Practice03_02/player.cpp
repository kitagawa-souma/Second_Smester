#include <stdio.h>
#include "player.h"

Player::Player()
{
	printf("Player:コンストラクタ\n");
}

Player::~Player()
{
	printf("Player:デストラクタ\n");
}

void Player::Exec()
{
}

void Player::Draw()
{
}

bool Player::CheckHit(int x, int y, int width, int height)
{
	//仮に当たらなかったとする
	printf("Player:当たりませんでした！\n");
	return false;
}