#include<stdio.h>
#include<stdlib.h>
#include<string>
#include"player.h"
#include"enemy.h"

//�X�e�[�^�X�\��
void PrintStatus(std::string name, Base* target);

int main()
{
	Player player;

	player.SetMoveSpeed(5.0);

	Enemy enemy;

	enemy.SetHp(100);

	Base* pBase = nullptr;

	printf("-------------\n");
	printf("PRACTICE02_04\n");
	printf("-------------\n");	

	pBase = &player;
	PrintStatus("Player", pBase);

	pBase = &enemy;
	PrintStatus("Enemy", pBase);

	system("pause");
	return 0;
}

void PrintStatus(std::string name, Base* target)
{
	if (target == nullptr)
	{
		return;
	}

	printf("-------------\n");
	printf("%s Status\n", name.c_str());
	printf("-------------\n");
	printf("hp = %d\n", target->GetHp());
	printf("PosX = %0.2f\n", target->GetPosX());
	printf("PosY = %0.2f\n", target->GetPosY());
	printf("MoveSpeed = %0.2f\n", target->GetMoveSpeed());
	printf("\n");
}