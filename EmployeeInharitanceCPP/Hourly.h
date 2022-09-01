#pragma once
#include "Employee.h"

class  Hourly : public Employee

{
protected:

	double CHours;
	double ChourlyRate;
	double CWage;
	
	
public:
	Hourly();
	Hourly(double, double, double);
	~Hourly();
	double GetWage();
	void SetHours(double);
	double GetHours();
	void SetHourlyRate(double);
	double GetHourlyRate();



};