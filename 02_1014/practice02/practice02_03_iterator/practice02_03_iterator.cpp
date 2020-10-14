#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<time.h>

int main()
{
	srand((unsigned)time(NULL));

	std::vector<int> v1(8);					//—v‘f8A‚·‚×‚Ä‚ğ0‚Å‰Šú‰»

	//iterator‚ğg‚Á‚½for•¶‚Ì‰ñ‚µ•û
	//for(int i = 0; i < v1.size(); i++)‚ÆˆÓ–¡‚Í“¯‚¶

	//Œ^:std::vector<int>::iterator
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