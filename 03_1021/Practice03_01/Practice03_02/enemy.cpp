#include <stdio.h>
#include "enemy.h"

Enemy::Enemy()
{
	m_Routine = 0;
	printf("Enemy:�R���X�g���N�^\n");
}

Enemy::~Enemy()
{
	printf("Enemy:�f�X�g���N�^\n");
}

void Enemy::Exec()
{
}

void Enemy::Draw()
{
}

bool Enemy::CheckHit(int x, int y, int width, int height)
{
	//���ɓ�����Ȃ������Ƃ���
	printf("Enemy:������܂���ł����I\n");
	return false;
}