#include <iostream>

class A
{
public:
	//explicit ���Z�q�̏�����
		//explicit �R���X�g���N�^(����)
	explicit A(int val)
	{
		std::cout << val << std::endl;
	}
};

class B
{
public:
	B(const A& ref)
	{

	}
};

int main()
{
	//������1�������R���X�g���N�^�́A�Öق̌^�ϊ����s����\��������
	//�Öق̌^�ϊ����s����R���X�g���N�^�̂��Ƃ��A�ϊ��R���X�g���N�^�Ƃ���
	//B b(1000);		//B�̃N���X�̃R���X�g���N�^��A�̃N���X�̎Q�Ƃ��󂯎��̂ł́H
					//�ÖٓI�� B(A(1000))�Ɖ��߂�������Ă���

	//A test = 100;	//A�̃N���X�ϐ��Ƀf�[�^�^�����H
					//�ÖٓI�� A test = A(100) �Ɖ��߂�������Ă���
					//�R�s�[�R���X�g���N�^���Ăяo����Ă���
	
	//A a(35);		//A�̃N���X�̃R���X�g���N�^
					//���Ȃ�

	return 0;
}