#include<stdio.h>
#include<stdlib.h>
#include<string>

#include"player.h"
#include"enemy.h"
#include"base.h"
#include "EnemyManager.h"

//#define PRACTICE03_1021		//10月21日授業分

//ステータス表示
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

#else
		//10月28日に追加作業した分
		//EnemyManagerの実行テスト
#endif
	//EnemyManagerを使ったEnemyクラスの管理の例
	EnemyManager* enemyMng = new EnemyManager();
	Base* pEnemy = nullptr;

	//ステージ開始時点でまとめて初期化
	//引数はエネミーの種類を表す(本来ならenumなどで分かりやすくする)
	enemyMng->CreateEnemy(0);
	pEnemy = enemyMng->CreateEnemy(1);
	enemyMng->CreateEnemy(2);
	enemyMng->CreateEnemy(3);
	enemyMng->CreateEnemy(4);
	enemyMng->CreateEnemy(5);
	enemyMng->CreateEnemy(6);

	//指定したエネミーを削除
	enemyMng->DestroyEnemy(pEnemy);

	//作成したエネミーに各処理を行わせる
	enemyMng->Exec();
	enemyMng->Draw();

	//指定座標と接触しているエネミーを取得
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