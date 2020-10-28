#include <iostream>

//デフォルト引数
//関数の引数にはデフォルト値を設定することが出来る
//デフォルト値が設定された引数は、関数の呼び出し時に省略することが出来る
class Calculator
{
public:
	int Add(int a, int b);
	//引数bのデフォルト値を2とする
	//戻り値の方 関数名(仮引数の型 仮引数名 = 初期値)
	//デフォルト値の設定は、宣言部でも定義部でも構わないが、両方に書くことはできない
	int Mul(int a, int b = 2);

	//デフォルト引数は必ず末尾に追加しなければならない
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