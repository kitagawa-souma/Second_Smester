#ifndef UNIT_H
#define UNIT_H

#include "common.h"
#include "Definition.h"

class Unit
{
public:
	Unit();
	~Unit();

	void PrintStats();

private:
	Status status;
};


#endif // UNIT_H