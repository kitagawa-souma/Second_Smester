#include <iostream>
#include "Character.h"

int main()
{
	//�X�R�[�v���쐬����character�̎����𖾊m�ɂ���
	{
		Character character("�R�c���Y", 50, 10);
#ifdef PATTERN02
		PrintParam(&character);
		PrintParam(&character);
#else
		PrintParam(character);
		PrintParam(character);
#endif // PATTERN02
	}
}