#include <iostream>

/*�I�y���[�^�[
�I�y���[�^�[�Ƃ͉��Z�q�̂���
=,+,-,*,/,+=,etc

������
	�߂�l�̌^ operator ���Z�q(����)
	{
		return �߂�l;
	}

���ꂼ��̈Ӗ�
	�߂�l�̌^
		�I�y���[�^�[�̏������ʂ̖߂�l�̌^

	���Z�q
		�قƂ�ǂ̉��Z�q���g�p���邱�Ƃ��o����
		�������A�u.�v�u::�v�u?�v�u*(�|�C���^)�v�͂ł��Ȃ�

	����
		���Z�q�̉E�ӂɓ�����l�̌^
		���L�̗� t + 100 �ł� + �̉E���ɓ����� 100 �̌^(== int�^)
		�C���[�W�Ƃ��Ă� t.+(100) �Ɠ��`

	return + �߂�l
		void�^�ȊO�̖߂�l��ݒ肵���ꍇ�A
		return�����g���Ēl��߂��K�v������

operator�̖{��
	����Ȍ`�����Ƃ郁���o�֐�
	���Z�q���I�[�o�[���[�h���邱�ƂŁA�R���p�C�����ʏ�̏�������
	[operator ���Z�q]�Ƃ��������o�֐��̌Ăяo���֕ϊ����Ă���
*/

//�������̗�Ƃ��ăV���v����test�N���X�����
class Test
{
public:
	Test(int val) : m_Val(val)
	{

	}

	//Test��int�𑫂��Z���邽�߂́{�I�y���[�^�[
	int operator + (int val)
	{
		return (m_Val + val) * 100;
	}

private:
	int m_Val;
};

int main()
{
	Test t(10);
	int ans = t + 100;	//Test�������Ă���m_Val�Ƒ����Z���ł���悤�ɂ�����
	printf("ans = %d\n", ans);

	return 0;
}