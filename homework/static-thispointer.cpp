#include <iostream>
#include<cmath>
using namespace std;

class PhanSo {
private:
	int tuSo, mauSo;
public:
	PhanSo(int ts, int ms) : tuSo(1), mauSo(1)
	{
		this->tuSo = ts;
		if (ms != 0)
			this->mauSo = ms;
		else
		{
			cout << "Mau so khong hop le: " << endl;
			mauSo = 1;
		}
		soluong++;
	}
	~PhanSo() { cout << "Object da bi huy" << endl; }
	void Nhap();
	void Xuat();
	int gcd(int tuSo, int mauSo);
	void rutGon();
	static int soluong;
	static int getsoluong();
};
int PhanSo::soluong = 0;
int PhanSo::getsoluong()
{
	return soluong;
}
void PhanSo::Nhap()
{
	cout << "Nhap tuso: " << endl; cin >> tuSo;
	cout << "Nhap mauSo: " << endl; cin >> mauSo;
	while (mauSo == 0)
	{
		cout << "Mau so phai khac 0 " << endl; cin >> mauSo;
	}
}
void PhanSo::Xuat()
{
	cout << "Phan So can tim la: "  ;
	if ( mauSo == 1)
	{
		cout << tuSo << endl;

	}
	else if (mauSo < 0)
	{
		cout << tuSo * -1 << "/" << mauSo * -1 << endl;

	}
	else
	{
		cout << tuSo << "/" << mauSo << endl;
	}
}
int PhanSo::gcd(int tuSo, int mauSo)
{
	if (mauSo == 0) return tuSo;
	return gcd(mauSo, tuSo % mauSo);
}
void PhanSo::rutGon()
{
	int ucln = gcd(abs(tuSo), abs(mauSo));
	tuSo /= ucln;
	mauSo /= ucln;
}
int main()
{
	PhanSo A(1, 0);
	A.Xuat();
	cout << "Soluong: " << PhanSo::getsoluong() << endl;

	{
		PhanSo B(3, 1);
		B.Nhap();
		B.rutGon();
		B.Xuat();
		cout << "Soluong: " << B.getsoluong() << endl;
	}


	return 0;
}
