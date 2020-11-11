#include <iostream>
#include "CharacterBase.h"
#include "Enemy00.h"
#include "Enemy01.h"

int  main()
{
	//static_cast(�Öق̌^�ϊ������݂�������m�̕ϊ����A�����I�ɍs�����@
	//static_cast<�ω�����^��>(�ϊ����̒l(�ϐ�))
	double PI = 3.1415926535;
	int iPI1 = PI;	//�ÖٓI�ϊ��ŁA�G���[�͏o�Ȃ����Awarning C4244���o��
	int iPI2 = static_cast<int>(PI);//C++�I�L���X�g
	int iPI3 = int(PI);//C++�I�L���X�g
	int iPI4 = (int)PI;//C����I�L���X�g

	//dynamic_cast
	//(���N���X����A�h���N���X�փ_�E���L���X�g����ۂɁA�^�������Ƀ`�F�b�N������@)
	//dynamic_cast<�ω�����^��>(�ϊ����̒l(�ϐ�))

	Enemy01 enemy01;
	CharacterBase* pBase = &enemy01;	//����̃|�C���^�ϐ��ցA�h���̃A�h���X����
	//Enemy00* pEnemy00 = pBase;			//�h���̃|�C���^�ϐ��ցA����̃A�h���X����(error!)
	Enemy00* pEnemy00 = dynamic_cast<Enemy00*>(pBase);
	Enemy01* pEnemy01 = dynamic_cast<Enemy01*>(pBase);

	//reinterpret_cast
	//�|�C���^�^��ʂ̃|�C���^���֋����ϊ�����
	int j = 0;
	//char* c = &j;//����͕����Ⴄ�̂ŃG���[
	char* c = reinterpret_cast<char*>(&j);//int*��char*�֋����ϊ�
	c[0] = 1;
	c[1] = 1;
	std::cout << "j : " << j << std::endl;

	//�댯�ȃL���X�g(pBase�������Ă���A�h���X�́AEnemy00�̂��̂ł���ۏ؂͂Ȃ�)
	Enemy00 enemy00;
	pEnemy01 = reinterpret_cast<Enemy01*>(&enemy00);
	//pEnemy01->SetVariation(10);	//Enemy00���Ȃ��������̈�ɃA�N�Z�X���Ă��܂�!
	//pEnemy01->SetRoutine(5);

	//���N���X�ɁA�h���N���X�����ł��邩���ʂ��邽�߂̕ϐ��Ȃǂ�p�ӂ��Ďg�p����
	switch (pBase->GetEnemyType())
	{
	case EnemyType_Zako00:
		pEnemy00 = reinterpret_cast<Enemy00*>(&pBase);
		break;
	case EnemyType_Zako01:
		pEnemy01 = reinterpret_cast<Enemy01*>(pBase);
		pEnemy01->SetVariation(1);
		pEnemy01->SetRoutine(10);
		break;
	default:
		break;
	}

	//const_cast(���i�g��Ȃ��Aconst�𖾎��I�ɊO���^�C�~���O�͂��قǂȂ�)
	const int iConst = 100;
	//iConst = 200;
	//int* pNonConst = &iConst;
	int* pNonConst = const_cast<int*>(&iConst);

	//const���O�����̂ő���ł���悤�ɂȂ�(����͂���)
	*pNonConst = 200;
	std::cout << "iConst : " << iConst << std::endl;

	//pNonConst = const_cast<int*>(&giConst);
	//*pNonConst = 400; //�O���[�o���ϐ��̏ꍇ��O���X���[�����

	//MSDoc�ɂ��ƁAconst���O�����̈�G�̃A�N�Z�X�͖���`

	return 0;
}