#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<time.h>

int main()
{
	srand((unsigned)time(NULL));

	std::vector<int> v1(8);					//要素8、すべてを0で初期化

	//iteratorを使ったfor文の回し方
	//for(int i = 0; i < v1.size(); i++)と意味は同じ

	//型:std::vector<int>::iterator
	std::vector<int>::iterator itr;
	for (itr = v1.begin(); itr != v1.end(); ++itr)
	{
		*itr = rand();
		printf("%d\n", *itr);
	}

	int tmp = 0;
	for (int i = 0; i < v1.size(); i++)
	{
		v1[i] = rand();
		tmp = v1[i];
		std::cout << std::endl << tmp;
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}