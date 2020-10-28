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
//�R���X�g���N�^�ŁA�����o�C�j�V�����C�U�ɂ�鏉�����̂���
//�N���X��::�R���X�g���N�^(����):�����o�ϐ�(�����l), �����o�ϐ�(�����l)
CharaBase::CharaBase() : Hp(50) , Mp(10) , HP_MAX(999)
{
	//�]���̏��������@
	//Hp = 50;
	//Mp = 10;
}
//�����t���ł��C�j�V�����C�U�͎g�p�\
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
	//�f�[�^�^�ɂ��R���X�g���N�^�͂���
	int value(10);
	float f_volume(10.0f);

	CharaBase ch;
	ch.PrintParam();

	Player pl;
	pl.PrintParam();

	return 0;
}