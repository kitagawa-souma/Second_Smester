#include <iostream>
#include "Test.h"

int main()
{
	Test testA;
	Test testB;

	testA.SetValue(10);
	testA.SetStaticValue(9872);
	testB.SetValue(345);
	//static�����o�֐��͈ȉ��̂悤�ɏ������Ƃ��ł���
	Test::SetStaticValue(1000);

	testA.PrintValue();
	testB.PrintValue();

	//ststic�����o�֐��E�ϐ��̎g����1��i���̂̐��𐔂���j
	Test::PrintCount();
	//�X�R�[�v{}�P�̂ŉ^�p�ł���
	{
		Test testC;
		Test::PrintCount();
	}
	Test::PrintCount();

	return 0;
}