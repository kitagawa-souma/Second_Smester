#ifndef CHARACTER_H
#define CHARACTER_H

//#define PATTERN01//対策その1 動的に確保しない
//#define PATTERN02//対策その2 関数でポインタ渡しにする
#define PATTERN03//対策その3 コピーコンストラクタで対策する

/* コピーコンストラクタ
■重要な注意点
	クラスのメンバ変数に、動的に確保するインスタンスがある場合
	コピーコンストラクタで正しく対策をとらないと、
	メモリアクセス違反などのバグが発生してしまう

	解決策
		１、動的に確保しない(メモリが無駄になるが、配列で確保しておく)
		２、関数で渡す際に、値渡しでなく、ポインタ渡しなどにする
		３、コピーコンストラクタで、正しい対策をとる
*/

class Character
{
public:
	// デフォルトの引数付きコンストラクタ
	Character(const char* name, int hp, int mp);
#ifdef PATTERN03
	Character(const Character& ch);
#endif // PATTERN03

	virtual ~Character();

	const char* GetName() const { return m_pName; }
	int GetHp() const { return m_Hp; }
	int GetMp() const { return m_Mp; }

protected:
#ifdef PATTERN01
	char m_pName[32];
#else
	char* m_pName;
#endif // PATTERN01
	int m_Hp;
	int m_Mp;
};

#ifdef PATTERN02
// パラメータを表示するだけ
void PrintParam(Character* ch);
#else
void PrintParam(Character ch);
#endif // PATTERN02
#endif	// #ifndef CHARACTER_BASE_H
