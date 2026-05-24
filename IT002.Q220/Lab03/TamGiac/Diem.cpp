
#include "Diem.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double pi = 3.14256;

void Diem::NhapDiem()
{
	cout << "Nhap toa do (x,y): "; cin >> x; cin >> y;
	
}

void Diem::XuatDiem()
{
	cout << "Toa do (x,y): " << "(" << x << "," << y << ")" << endl;
	
}

void Diem::TinhTienDiem(double vectox, double vectoy) // Hàm tịnh tiến trong tam giác 
{
	x += vectox;
	y += vectoy;
}

double Diem::KhoangCach(Diem a) // Công thức khoảng cách giữa các điểm trong tam giác
{
	return sqrt(pow(x - a.x, 2) + pow(y - a.y, 2));
}

void Diem::PhongToDiem(double k) // Hàm phóng to hệ số k trong tam giác
{
	x *= k;
	y *= k;
}
void Diem::QuayDiem(double angle) // Hàm tạo phép quay trong tam giác
{
	double x_old = x, y_old = y;
	double angle_rad = angle * pi / 180;
	x = x_old * cos(angle_rad) - y_old * sin(angle_rad);
	y = x_old * sin(angle_rad) + y_old * cos(angle_rad);

}