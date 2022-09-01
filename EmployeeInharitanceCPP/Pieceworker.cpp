#include "Pieceworker.h"
#include "pch.h"
#include <iostream>
using namespace std;
//Constructor
Pieceworker::Pieceworker()
{
	CWage = 0.0;
	PricePerPiece = 0.0;
	Pieces = 0;


}
//Overload Constructor
Pieceworker::Pieceworker(int VPieces, double VPricePerPiece, double VWage)
{
	CWage = VWage;
	Pieces = VPieces;
	PricePerPiece = VPricePerPiece; 

}
Pieceworker::~Pieceworker()
{

}

double Pieceworker::GetPricePerPiece()
{
	return PricePerPiece;
}
void Pieceworker::SetPricePerPiece(double VPricePerPiece)
{
	PricePerPiece = VPricePerPiece;
}

int Pieceworker::GetPieces()
{
	return Pieces;
}
void Pieceworker::SetPieces(int VPieces)
{
	Pieces = VPieces;
}
double Pieceworker::CGetWage()
{
	CWage = (Pieces * PricePerPiece)/3;
	return CWage;

}