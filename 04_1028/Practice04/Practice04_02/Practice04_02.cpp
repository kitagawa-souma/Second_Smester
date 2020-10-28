#include<stdio.h>

class CharaBase
{
public:
	CharaBase();
	CharaBase(int hp, int mp);
	virtual ~CharaBase();

	void PrintParam();

private:
	int Hp;
	int Mp;

	const int HP_MAX;
};
//コンストラクタで、メンバイニシャライザによる初期化のやり方
//クラス名::コンストラクタ(引数):メンバ変数(初期値), メンバ変数(初期値)
CharaBase::CharaBase() : Hp(50) , Mp(10) , HP_MAX(999)
{
	//従来の初期化方法
	//Hp = 50;
	//Mp = 10;
}
//引数付きでもイニシャライザは使用可能
CharaBase::CharaBase(int hp, int mp) : Hp(50) , Mp(10) , HP_MAX(999)
{
	//Hp = hp;
	//Mp = mp;
}

CharaBase::~CharaBase()
{

}

void CharaBase::PrintParam()
{
	printf("Hp = %d\n", Hp);
	printf("Mp = %d\n", Mp);
	printf("\n");
	printf("HP_MAX = %d\n", HP_MAX);
}

class Player : public CharaBase
{
public:
	Player();

private:
	int Money;
};

Player::Player() : CharaBase(200, 30) , Money(50)
{
	
}

int main()
{
	//データ型にもコンストラクタはある
	int value(10);
	float f_volume(10.0f);

	CharaBase ch;
	ch.PrintParam();

	Player pl;
	pl.PrintParam();

	return 0;
}