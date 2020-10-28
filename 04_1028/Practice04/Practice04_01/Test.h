#ifndef TEST_H
#define TEST_H

class Test
{
public:
	Test();
	~Test();

	void SetValue(int value_);
	int  GetValue();
	void PrintValue();

	//staticメンバ関数の書き方(宣言部)
	//static 戻り値　関数名(引数)
	static void SetStaticValue(int value_);

	//testクラスを使っている実体が何個あるか表示
	static void PrintCount();

private:
	int value;

	//staticメンバ変数の書き方(宣言部)
	//static 型名 変数名
	static int staticvalue;

	//作られている実態の数
	static int instsnceCount;
};

#endif // !TEST_H
