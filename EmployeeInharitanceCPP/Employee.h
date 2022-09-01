#pragma once
class Employee
{

protected:
	char* firstName;
	char* lastName;
	char* Address;
	char* DOB;


public:
	Employee(); // default Constructor 
	Employee(char*, char*, char*, char*); // Overloaded constructor 
	~Employee();
	void SetfirstName(char*);
	char* GetfirstName();
	void SetlastName(char*);
	char* GetlastName();
	void SetAddress(char*);
	char* GetAddress();
	void SetDOB(char*);
	char* GetDOB();


};