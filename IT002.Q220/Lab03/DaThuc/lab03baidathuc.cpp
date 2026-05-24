
#include <iostream>
#include "Dathuc.h"
int main()
{
    cout << "Nhap da thuc A(x): " << endl;
    Da_thuc A(4);

    A.Nhap();
    A.Xuat();
    cout << endl << "Nhap da thuc B(x): " << endl;

    Da_thuc B(4);

    B.Nhap();
    B.Xuat();

    Da_thuc TongDaThuc = A + B;
    Da_thuc HieuDaThuc = B - A;

    cout << endl << "Tong Da thuc A(x) + B(x) la: ";
    TongDaThuc.Xuat();
    cout << endl << "Hieu Da thu B(x) - A(x) la: ";
    HieuDaThuc.Xuat();

    cout << endl << "Gia tri cua B(x) tai x = 5 la: " << B.TinhGiaTri(5);
}

