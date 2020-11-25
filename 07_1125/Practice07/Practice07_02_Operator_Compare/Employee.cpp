#include "Employee.h"
#include <stdio.h>

Employee::Employee(Employee::POST post_)
	: m_Post(post_)
{

}

void Employee::ShowPost()
{
	switch (m_Post)
	{
	case STAFF:				printf("•½ŽÐˆõ\n"); break;
	case SECTION_CHIEF:		printf("‰Û’·\n"); break;
	case MANAGER:			printf("•”’·\n"); break;
	case PRESIDENT:			printf("ŽÐ’·\n"); break;
	}
}

Employee::POST Employee::GetPost() const
{
	return m_Post;
}

bool Employee::operator > (const Employee& emp_) const
{
	if (m_Post > emp_.GetPost())
	{
		return true;
	}
	return false;
}