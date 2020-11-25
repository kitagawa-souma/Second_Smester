#include <iostream>
#include "Position.h"

int main()
{
	//テンプレートクラスの使い方
	//クラス名<データ型> 変数名;
	Position<int> iPos;		//m_PosX(Y)をintとして扱うPositionクラス
	Position<float> fPos;	//m_PosX(Y)をfloatとして扱うPositionクラス


	return 0;
}