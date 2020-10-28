#include "Test.h"
#include <stdio.h>

//staticメンバ変数(定義部)
//型名 クラス名::変数名(= 初期値)
//注:staticメンバ変数は、宣言と別に実体を作っておく必要がある
//	実態を作るときは、必ずcpp側に書くこと
int Test::staticvalue = 0;
int Test::instsnceCount = 0;

Test::Test()
{
	value = 0;

	instsnceCount++;
}

Test::~Test()
{
	instsnceCount--;
}

void Test::SetValue(int value_)
{
	value = value_;
}

int Test::GetValue()
{
	return value;
}

void Test::PrintValue()
{
	printf("value = %d\n", value);
	printf("staticvalue = %d\n", staticvalue);
}

//staticメンバ関数の書き方(定義部)
//戻り値 関数名(引数)
void Test::SetStaticValue(int value_)
{
	staticvalue = value_;

	//注:staticメンバ関数の中では、
	//static以外のメンバ変数を操作することはできない
	//value = value_; //error
}

void Test::PrintCount()
{
	printf("Instance Count = %d\n", instsnceCount);
}