#include <stdio.h>
#include "enemy.h"

Enemy::Enemy()
{
	m_Routine = 0;
}

Enemy::~Enemy()
{
}

void Enemy::Exec()
{
}

void Enemy::Draw()
{
}

bool Enemy::CheckHit(int x, int y, int width, int height)
{
	//仮に当たらなかったとする
	printf("Enemy:当たりませんでした！\n");
	return false;
}