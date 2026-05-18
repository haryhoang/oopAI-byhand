
#include <iostream>
#include <vector>
#include "Diem.h"
#include "cDaGiac.h"

using namespace std;

int main()
{
    int n = 0;
    cout << "Nhap so luong da giac: "; cin >> n;
    cDaGiac* DaGiac = new cDaGiac[n]; // Khởi tạo, quản lý thủ công thông qua new...
    cout << "-----------------Nhap thong tin cho tung Da Giac:---------------- " << endl; //Hiển thị gạch cho dễ nhìn
    for (int i = 0; i < n; i++)
    {
        DaGiac[i].Nhap();
        
    }
    
    cout << "-----------------Xuat thong tin cho cac Da Giac:------------------ " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "------------------Thong tin da giac: " << i + 1 << endl;
        DaGiac[i].Xuat();
        DaGiac[i].TinhChuVi();
        DaGiac[i].TinhDienTich();

        DaGiac[i].TinhTien(1, 1);
        cout << "Toa do Da Giac sau khi tinh tien boi vector(1,1) la: " << endl;
        DaGiac[i].Xuat();

        DaGiac[i].PhongTo(2);
        cout << "Toa do Da Giac sau khi phong to boi he so k = 2 la: " << endl;
        DaGiac[i].Xuat();

        DaGiac[i].ThuNho(2);
        cout << "Toa do Da Giac sau khi thu nho boi he so k = 1.5 la: " << endl;
        DaGiac[i].Xuat();

        DaGiac[i].Quay(30);
        cout << "Toa do Da Giac sau khi quay 30 do la: " << endl;
        DaGiac[i].Xuat();

        DaGiac[i].PhanLoai();

        
    }
    delete [] DaGiac; // Hỷ bỏ mảng cấp phát 

}
