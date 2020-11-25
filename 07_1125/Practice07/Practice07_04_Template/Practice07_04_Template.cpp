#include <iostream>

/*�e���v���[�g
C++�̃e���v���[�g�Ƃ̓N���X�����o�֐���ϐ��̈�����߂�l��
��`����ہA�����܂��ȏ�ԂŒ�`�ł���@�\

	//������
	template <tipename �p�����[�^��>
	�p�����[�^�� �֐���(�p�����[�^�� ����1, �p�����[�^�� ����2, �c)
	{
	}
	*/

template <typename T>
T CalcSum(T a, T b)
{
	return (a + b);
}

//���ar�ƁA�~������n���A�~�̖ʐς��v�Z����֐�
//���a�͐�����������Ȃ����A������������Ȃ�
template <typename T, typename U>
double CalcCircleArea(T r, U pi)
{
	return(r * r) * pi;
}

int main()
{
	printf("int CalcSum(10, 10) = %d\n", CalcSum(10, 10));
	printf("float CalcSum(20.f, 20.f) = %.2f\n", CalcSum(20.0f, 20.0f));
	printf("int r float pi CalcCircleArea = %f\n", CalcCircleArea(5, 3.1415926535f));
	printf("int r int pi CalcCircleArea = %f\n", CalcCircleArea(2, 3));

	return 0;
}