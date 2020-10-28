#include "EnemyManager.h"
#include "base.h"
#include "enemy.h"


EnemyManager::EnemyManager()
{
	m_Enemies.clear();
}

EnemyManager::~EnemyManager()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//new�Ŋm�ۂ����eEnemy�N���X���폜
		Base* ptr = *itr;
		delete ptr;
		*itr = nullptr;
	}
	//m_Enemies�ɂ�nullptr��������Base*�̔z�񂪓����Ă���
	m_Enemies.clear();
}

//�G�l�~�[�𐶂ݏo��
class Base* EnemyManager::CreateEnemy(int enemy_type)
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//�ϒ��z��ɋ󂫂�����΂����ɍ��
		if (*itr == nullptr)
		{
			*itr = new Enemy();
			return *itr;
		}
	}
	//�󂫂��Ȃ��̂ŁA�V�K�ɍ����push_back
	Base* ptr = new Enemy();
	m_Enemies.push_back(ptr);
	return ptr;
}

//�G�l�~�[���폜����
bool EnemyManager::DestroyEnemy(class Base* ptr)
{
	//ptr��nullptr�������瑦���^�[��
	if (ptr == nullptr)
	{
		return false;
	}
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		//�ϒ��z���ptr�Ɠ����A�h���X�������̂�����΍폜
		
		if (*itr == ptr)
		{
			delete *itr;
			*itr = nullptr;
			return true;
		}
	}
	return false;
}

//�G�l�~�[�̏��������s����
void EnemyManager::Exec()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		if (*itr != nullptr)
		{
			Base* ptr = *itr;
			ptr->Draw();
		}
	}
}

void EnemyManager::Draw()
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		if (*itr != nullptr)
		{
			Base* ptr = *itr;
			ptr->Draw();
		}
	}
}

class Base* EnemyManager::CheckHit(int x, int y, int width, int height)
{
	for (std::vector<Base*>::iterator itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		if (*itr != nullptr)
		{
			Base* ptr = *itr;
			if (ptr->CheckHit(x, y, width, height))
			{
				return ptr;
			}
		}
	}
	//for���𔲂���ƁA���������z�����Ȃ����ƂɂȂ�̂�nullptr��Ԃ�
	return nullptr;
}