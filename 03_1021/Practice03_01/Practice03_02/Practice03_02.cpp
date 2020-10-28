#include<stdio.h>
#include<stdlib.h>
#include<string>

#include"player.h"
#include"enemy.h"
#include"base.h"
#include "EnemyManager.h"

//#define PRACTICE03_1021		//10��21�����ƕ�

//�X�e�[�^�X�\��
void PrintStatus(std::string name, Base* target);

int main()
{
#if defined(PRACTICE03_1021)
	//Player player;
	//player.SetMoveSpeed(5.0);
	Base* player = new Player();
	player->SetMoveSpeed(5.0f);

	//Enemy enemy;
	//enemy.SetHp(100);
	Base* enemy = new Enemy();
	enemy->SetHp(100);

	//�ʁX�̕ϐ��ł��낤�ƁA���N���X�̃|�C���^�z����g����
	//�������܂Ƃ߂čs�����Ƃ��o����
	Base* pBase[] =
	{
		player,
		enemy
	};
	std::string name[] =
	{
		"Player",
		"Enemy",
	};

	printf("-------------\n");
	printf("PRACTICE03_02\n");
	printf("-------------\n");	

	for (int i = 0; i < 2; i++)
	{
		pBase[i]->Exec();
		pBase[i]->Draw();
		pBase[i]->CheckHit(10, 10, 20, 30);
		PrintStatus(name[i].c_str(), pBase[i]);
	}

	//pBase = &player;
	//pBase->CheckHit(10, 10, 20, 30);
	////player.CheckHit(10, 10, 20, 30);
	//PrintStatus("Player", pBase);

	//pBase = &enemy;
	//pBase->CheckHit(10, 10, 20, 30);
	////enemy.CheckHit(10, 10, 20, 30);
	//PrintStatus("Enemy", pBase);

	delete player;
	player = nullptr;
	delete enemy;
	enemy = nullptr;

#else
		//10��28���ɒǉ���Ƃ�����
		//EnemyManager�̎��s�e�X�g
#endif
	//EnemyManager���g����Enemy�N���X�̊Ǘ��̗�
	EnemyManager* enemyMng = new EnemyManager();
	Base* pEnemy = nullptr;

	//�X�e�[�W�J�n���_�ł܂Ƃ߂ď�����
	//�����̓G�l�~�[�̎�ނ�\��(�{���Ȃ�enum�Ȃǂŕ�����₷������)
	enemyMng->CreateEnemy(0);
	pEnemy = enemyMng->CreateEnemy(1);
	enemyMng->CreateEnemy(2);
	enemyMng->CreateEnemy(3);
	enemyMng->CreateEnemy(4);
	enemyMng->CreateEnemy(5);
	enemyMng->CreateEnemy(6);

	//�w�肵���G�l�~�[���폜
	enemyMng->DestroyEnemy(pEnemy);

	//�쐬�����G�l�~�[�Ɋe�������s�킹��
	enemyMng->Exec();
	enemyMng->Draw();

	//�w����W�ƐڐG���Ă���G�l�~�[���擾
	pEnemy = enemyMng->CheckHit(10, 10, 20, 30);

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