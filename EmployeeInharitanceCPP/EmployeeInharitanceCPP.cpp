// EmployeeInharitanceCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Commission.h"
#include "Employee.h"
#include "Salary.h"
#include "Hourly.h"
#include "Pieceworker.h"
#include "pch.h"
using namespace std;
void PrintHourly(Hourly*);
void PrintSales(Commission*);
void PrintSalary(Salary*);
void PrintPieceworker(Pieceworker*);

int main()
{
	//All of these below have the names address and DOB called through the inhearitence  from employee class
	// hourly set hours and call the print function
	Hourly* HourlyObj1;
	HourlyObj1 = new Hourly();
	HourlyObj1->SetfirstName((char*)"Maya");
	HourlyObj1->SetlastName((char*)"Kali");
	HourlyObj1->SetAddress((char*)"7051 No. 1 Road");
	HourlyObj1->SetDOB((char*)"1991/18/05");
	HourlyObj1->SetHours(45);
	HourlyObj1->SetHourlyRate(10.0);
	cout << "Hourly Wages: " << endl;
	PrintHourly(HourlyObj1);
	//Comission set Sale and commission as well call the print function
	Commission* CommissionObj1;
	CommissionObj1 = new Commission();
	CommissionObj1->SetfirstName((char*) "Maya");
	CommissionObj1->SetlastName((char*)"Kali");
	CommissionObj1->SetAddress((char*)"7051 No. 1 Road");
	CommissionObj1->SetDOB((char*)"1991/18/05");
	CommissionObj1->SetSales(20000);
	CommissionObj1->SetcomissionRate(.20);
	cout << "Sales Wages:" << endl;
	PrintSales(CommissionObj1) ;
	//Salary sets Yearly earningsand the print function
	Salary* SalaryObj1;
	SalaryObj1 = new Salary();
	SalaryObj1->SetfirstName((char*)"Maya");
	SalaryObj1->SetlastName((char*)"Kali");
	SalaryObj1->SetAddress((char*)"7051 No. 1 Road");
	SalaryObj1->SetDOB((char*)"1991/18/05");
	SalaryObj1->SetSalary(90000);
	cout << "Salary Wages:" << endl;
	PrintSalary(SalaryObj1);
	//Piecworker set piece and Price as well call the print function
	Pieceworker* PieceworkerObj1;
	PieceworkerObj1 = new Pieceworker();
	PieceworkerObj1->SetfirstName((char*)"Maya");
	PieceworkerObj1->SetlastName((char*)"Kali");
	PieceworkerObj1->SetAddress((char*)"7051 No. 1 Road");
	PieceworkerObj1->SetDOB((char*)"1991/18/05");
	PieceworkerObj1->SetPieces(2000);
	PieceworkerObj1->SetPricePerPiece(40);
	cout << "Sales Wages:" << endl;
	PrintPieceworker(PieceworkerObj1);
}
void PrintHourly(Hourly* HourlyObj1)
{
	cout << "First Name: " << HourlyObj1->GetfirstName() << endl;
	cout << "Last Name: " << HourlyObj1->GetlastName() << endl;
	cout << "Adress: " << HourlyObj1->GetAddress() << endl;
	cout << "DOB: " << HourlyObj1->GetDOB() << endl;
	cout << "Hours: " << HourlyObj1->GetHours() << endl;
	cout << "Pay: " << HourlyObj1->GetHourlyRate() << endl;
	cout << "Wage: " << HourlyObj1->GetWage() << endl << endl;
	
}
void PrintSales(Commission* CommissionObj1)
{
	cout << "First Name: " << CommissionObj1->GetfirstName() << endl;
	cout << "Last Name: " << CommissionObj1->GetlastName() << endl;
	cout << "Adress: " << CommissionObj1->GetAddress() << endl;
	cout << "DOB: " << CommissionObj1->GetDOB() << endl;
	cout << "Sales: " << CommissionObj1->GetSales() << endl;
	cout << "Commission Rate: " << CommissionObj1->GetcomissionRate() << endl;
	cout << "Comissions: " << CommissionObj1->CGetWage() << endl << endl;


}
void PrintSalary(Salary* SalaryObj1)
{
	cout << "First Name: " << SalaryObj1->GetfirstName() << endl;
	cout << "Last Name: " << SalaryObj1->GetlastName() << endl;
	cout << "Adress: " << SalaryObj1->GetAddress() << endl;
	cout << "DOB: " << SalaryObj1->GetDOB() << endl;
	cout << "Sales: " << SalaryObj1->GetSalary() << endl;
	cout << "Monthly Wage: " << SalaryObj1->CGetWage() << endl << endl;


}
void PrintPieceworker(Pieceworker* PieceworkerObj1)
{
	cout << "First Name: " << PieceworkerObj1->GetfirstName() << endl;
	cout << "Last Name: " << PieceworkerObj1->GetlastName() << endl;
	cout << "Adress: " << PieceworkerObj1->GetAddress() << endl;
	cout << "DOB: " << PieceworkerObj1->GetDOB() << endl;
	cout << "Sales: " << PieceworkerObj1->GetPieces() << endl;
	cout << "Pay: " << PieceworkerObj1->GetPricePerPiece() << endl;
	cout << "Amount earned per piece: " << PieceworkerObj1->CGetWage() << endl << endl;


}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
