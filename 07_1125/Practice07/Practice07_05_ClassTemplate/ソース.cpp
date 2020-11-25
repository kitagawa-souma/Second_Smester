#include "Position.h"

//+ �I�[�o�[���[�h(�N���X�O�ł̎�����p)
template <class T>
T Position<T>::operator + (const Position& pos_)
{
	Position ans;		//���<T>�^�p��Position�ł���Ɛ錾���Ă���̂ŁA�����ł͕s�v
	ans.SetPosX(this->GetPosX() + pos_.GetPosX());
	ans.SetPosY(this->GetPosY() + pos_.GetPosY());

	return ans;
}

template <class T>
T Position<T>::operator = (const Position& pos_)
{
	Position ans;
	ans.SetPosX() = pos_.GetPosX();
	ans.SetPosY() = pos_.GetPosY();
}