#include<stdio.h>
#include<stdlib.h>
#include<string>
#include"player.h"
#include"enemy.h"

//ステータス表示
void PrintStatus(std::string name, Base* target);

int main()
{
	//Player player;
	//player.SetMoveSpeed(5.0);
	Base* player = new Player();
	player->SetMoveSpeed(5.0f);

	//Enemy enemy;
	//enemy.SetHp(100);
	Base* enemy = new Enemy();
	enemy->SetHp(100);

	//別々の変数であろうと、基底クラスのポインタ配列を使って
	//処理をまとめて行うことが出来る
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