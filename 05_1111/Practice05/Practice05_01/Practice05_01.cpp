//�C�����C���֐��Ƃ�
/*�����b�g
	�֐��̌Ăяo�����ׂ��Ȃ��Ȃ邽�߁A�����̍��w���������߂�
�@�f�����b�g
	�֐��̋K�͂��傫���Ɣ��f���ꂽ�ꍇ�A�W�J����Ȃ�
	�W�J����Ƃ���������A�t�@�C���T�C�Y�����傷��
	�W�J����Ƃ���������A�C�����C���֐���ύX�����ꍇ�̃r���h�t�@�C������������
	�N���X�̏ꍇ�A�w�b�_�[�t�@�C���ɒ��ڃR�[�f�B���O����̂ŉB������������
*/

#include <iostream>
#include <Windows.h>
#include <stdio.h>

#define USE_INLINE //�C�����C���֐����g����

/*
�C�����C���֐��̏�����
inline �߂�l�̌^ �֐���(����)
{
	����
}
*/
inline int AddSum(int a, int b)
{
	return(a + b);
}

class Test
{
public:
	//�֐��̐錾���ɒ�`�������Ă�����
	//�����I�ɃC�����C���֐��Ƃ��Ĉ�����
	int AddSum(int a, int b)
	{
		return(a + b);
	}
};

#ifdef USE_INLINE
inline unsigned int Pow(int x1, int x2)
{
	return (x1 * x2);
}
#else
unsigned int Pow(int x1, int x2)
{
	return (x1 * x2);
}
#endif // USE_INLINE


int main()
{
	int a = AddSum(1, 3);
	//�R���p�C�����Aa = (a + b) -> a = (1 + 3)�ɓW�J�����

	LARGE_INTEGER f;
	if (!QueryPerformanceFrequency(&f))
	{
		return 0;
	}

	LARGE_INTEGER s, e;
	QueryPerformanceCounter(&s);
	unsigned int pow = 0;
	for (int i = 0; i < 10000; i++)
	{
		for (int j = 0; j < 10000; j++)
		{
			pow = Pow(i, j);
		}
	}
	printf("pow = %d\n", pow);

	QueryPerformanceCounter(&e);
	double t = (double)(e.QuadPart - s.QuadPart) / f.QuadPart;
	printf("time = %f sec\n", t);

	return 0;
}