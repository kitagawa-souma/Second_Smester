#include <iostream>

//�f�t�H���g����
//�֐��̈����ɂ̓f�t�H���g�l��ݒ肷�邱�Ƃ��o����
//�f�t�H���g�l���ݒ肳�ꂽ�����́A�֐��̌Ăяo�����ɏȗ����邱�Ƃ��o����
class Calculator
{
public:
	int Add(int a, int b);
	//����b�̃f�t�H���g�l��2�Ƃ���
	//�߂�l�̕� �֐���(�������̌^ �������� = �����l)
	//�f�t�H���g�l�̐ݒ�́A�錾���ł���`���ł��\��Ȃ����A�����ɏ������Ƃ͂ł��Ȃ�
	int Mul(int a, int b = 2);

	//�f�t�H���g�����͕K�������ɒǉ����Ȃ���΂Ȃ�Ȃ�
	//int Sub(int a = 100, int b, int c);
};

int Calculator::Add(int a, int b)
{
	return (a + b);
}

int Calculator::Mul(int a, int b/* = 2*/)
{
	return (a * b);
}

int main()
{
	Calculator calc;
	std::cout << calc.Add(10, 20) << std::endl;
	std::cout << calc.Mul(100, 4) << std::endl;
	std::cout << calc.Mul(100)	  << std::endl;
}