#include <iostream>
#include "Character.h"

int main()
{
	Character ch1;
	Character ch2 = ch1;	//���̂����ۂɍ��킹�ď���������
	ch2 = ch1;
	/*������Z�q�̃I�[�o�[���[�h���̒��ӓ_
		�錾���̏������ł͑�����Z�q�̃I�[�o�[���[�h�ł͂Ȃ�
		�R�s�[�R���X�g���N�^���Ăяo�����
		���z��̐錾���̏������ł��R�s�[�R���X�g���N�^���Ăяo����܂�
	*/

	return 0;
}