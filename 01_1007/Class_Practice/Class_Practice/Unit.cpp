
#include "Unit.h"
#include "common.h"

Unit::Unit()
{
	status._hp = 0;
	status._str = 0;
	status._mag = 0;
	status._tec = 0;
	status._spd = 0;
	status._def = 0;
	status._luc = 0;
	status._mde = 0;
}

Unit::~Unit()
{

}

void Unit::PrintStats()
{
	printf("m_hp = %d\n", status._hp);
	printf("m_str = %d\n", status._str);
	printf("m_mag = %d\n", status._mag);
	printf("m_tec = %d\n", status._tec);
	printf("m_spd = %d\n", status._spd);
	printf("m_def = %d\n", status._def);
	printf("m_luc = %d\n", status._luc);
	printf("m_mde = %d\n", status._mde);
}
