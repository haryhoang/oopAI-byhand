#pragma once

#include "iostream"
class PhanSo
{
private:
	int iTu, iMau;
public:

	PhanSo(int a=1, int b=1) : iTu(a), iMau(b) {}
	friend PhanSo operator + (const PhanSo &a, const PhanSo &b );
	
	void NhapPhanSo();
	void XuatPhanSo();
	void RutGon(int a, int b);



	int getTu() {
		return iTu;
	}
	int getMau() {
		return iMau;
	}

	void SetTuMau(int t, int m)
	{
		this->iTu = t;
		this->iMau = m;
	}


};

