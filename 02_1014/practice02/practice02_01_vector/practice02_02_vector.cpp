#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<time.h>

int main()
{
	srand((unsigned)time(NULL));

	//vector�N���X�̕ϐ����g���Ƃ��̏�����
	//std::vector<�^��> �ϐ���;
	//�������̕��@���낢��
	//std::vector<int> v1;					//�z��̗v�f�O
	//std::vector<int> v1 = { 0, 1, 2 };	//�v�f3�A0, 1, 2�ŏ�����
	//std::vector<int> v1{ 0, 1, 2 };		//�v�f3�A0, 1, 2�ŏ�����
	//std::vector<int> v1(6, -1);			//�v�f6�A���ׂĂ��\�P�ŏ�����
	std::vector<int> v1(8);					//�v�f8�A���ׂĂ�0�ŏ�����
	std::vector<int> v2 = v1;				//v2��v1�̓��e�ŏ�����

	//�l�̑�� �z��Ɠ����悤��[]���g����
	v1[0] = 10;

	for (int i = 0; i < v1.size(); i++)
	{
		v1[i] = rand();
	}

	//�z��̃T�C�Y���m�F .size()
	int size = v1.size();
	std::cout << size << std::endl;

	//�v�f�̒ǉ� .push_back() .insert()
	//v1.push_back(10);					//�����ɗv�f��ǉ�����10�ŏ�����
	v1.insert(v1.begin() + 1, 100);		//�擪����+1�Ԗڂ�100��ǉ�

	//�v�f�̍폜
	//v1.pop_back();				//�����̗v�f���폜
	v1.erase(v1.begin());		//�v�f�̐擪���폜

	//�v�f����ύX����
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

	//�S�v�f�̍폜
	v1.clear();

	//�v�f��0���𒲂ׂ�ɂ� .empty()���g��
	if (v1.empty())
	{
		printf("v1 is Empty!\n");
	}

	//���炩���ߍő吔���킩���Ă���ꍇ��
	//.reserve()�ŗ̈���m�ۂ��Ă���
	v1.reserve(100);	//�v�f��100�܂ł͑f���������ł���

	system("pause");
	return 0;
}