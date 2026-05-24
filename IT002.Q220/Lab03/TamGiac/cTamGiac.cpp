
#include <iostream>
#include "cTamGiac.h"
#include "Diem.h"
 
using namespace std;


void cTamGiac::Nhap() // Hàm nhập các đỉnh của tam giác
{
	cout << "Nhap dinh A: "; A.NhapDiem();
	cout << "Nhap dinh B: "; B.NhapDiem();
	cout << "Nhap dinh C: "; C.NhapDiem();
}

void cTamGiac::Xuat() // Hàm xuất ra tọa độ các đỉnh tam giác
{
	cout << "Dinh A: " << endl; A.XuatDiem();
	cout << "Dinh B: " << endl; B.XuatDiem();
	cout << "Dinh C: " << endl; C.XuatDiem();
}

void cTamGiac::TinhChuVi() // Hàm tính chu vi tam giac
{
	double canhAB = A.KhoangCach(B);
	double canhAC = A.KhoangCach(C);
	double canhBC = B.KhoangCach(C);

	double chuvi = canhAB + canhAC + canhBC;
	cout << "Chu vi cua tam giac: " << chuvi << endl;
}

void cTamGiac::TinhDienTich() // Hàm tính diện tíhch thông qua công thức nửa chu vi tam giác
{
	double canhc = A.KhoangCach(B);
	double canhb = A.KhoangCach(C);
	double canha = B.KhoangCach(C);

	double chuvi = canhc + canhb + canha;
	double p = chuvi / 2;
	double s = sqrt(p * (p - canha) * (p - canhb) * (p - canhc));
	cout << "Dien tich cua tam giac: " << s << endl;
}

void cTamGiac::TinhTien(double vectox, double vectoy) // Hàm tịnh tiến vector cho 1 điểm trong tam giác
{
	A.TinhTienDiem(vectox, vectoy);
	B.TinhTienDiem(vectox, vectoy);
	C.TinhTienDiem(vectox, vectoy);
}

void cTamGiac::PhongTo(double k ) // Hàm phóng to với hệ số k trong tam giác
{
	A.PhongToDiem(k), B.PhongToDiem(k), C.PhongToDiem(k);
}

void cTamGiac::PhepQuay(double angle) // Hàm xoay tam giác quoanh trục một góc alpha
{
	A.QuayDiem(angle), B.QuayDiem(angle), C.QuayDiem(angle);
}

string cTamGiac::PhanLoai()
{
    double a = A.KhoangCach(B);
    double b = B.KhoangCach(C);
    double c = C.KhoangCach(A);
    double eps = 1e-9; // Tạo độ lệch khi so sánh (nhầm lẫn do số thực chênh lệch)


    if (a + b <= c + eps || a + c <= b + eps || b + c <= a + eps)
    {
        return "Khong phai tam giac.";
    }

    if (abs(a - b) < eps && abs(b - c) < eps) // Nghĩa là a = b; và b = c => a=b=c (Tam Giac đều)
    {
        return "Tam giac deu";
    }

    bool vuong = (abs(a * a + b * b - c * c) < eps || // Xem thử có phải tam giác vuong ko (trừ nhau theo đlý pytagore)
        abs(a * a + c * c - b * b) < eps ||
        abs(b * b + c * c - a * a) < eps);

    bool can = (abs(a - b) < eps || abs(a - c) < eps || abs(b - c) < eps); // chỉ cần hai trong số ba cặp canh trừ nhau < 0,....(nghĩa là gần như bằng nhau)

    if (vuong && can) return "Tam giac vuong can";
    if (vuong) return "Tam giac vuong";
    if (can) return "Tam giac can";

    return "Tam giac thuong";
}