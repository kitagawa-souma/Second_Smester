#include <iostream>
#include "Enemy.h"
#include "Shot.h"

int main()
{
	//namespace�ɑ����Ă���f�[�^���g���Ƃ��̏�����(namespace�̊O)
	//namespace::�������Ă���f�[�^
	printf("�G�̍ő吔 = %d\n", Enemy::Max);
	printf("�e�̍ő吔 = %d\n", Shot::Max);

	//std�����O���
	std::cout << "std::�����O���" << std::endl;

	return 0;
}