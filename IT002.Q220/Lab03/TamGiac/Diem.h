#pragma once

using namespace std;

class Diem
{
private:
	double x, y;
public:
	Diem(int x = 0, int y = 0) :  x(x), y(y) {}

	void NhapDiem();
	void XuatDiem();

	void TinhTienDiem(double vectox, double vectoy);
	double KhoangCach(Diem a);
	void QuayDiem(double angle);

	void PhongToDiem(double k);

};