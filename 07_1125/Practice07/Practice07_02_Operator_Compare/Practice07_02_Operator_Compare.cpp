#include <iostream>
#include "Employee.h"

int main()
{
	Employee satou(Employee::POST::STAFF);
	Employee deguchi(Employee::POST::PRESIDENT);

	satou.ShowPost();
	deguchi.ShowPost();

	if (deguchi > satou)
	{
		printf("deguchi����̂ق����̂�\n");
	}
	else
	{
		printf("satou����̂ق����̂�...����?\n");
	}

	return 0;
}