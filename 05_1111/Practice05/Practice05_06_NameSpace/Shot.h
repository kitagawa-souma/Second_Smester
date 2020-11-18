#ifndef SHOT_H
#define SHOT_H

namespace Shot
{
	static const int Max = 100; //弾最大数

	//namespaceに属しているデータを使うときの書き方(namespaceの内)
	//namespace名:: は省略できる(スコープが同じなら指定の必要はない)
	void PrintMax()
	{
		printf("敵の最大数 = %d\n", Max);
	}
}

#endif // !SHOT_H
