#ifndef BASE_H
#define BASE_H

//基底クラス(親クラス)
class Base
{
public:
	Base();
	virtual ~Base();

public:
	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();

private:
	int		m_Hp		= 0;
	float	m_PosX		= 0.0f;
	float	m_PosY		= 0.0f;
	float	m_MoveSpeed	= 0.0f;
};

#endif // !BASE_H