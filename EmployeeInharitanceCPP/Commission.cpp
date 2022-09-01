#include "Commission.h"
#include "pch.h"
#include <iostream>
using namespace std;
//Constructor
Commission::Commission()
{
	CWage = 0.0;
	comissionRate = 0.0;
	Sales = 0;
	

}
//Overload Constructor
Commission::Commission(int VSales, double VcomissionRate, double VWage)
{
	CWage = VWage;
	Sales = VSales;
	comissionRate = VcomissionRate;
	
}
Commission::~Commission()
{

}

double Commission::GetcomissionRate()
{
	return comissionRate;
}
void Commission::SetcomissionRate(double VcomissionRate)
{
	comissionRate = VcomissionRate;
}

int Commission::GetSales()
{
	return Sales;
}
void Commission::SetSales(int VSales)
{
	Sales = VSales;
}
double Commission::CGetWage()
{
	CWage = Sales * comissionRate;
	return CWage;

}