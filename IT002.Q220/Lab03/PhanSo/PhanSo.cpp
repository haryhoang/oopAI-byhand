
#include "PhanSo.h"
#include "iostream"

using namespace std;




int  Uochung(int a, int b) // Hàm tìm ước chung
{
	a = abs(a), b = abs(b);
	if (b == 0) return a;
	return Uochung(b, a % b);
}
void PhanSo::RutGon(int a, int b) // Hàm rút gọn phân số
{
	int UC = Uochung(a, b);
	this->iTu /= UC;
	this->iMau /= UC;
}
PhanSo operator + (const PhanSo& a, const PhanSo& b) // Nạp chồng toán tử cộng giữa các phân số
{
	PhanSo kq(1,1);
	kq.iTu = a.iTu * b.iMau + a.iMau * b.iTu;
	kq.iMau = a.iMau * b.iMau;

	return kq;
}

void PhanSo::NhapPhanSo()
{
	cout << "Nhap tu so: "; cin >> iTu;
	cout << "Nhap mau so: "; cin >> iMau;
}
void PhanSo::XuatPhanSo()
{
	RutGon(iTu, iMau);

	if (iMau < 0)
	{
		iTu *= -1;
		iMau *= -1;
	}


	if (iMau == 1)
	{
		cout << iTu;
	}
	else if (iTu == 0)

		cout << "0";
	
	else
		cout << iTu << "/" << iMau;
}