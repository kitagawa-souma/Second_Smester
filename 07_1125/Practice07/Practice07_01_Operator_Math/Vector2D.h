#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2D
{
public:
	Vector2D();
	Vector2D(float x_, float y_);

	float GetX() const { return m_X; }
	float GetY() const { return m_Y; }

	//+のオペレーターオーバーロード
	Vector2D& operator + (const Vector2D& vec);
	//+=のオペレーターオーバーロード
	Vector2D& operator += (const Vector2D& vec);
	//=のオペレーターオーバーロード
	Vector2D operator = (const Vector2D& vec);

private:
	float m_X;
	float m_Y;
};

#endif // !VECTOR2D_H
