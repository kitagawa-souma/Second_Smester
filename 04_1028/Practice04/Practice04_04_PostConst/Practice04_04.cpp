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
	//コンストメンバ関数の中では、メンバ変数に対する値の代入を行うことが出来ない
	//コンストメンバ関数を呼び出す際、内部のメンバ変数への代入操作を行わないことが保証される
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