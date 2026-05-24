#pragma once


#include <iostream>
#include "Diem.h"


using namespace std;

class cTamGiac
{
private:
	Diem A, B, C;
public:
	cTamGiac(Diem a = Diem(0, 1), Diem b = Diem(0, 1), Diem c = Diem(1, 0)) : A(a), B(b), C(c) {};
	void Nhap();
	void Xuat();

	string PhanLoai();
	void TinhChuVi();
	void TinhDienTich();

	void TinhTien(double vectox, double vectoy);
	void PhepQuay(double goc);
	void PhongTo(double k);	
};
