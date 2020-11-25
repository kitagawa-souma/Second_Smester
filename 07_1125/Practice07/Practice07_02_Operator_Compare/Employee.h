#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
	enum POST
	{
		STAFF,			//���Ј�
		SECTION_CHIEF,	//�ے�
		MANAGER,		//����
		PRESIDENT,		//�В�
	};

	Employee(POST post_);

	void ShowPost();
	POST GetPost() const;

	// > ���I�[�o�[���[�h
	bool operator > (const Employee& emp_) const;

private:
	POST m_Post;
	int m_Salary;
};

#endif // !EMPLOYEE_H
