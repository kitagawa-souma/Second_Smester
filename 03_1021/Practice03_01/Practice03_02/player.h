#ifndef PLAYER_H
#define PLAYER_H

#include "base.h"

//----------------------------------
//プレイヤークラス
//----------------------------------
//基底クラス(Base)を継承する
//派生クラス名:public(or private)基底クラス名
class Player : public Base
{
public:
	Player();
	~Player();

public:
	void Exec();
	void Draw();

public:
	//引数の矩形情報と、自分が当たっているか判定
	bool CheckHit(int x, int y, int width, int height);
};

#endif // !PLAYER_H
