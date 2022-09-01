#include "Salary.h"
#include "pch.h"
#include <iostream>
using namespace std;
//Constructor
Salary::Salary()
{
	CSalary = 0.0;



}
//Overload Constructor
Salary::Salary(double VSalary)
{
	
	CSalary = VSalary;

}
Salary::~Salary()
{

}

double Salary::GetSalary()
{
	return CSalary;
}
void Salary::SetSalary(double VSalary)
{
	CSalary = VSalary;
}
double Salary::CGetWage()
{
	
	CSalary = CSalary / 12;
	return CSalary;
}
   