#include "base.h"
#include <stdio.h>

Base::Base()
{
	m_Hp		= 0;
	m_PosX		= 0.0f;
	m_PosY		= 0.0f;
	m_MoveSpeed = 0.0f;

	m_Width		= 10;
	m_Height	= 10;
}

Base::~Base()
{

}

bool Base::CheckHit(int x, int y, int width, int height)
{
	//âºÇ…ìñÇΩÇÁÇ»Ç©Ç¡ÇΩÇ∆Ç∑ÇÈ
	printf("Base:ìñÇΩÇËÇ‹ÇπÇÒÇ≈ÇµÇΩÅI\n");
	return false;
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