#include <stdio.h>
#include "player.h"

Player::Player()
{
	printf("Player:�R���X�g���N�^\n");
}

Player::~Player()
{
	printf("Player:�f�X�g���N�^\n");
}

void Player::Exec()
{
}

void Player::Draw()
{
}

bool Player::CheckHit(int x, int y, int width, int height)
{
	//���ɓ�����Ȃ������Ƃ���
	printf("Player:������܂���ł����I\n");
	return false;
}