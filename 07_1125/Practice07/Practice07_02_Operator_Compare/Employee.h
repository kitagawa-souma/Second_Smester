#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
	enum POST
	{
		STAFF,			//平社員
		SECTION_CHIEF,	//課長
		MANAGER,		//部長
		PRESIDENT,		//社長
	};

	Employee(POST post_);

	void ShowPost();
	POST GetPost() const;

	// > をオーバーロード
	bool operator > (const Employee& emp_) const;

private:
	POST m_Post;
	int m_Salary;
};

#endif // !EMPLOYEE_H
