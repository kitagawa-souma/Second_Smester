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
		printf("deguchi‚³‚ñ‚Ì‚Ù‚¤‚ªˆÌ‚¢\n");
	}
	else
	{
		printf("satou‚³‚ñ‚Ì‚Ù‚¤‚ªˆÌ‚¢...‚©‚à?\n");
	}

	return 0;
}