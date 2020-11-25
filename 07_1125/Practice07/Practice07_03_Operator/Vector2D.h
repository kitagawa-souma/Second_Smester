#ifndef VECTOR2D_H
#define VECTOR2D_H

//�K�v�ȉ��Z�q�̃I�[�o�[���[�h��A�֐��̗p�ӂȂǂ��s�����A����o�[�W����

//2���x�N�g���N���X
class Vector2D
{
public:
	Vector2D();
	Vector2D(float x_, float y_);

	float GetX() const { return m_X; }
	float GetY() const { return m_Y; }

	//�x�N�g���̒��������߂�
	float GetLength() const;

	//+�̃I�y���[�^�[�I�[�o�[���[�h
	Vector2D& operator + (const Vector2D& vec);
	//+=�̃I�y���[�^�[�I�[�o�[���[�h
	Vector2D& operator += (const Vector2D& vec);
	//=�̃I�y���[�^�[�I�[�o�[���[�h
	Vector2D operator = (const Vector2D& vec);
	//+�̃I�[�o�[���[�h(m_X, m_Y�ɓ����l�𑫂�)
	Vector2D operator + (float val);

	//>�̃I�[�o�[���[�h
	bool operator > (const Vector2D& vec) const;

private:
	float m_X;
	float m_Y;
};

#endif // !VECTOR2D_H
