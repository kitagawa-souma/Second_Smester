#include "Vector2D.h"

Vector2D::Vector2D()
	: m_X(0.0f)
	, m_Y(0.0f)
{

}

Vector2D::Vector2D(float x_, float y_)
	: m_X(x_)
	, m_Y(y_)
{

}

Vector2D& Vector2D::operator+ (const Vector2D& vec)
{
	Vector2D ans;
	ans.m_X = this->m_X + vec.m_X;
	ans.m_Y = this->m_Y + vec.m_Y;
	return ans;
}

//���Ӓl�֌v�Z���đ�����s���̂ŁA��{�I�ɂ͑�����Z�q�Ɠ����`�ɂȂ�
Vector2D& Vector2D::operator+= (const Vector2D& vec)
{
	Vector2D ans;
	this->m_X += vec.m_X;
	this->m_Y += vec.m_Y;
	return ans;
}

Vector2D Vector2D::operator= (const Vector2D& vec)
{
	Vector2D ans;
	this->m_X = vec.m_X;
	this->m_Y = vec.m_Y;
	return *this;
}