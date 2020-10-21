#include "enemy.h"

Enemy::Enemy()
{
	m_Hp = 0;
	m_PosX = 0.0f;
	m_PosY = 0.0f;
	m_MoveSpeed = 0.0f;
}

Enemy::~Enemy()
{
}

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
