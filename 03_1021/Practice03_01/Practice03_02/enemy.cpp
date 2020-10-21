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
	//âºÇ…ìñÇΩÇÁÇ»Ç©Ç¡ÇΩÇ∆Ç∑ÇÈ
	printf("Enemy:ìñÇΩÇËÇ‹ÇπÇÒÇ≈ÇµÇΩÅI\n");
	return false;
}