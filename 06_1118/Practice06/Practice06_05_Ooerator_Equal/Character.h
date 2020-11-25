#include <stdio.h>
#include <string.h>

#ifndef CHARACTER_H
#define CHARACTER_H

/*代入演算子のオペレーター
書き方
	戻り値の型 operator =(引数);
 
クラスのオペレーターとして用意する場合
	Character& operator = (Character &ch);

	戻り値の型
		Character& クラスの参照型

	引数
		Character& ch 右辺のデータ型も参照型

	呼び出し方の例
		Character ch1;
		Character ch2;
*/

class Character
{
public:

	enum JOB
	{
		Freeter,
		Warrior,
		Wizard,
		Priest,
	};

public:
	// デフォルトの引数付きコンストラクタ
	Character();
	Character(const Character& ch);

	virtual ~Character();

	//代入演算子(=)のoperator
	Character& operator = (Character& ch);

	JOB GetJob() const { return m_Job; }

private:
	JOB m_Job;

protected:
	int m_Hp;
	int m_Mp;
};
#endif	// #ifndef CHARACTER_BASE_H