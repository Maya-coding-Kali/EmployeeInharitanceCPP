#include "Employee.h"
#include "pch.h"
#include <iostream>
using namespace std;
Employee::Employee()
{
	firstName = (char*)"";
	lastName = (char*)"";
	Address = (char*)"";
	DOB = (char*)"";
}
Employee::Employee(char* VfirstName, char* VlastName, char* VAddress, char* VDOB)
{
	firstName = VfirstName;
	lastName = VlastName;
	Address = VAddress;
	DOB = VDOB;
}
Employee::~Employee()
{

}

char* Employee::GetfirstName()
{
	return firstName;
}
void Employee::SetfirstName(char* VfirstName)
{
	
	firstName = VfirstName;

	
}

char* Employee::GetlastName()
{
	return lastName;
}
void Employee::SetlastName(char* VlastName)
{
	lastName = VlastName;
}

char* Employee::GetAddress()
{
	return Address;
}
void Employee::SetAddress(char* VAddress)
{
	Address = VAddress;
}

char* Employee::GetDOB()
{
	return DOB;
}
void Employee::SetDOB(char* VDOB)
{
	DOB = VDOB;
}