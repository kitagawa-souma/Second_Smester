#include <iostream>

/*オペレーター
オペレーターとは演算子のこと
=,+,-,*,/,+=,etc

書き方
	戻り値の型 operator 演算子(引数)
	{
		return 戻り値;
	}

それぞれの意味
	戻り値の型
		オペレーターの処理結果の戻り値の型

	演算子
		ほとんどの演算子を使用することが出来る
		ただし、「.」「::」「?」「*(ポインタ)」はできない

	引数
		演算子の右辺に当たる値の型
		下記の例 t + 100 では + の右側に当たる 100 の型(== int型)
		イメージとしては t.+(100) と同義

	return + 戻り値
		void型以外の戻り値を設定した場合、
		return文を使って値を戻す必要がある

operatorの本質
	特殊な形式をとるメンバ関数
	演算子をオーバーロードすることで、コンパイラが通常の処理から
	[operator 演算子]というメンバ関数の呼び出しへ変換している
*/

//書き方の例としてシンプルなtestクラスを作る
class Test
{
public:
	Test(int val) : m_Val(val)
	{

	}

	//Testとintを足し算するための＋オペレーター
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
	int ans = t + 100;	//Testが持っているm_Valと足し算ができるようにしたい
	printf("ans = %d\n", ans);

	return 0;
}