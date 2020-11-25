#include "Position.h"

//+ オーバーロード(クラス外での実装例用)
template <class T>
T Position<T>::operator + (const Position& pos_)
{
	Position ans;		//上で<T>型用のPositionであると宣言しているので、ここでは不要
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