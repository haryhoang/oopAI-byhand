
#include <iostream>
#include "Mangmotchieu.h"
using namespace std;


int main()
{
    Mangmotchieu arr(6);
    arr.Xuat();

    cout << endl << "So phan tu co cung gia tri 5 la: ";
    arr.DemGiaTri(5);

    cout << endl << "Mang arr co tinh chat Tang khong: ";
    if (arr.KiemTraTang() == true)
    {
        cout << "Co: " << endl;
    }
    else
        cout << "Khong: " << endl;

    cout << "Mang sau khi sap xep la: ";
    arr.SapXep();
    arr.Xuat();

    cout << endl << "Phan tu le co gia tri nho nhat la: " << arr.TimPhanTuLeMin() << endl;
    cout << "Phan tu la so nguyen to co gia tri lon nhat la: " << arr.TimSNTMax() << endl;

}
