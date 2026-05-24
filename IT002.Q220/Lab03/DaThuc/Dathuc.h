#pragma once

#include "iostream"
#include "vector"
using namespace std;


class Da_thuc
{
private:
	int Bac;
	vector <double> Heso;
public:
	Da_thuc(int B = 1) : Bac(B), Heso(B+1, 0) {}
	void Nhap();
	void Xuat();

	friend Da_thuc operator + (const Da_thuc &a,  const Da_thuc &b);
	friend Da_thuc operator - (const Da_thuc& a, const Da_thuc &b);
	double TinhGiaTri(double x);

	
	int GetBac() const { return Bac; }
	double GetHeSo(int i) const { return Heso[i]; }
	

};

