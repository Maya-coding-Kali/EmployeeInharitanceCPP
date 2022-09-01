#include "Hourly.h"
#include "pch.h"
#include <cmath>
#include <iostream>
using namespace std;
//Constructor
Hourly::Hourly()
{
	CWage = 0.0;
	CHours = 0;
	ChourlyRate = 0.0;
}
//Overload Constructor

Hourly::Hourly(double VHours, double VhourlyRate, double VWage)
{
	CWage = VWage;
	CHours = VHours;
	ChourlyRate = VhourlyRate;
}
Hourly::~Hourly()
{

}
//Hours
double Hourly::GetHours()
{
	
		return CHours;
	
	
}
void Hourly::SetHours(double VHours)
{
	CHours = VHours;
}
//OT Hours
double Hourly::GetHourlyRate()
{

	return ChourlyRate;


}
void Hourly::SetHourlyRate(double VHourlyRate)
{
	
		ChourlyRate = VHourlyRate;
		
	
}


double Hourly::GetWage()
{
	if (CHours <= 40)
	{

		CWage = CHours * ChourlyRate;
		return CWage;
	}
	else
	{
		double x;
		double y;
		y = 40 * ChourlyRate;
		x = (CHours - 40) * (ChourlyRate * 1.5);
		CWage = x + y;
		return CWage;
	}

}