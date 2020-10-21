#include "base.h"

Base::Base()
{

}

Base::~Base()
{

}

void Base::SetHp(int hp)
{
	Base::m_Hp = hp;
}

void Base::SetPos(float pos_x, float pos_y)
{
	Base::m_PosX = pos_x;
	Base::m_PosY = pos_y;
}

void Base::SetMoveSpeed(float speed)
{
	Base::m_MoveSpeed = speed;
}

int Base::GetHp()
{
	return Base::m_Hp;
}

float Base::GetPosX()
{
	return Base::m_PosX;
}

float Base::GetPosY()
{
	return Base::m_PosY;
}

float Base::GetMoveSpeed()
{
	return Base::m_MoveSpeed;
}