#include <iostream>
#include "Enemy.h"
#include "Shot.h"
#include "File.h"

//using�ɂ���
//using��namespace���X�R�[�v���ɒǉ�����@�\
//������
//using namespace namespace��
using namespace Enemy;

int main()
{
	//namespace�ɑ����Ă���f�[�^���g���Ƃ��̏�����(namespace�̊O)
	//namespace::�������Ă���f�[�^
	Enemy::PrintMax();
	Shot::PrintMax();
	//printf("�G�̍ő吔 = %d\n", Enemy::Max);
	//printf("�e�̍ő吔 = %d\n", Shot::Max);

	//std�����O���
	std::cout << "std::���O���" << std::endl;

	//����q�ɂ���namespace���̃f�[�^���g���ꍇ
	printf("�e�N�X�`���̍ő吔 = %d\n", File::Texture::Max);
	printf("�T�E���h�̍ő吔 = %d\n", File::Sound::Max);
	printf("�t�@�C���̍ő吔 = %d\n", File::Max);

	//using��Enemy���O��Ԃ��g�����ɂ��Ă���̂�
	//�����́AEnemy::PrintMax()���Ăяo���Ă���
	PrintMax();

	/*using���ӓ_
		using��namespace�̏��������w�肵�Ȃ��Ă������̂ŕ֗������A
		���O�̏Փ˖�肪�ĔR���Ă��܂��̂ŁA�g�p�������Ȃ�
		
		�Ȃ��Ausing�̓w�b�_�[�t�@�C���Ŏg��Ȃ��悤�ɂ���
	*/

	return 0;
}