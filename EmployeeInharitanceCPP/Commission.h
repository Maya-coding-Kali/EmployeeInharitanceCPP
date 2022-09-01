#pragma once
#include "Employee.h"

class  Commission : public Employee

{
protected:
	int Sales;
	double comissionRate;
	double CWage;
public:
	Commission();
	Commission(int, double, double);
	~Commission();
	void SetSales(int);
	int GetSales();
	void SetcomissionRate(double);
	double GetcomissionRate();
	double CGetWage();

};