#include "Test.h"
#include <stdio.h>

//static�����o�ϐ�(��`��)
//�^�� �N���X��::�ϐ���(= �����l)
//��:static�����o�ϐ��́A�錾�ƕʂɎ��̂�����Ă����K�v������
//	���Ԃ����Ƃ��́A�K��cpp���ɏ�������
int Test::staticvalue = 0;
int Test::instsnceCount = 0;

Test::Test()
{
	value = 0;

	instsnceCount++;
}

Test::~Test()
{
	instsnceCount--;
}

void Test::SetValue(int value_)
{
	value = value_;
}

int Test::GetValue()
{
	return value;
}

void Test::PrintValue()
{
	printf("value = %d\n", value);
	printf("staticvalue = %d\n", staticvalue);
}

//static�����o�֐��̏�����(��`��)
//�߂�l �֐���(����)
void Test::SetStaticValue(int value_)
{
	staticvalue = value_;

	//��:static�����o�֐��̒��ł́A
	//static�ȊO�̃����o�ϐ��𑀍삷�邱�Ƃ͂ł��Ȃ�
	//value = value_; //error
}

void Test::PrintCount()
{
	printf("Instance Count = %d\n", instsnceCount);
}