#include <iostream>
#include "Vector2D.h"

/*
�Z�p���Z�q�́u+�v�u-�v�u*�v�u/�v�u%�v�Ȃ�
������Z�q���g�p�����u+=�v�u-=�v�Ȃǂ�����
*/
int main()
{
	Vector2D vec1(100, 100);
	Vector2D vec2(87, 14);
	Vector2D ans;

	ans = vec1;
	ans += vec2;

	//���ʏo��
	std::cout << "ans.x = " << ans.GetX() << std::endl;
	std::cout << "ans.y = " << ans.GetY() << std::endl;

	return 0;
}