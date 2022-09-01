#pragma once
#include "Employee.h"

class  Salary : public Employee

{
protected:
	
	double CSalary;

public:
	Salary();
	Salary( double);
	~Salary();
	void SetSalary(double);
	double GetSalary();
	double CGetWage();


};