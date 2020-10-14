#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<time.h>

int main()
{
	srand((unsigned)time(NULL));

	//vectorクラスの変数を使うときの書き方
	//std::vector<型名> 変数名;
	//初期化の方法いろいろ
	//std::vector<int> v1;					//配列の要素０
	//std::vector<int> v1 = { 0, 1, 2 };	//要素3、0, 1, 2で初期化
	//std::vector<int> v1{ 0, 1, 2 };		//要素3、0, 1, 2で初期化
	//std::vector<int> v1(6, -1);			//要素6、すべてを―１で初期化
	std::vector<int> v1(8);					//要素8、すべてを0で初期化
	std::vector<int> v2 = v1;				//v2をv1の内容で初期化

	//値の代入 配列と同じように[]を使える
	v1[0] = 10;

	for (int i = 0; i < v1.size(); i++)
	{
		v1[i] = rand();
	}

	//配列のサイズを確認 .size()
	int size = v1.size();
	std::cout << size << std::endl;

	//要素の追加 .push_back() .insert()
	//v1.push_back(10);					//末尾に要素を追加して10で初期化
	v1.insert(v1.begin() + 1, 100);		//先頭から+1番目に100を追加

	//要素の削除
	//v1.pop_back();				//末尾の要素を削除
	v1.erase(v1.begin());		//要素の先頭を削除

	//要素数を変更する
	v1.resize(5);
	v1.resize(3);
	v1.resize(6, -1);

	int tmp = 0;
	for (int i = 0; i < v1.size(); i++)
	{
		tmp = v1[i];
		std::cout << std::endl << tmp;
	}
	std::cout << std::endl;

	//全要素の削除
	v1.clear();

	//要素が0かを調べるには .empty()を使う
	if (v1.empty())
	{
		printf("v1 is Empty!\n");
	}

	//あらかじめ最大数がわかっている場合は
	//.reserve()で領域を確保しておく
	v1.reserve(100);	//要素数100までは素早く処理できる

	system("pause");
	return 0;
}