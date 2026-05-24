// lab03bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Diem.h"
#include "cTamGiac.h"
#include <iostream>

int main()
{
    int n;
    cout << "Nhap so luong tam giac: "; cin >> n;
    cTamGiac* Mang = new cTamGiac[n];

    cout << "Nhap thong tin cho mang chua tam giac: " << endl;
    for (int i = 0; i < n; i++)
    {
        Mang[i].Nhap();
    }

    cout << "Xuat thong tin cho mang chua tam giac: " << endl;

    for (int i = 0; i < n; i++)
    {
        Mang[i].Xuat();
        cout << Mang[i].PhanLoai() << endl;
        Mang[i].TinhChuVi();
        Mang[i].TinhDienTich();

        cout << "Tam giac sau khi tinh tien theo vector (2,3) la:  " << endl;
        Mang[i].TinhTien(2,3);
        Mang[i].Xuat();

        cout << "Tam giac sau khi phong to k = 0.8 (lan) la: " << endl;
        Mang[i].PhongTo(0.8);
        Mang[i].Xuat();

        cout << "Tam giac sau khi quay mot goc alpha = 30 la: " << endl;
        Mang[i].PhepQuay(30);
        Mang[i].Xuat();

        
    }

    delete[] Mang;
}
