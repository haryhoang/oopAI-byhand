 

#include <iostream>
#include "cDSPhanSo.h"
#include "PhanSo.h"
using namespace std;


int main()
{
    cDSPhanSo A(4);
    A.Nhap();
    A.Xuat();

    cout << "Day Phan so sap xep giam dan la: " << endl;
    A.SapXepGiam();
    A.Xuat();

    cout << "Day Phan so sap xep tang dan la: " << endl;
    A.SapXepTang();
    A.Xuat();

    A.TimPhanSoCoTuSoLaSNTMax();
    A.TimPhanSoNhoNhat();

    PhanSo Tong(0, 1);
    for (int i = 0; i < 4; i++)
    {
        Tong = Tong +  A[i];
    }
    cout << "Tong cua cac phan so trong cDSPhanSo la: ";
    Tong.XuatPhanSo();
}

