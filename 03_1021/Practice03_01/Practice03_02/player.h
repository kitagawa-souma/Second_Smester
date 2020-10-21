#ifndef PLAYER_H
#define PLAYER_H

#include "base.h"

//----------------------------------
//�v���C���[�N���X
//----------------------------------
//���N���X(Base)���p������
//�h���N���X��:public(or private)���N���X��
class Player : public Base
{
public:
	Player();
	~Player();

public:
	void Exec();
	void Draw();

public:
	//�����̋�`���ƁA�������������Ă��邩����
	bool CheckHit(int x, int y, int width, int height);
};

#endif // !PLAYER_H
