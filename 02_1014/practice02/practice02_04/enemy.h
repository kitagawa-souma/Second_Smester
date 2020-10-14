#ifndef ENEMY_H
#define ENEMY_H

//----------------------------------
//エネミークラス
//----------------------------------
class Enemy
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();

public:
	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();

private:
	int		m_Hp;
	float	m_PosX;
	float	m_PosY;
	float	m_MoveSpeed;
};

Enemy::Enemy()
{
	m_Hp = 0;
	m_PosX = 0;
	m_PosY = 0;
	m_MoveSpeed = 0;
}

Enemy::~Enemy()
{
	Exec();
	Draw();
}

#endif // !ENEMY_H
