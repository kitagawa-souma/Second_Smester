#ifndef VECTOR2D_H
#define VECTOR2D_H

//必要な演算子のオーバーロードや、関数の用意などを行った、実例バージョン

//2次ベクトルクラス
class Vector2D
{
public:
	Vector2D();
	Vector2D(float x_, float y_);

	float GetX() const { return m_X; }
	float GetY() const { return m_Y; }

	//ベクトルの長さを求める
	float GetLength() const;

	//+のオペレーターオーバーロード
	Vector2D& operator + (const Vector2D& vec);
	//+=のオペレーターオーバーロード
	Vector2D& operator += (const Vector2D& vec);
	//=のオペレーターオーバーロード
	Vector2D operator = (const Vector2D& vec);
	//+のオーバーロード(m_X, m_Yに同じ値を足す)
	Vector2D operator + (float val);

	//>のオーバーロード
	bool operator > (const Vector2D& vec) const;

private:
	float m_X;
	float m_Y;
};

#endif // !VECTOR2D_H
