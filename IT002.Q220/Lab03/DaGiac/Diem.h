#pragma once

#include <vector>
#include <iostream>
using namespace std;


class Diem
{
private:
	double x, y;
public:
	Diem(int a = 1, int b = 1) : x(a), y(b) {} // Initialzer list để khởi tạo giá trị mặc định cho các điểm
	double KhoangCachDiem(); // Các hàm cơ bản cho việc tính toán.

	void NhapDiem();
	void XuatDiem();
	
	void TinhTienDiem(double vectox, double vectoy);
	double KhoangCachDiem(Diem a);
	void QuayDiem(double angle);

	void PhongToDiem(double k);
	void PhongNhoDiem(double k);

	double GetX()
	{
		return x;
	}
	double GetY()
	{
		return y;
	}

};


