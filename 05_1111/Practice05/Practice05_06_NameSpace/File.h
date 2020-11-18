#ifndef FILE_H
#define FILE_H

//ファイル
namespace File
{
	//テクスチャ
	namespace Texture
	{
		static const int Max = 100;
	}

	//サウンド
	namespace Sound
	{
		static const int Max = 20;
	}
	
	static const int Max = Texture::Max + Sound::Max;
}

#endif // !FILE_H
