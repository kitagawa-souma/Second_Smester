#include <iostream>

class Test
{
public:
	void SetValue(int value);
	int GetValue() const;

private:
	int Value;
};

void Test::SetValue(int value)
{
	Value = value;
}

int Test::GetValue() const
{
	//�R���X�g�����o�֐��̒��ł́A�����o�ϐ��ɑ΂���l�̑�����s�����Ƃ��o���Ȃ�
	//�R���X�g�����o�֐����Ăяo���ہA�����̃����o�ϐ��ւ̑��������s��Ȃ����Ƃ��ۏ؂����
	return Value;
}

int main()
{
	Test test;
	test.SetValue(1000);
	int ans = test.GetValue();

	const Test* pTest = &test;
	//pTest->SetValue(10);
	pTest->GetValue();

	return 0;
}