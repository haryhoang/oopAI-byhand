#pragma once
#include "vector"
#include "iostream"
#include "PhanSo.h"

using namespace std;


class cDSPhanSo
{
private:
	int spt;
	vector <PhanSo> Arr;
public:
	cDSPhanSo(int n) : spt(n), Arr(n, PhanSo(1,1))  {
		
	}
	void Nhap();
	void Xuat();

	void TimPhanSoLonNhat();
	void TimPhanSoNhoNhat();

	void TimPhanSoCoTuSoLaSNTMax();
	void SapXepTang();
	void SapXepGiam();

	PhanSo operator [] (int index) // Nạp chồng toán tử [] lấy PhanSo từ index của mảng
	{
		return Arr[index];
	}
};

