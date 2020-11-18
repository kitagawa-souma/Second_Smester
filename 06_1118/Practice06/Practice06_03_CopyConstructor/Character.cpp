#include "Character.h"
#include <stdio.h>
#include <string.h>

// デフォルトの引数付きコンストラクタ
Character::Character(const char* name, int hp, int mp)
#ifdef PATTERN01
	:m_Hp(hp)
	,m_Mp(mp)
#else
	: m_pName( nullptr )
	, m_Hp( hp )
	, m_Mp( mp )
#endif // PATTERN01
{
#ifdef PATTERN01
	strcpy_s;
#else
	m_pName = new char[32];
	strcpy_s(m_pName, 32, name);
#endif // PATTERN01
	printf("コンストラクタ\n");
}

#ifdef PATTERN03
Character::Character(const Character& ch)
{
	m_pName = new char[32];
	strcpy_s(m_pName, 32, ch.GetName());
	printf("コピーコンストラクタ\n");
}
#endif // PATTERN03


Character::~Character()
{
#ifndef PATTERN01
	delete[] m_pName;
#endif // !PATTERN01
	printf("デストラクタ\n");
}

#ifdef PATTERN02
// パラメータを表示するだけ
void PrintParam(Character* ch)
{
	printf("名前：%s\n", ch->GetName());
	printf("HP　：%d\n", ch->GetHp());
	printf("MP　：%d\n", ch->GetHp());
}
#else
void PrintParam(Character ch)
{
	printf("名前：%s\n", ch.GetName());
	printf("HP　：%d\n", ch.GetHp());
	printf("MP　：%d\n", ch.GetHp());
}
#endif // PATTERN02
