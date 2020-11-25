#ifndef POSITION_H
#define POSITION_H

/*テンプレートクラス
概要
	クラスのメンバに対してテンプレートを使ったクラス
	
書き方
	template <class T>
	class クラス名
	{
		T メンバ変数;
		
		T 関数名(引数)
		{
		}
	};

	//クラス外に定義を書く場合
		template <typename パラメータ名>
		戻り値の型 クラス名<パラメータ名>::関数名(引数)
		{
		
		}

補足
	テンプレートを使ったクラスのことを汎用クラスと呼んだりする
	typenameとclassについては、その機能に違いはない
	そのテンプレートを使うときの T の型が Class である可能性があるなら class
	int や、floatなどのデータ型である場合は typename を使うルールにすることで
	コードの可読性を上げることが出来るかも...
	T と書いた部分は、変数と同様にどのような名前でも構わない
	'T'emplateなので、Tとして開設している技術書やサイトが多い

注意点
	クラスのテンプレートについては、基本的に定義も含めて、
	すべてヘッダーファイルに書くようにする
*/

template <class T>
class Position
{
public:
	Position()
		:m_PosX(0)
		, m_PosY(0)
	{
		
	}

public:
	void SetPosX(T x_) { m_PosX = x_; }
	void SetPosY(T y_) { m_PosY = y_; }

	T GetPosX() const { return m_PosX; }
	T GetPosY() const { return m_PosY; }

	T operator + (const Position& pos_);
	T operator = (const Position& pos_);

private:
	T m_PosX;
	T m_PosY;
};

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

#endif // !POSITION_H
