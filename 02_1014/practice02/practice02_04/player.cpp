#include "player.h"

Player::Player()
{
	m_Hp = 0;
	m_PosX = 0.0f;
	m_PosY = 0.0f;
	m_MoveSpeed = 0.0f;
}

Player::~Player()
{
}

void Player::SetHp(int hp)
{
	Player::m_Hp = hp;
}

void Player::SetPos(float pos_x, float pos_y)
{
	Player::m_PosX = pos_x;
	Player::m_PosY = pos_y;
}

void Player::SetMoveSpeed(float speed)
{
	Player::m_MoveSpeed = speed;
}

int Player::GetHp()
{
	return Player::m_Hp;
}

float Player::GetPosX()
{
	return Player::m_PosX;
}

float Player::GetPosY()
{
	return Player::m_PosY;
}

float Player::GetMoveSpeed()
{
	return Player::m_MoveSpeed;
}
