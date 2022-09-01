#pragma once
#include "Employee.h"

class  Pieceworker : public Employee

{
protected:
	int Pieces;
	double PricePerPiece;
	double CWage;
public:
	Pieceworker();
	Pieceworker(int, double, double);
	~Pieceworker();
	void SetPieces(int);
	int GetPieces();
	void SetPricePerPiece(double);
	double GetPricePerPiece();
	double CGetWage();

};