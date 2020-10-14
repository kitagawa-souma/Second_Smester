#include <stdio.h>
#include <stdlib.h>
#include "enemy.h"

void Enemy::SetHp(int hp)
{
	Enemy::m_Hp = hp;
}

void Enemy::SetPos(float pos_x, float pos_y)
{
	Enemy::m_PosX = pos_x;
	Enemy::m_PosY = pos_y;
}

void Enemy::SetMoveSpeed(float speed)
{
	Enemy::m_MoveSpeed = speed;
}

int Enemy::GetHp()
{
	return Enemy::m_Hp;
}

float Enemy::GetPosX()
{
	return Enemy::m_PosX;
}

float Enemy::GetPosY()
{
	return Enemy::m_PosY;
}

float Enemy::GetMoveSpeed()
{
	return Enemy::m_MoveSpeed;
}
