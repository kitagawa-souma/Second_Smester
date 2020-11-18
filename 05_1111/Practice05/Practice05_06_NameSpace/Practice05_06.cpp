#include <iostream>
#include "Enemy.h"
#include "Shot.h"
#include "File.h"

//usingについて
//usingはnamespaceをスコープ内に追加する機能
//書き方
//using namespace namespace名
using namespace Enemy;

int main()
{
	//namespaceに属しているデータを使うときの書き方(namespaceの外)
	//namespace::所属しているデータ
	Enemy::PrintMax();
	Shot::PrintMax();
	//printf("敵の最大数 = %d\n", Enemy::Max);
	//printf("弾の最大数 = %d\n", Shot::Max);

	//stdも名前空間
	std::cout << "std::名前空間" << std::endl;

	//入れ子にしたnamespace内のデータを使う場合
	printf("テクスチャの最大数 = %d\n", File::Texture::Max);
	printf("サウンドの最大数 = %d\n", File::Sound::Max);
	printf("ファイルの最大数 = %d\n", File::Max);

	//usingでEnemy名前空間を使う事にしているので
	//いかは、Enemy::PrintMax()を呼び出している
	PrintMax();

	/*using注意点
		usingはnamespaceの所属情報を指定しなくてもいいので便利だが、
		名前の衝突問題が再燃してしまうので、使用しすぎない
		
		なお、usingはヘッダーファイルで使わないようにする
	*/

	return 0;
}