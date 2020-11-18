#ifndef ENEMY_H
#define ENEMY_H

//namespace 名前空間の書き方
//namespace namesaceの名前
//{
//	　グローバル変数や、クラス定義,など
//}

//Enemy名前空間
namespace Enemy
{
	static const int Max = 10; //敵最大数
	
	//namespaceに属しているデータを使うときの書き方(namespaceの内)
	//namespace名:: は省略できる(スコープが同じなら指定の必要はない)
	void PrintMax()
	{
		printf("敵の最大数 = %d\n", Max);
	}
}

#endif // !ENEMY_H
