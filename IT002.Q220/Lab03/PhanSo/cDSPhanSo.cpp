#include "cDSPhanSo.h"
#include "iostream"
#include "vector"


using namespace std;




int SNT(int a) // Hàm phụ thực hiện chức năng kiểm tra SNT
{
	if (a <= 1)
		return 0;
	for (int i = 2; i <= a / 2; i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}

void cDSPhanSo::Nhap()
{
	for (int i = 0; i < spt; i++)
	{
		cout << "Nhap Phan so thu " << i + 1 << endl ;
		Arr[i].NhapPhanSo();
	}
}
void cDSPhanSo::Xuat()
{
	for (int i = 0; i < spt; i++)
	{
		cout << "Phan so thu " << i + 1 << " la: "; 
		
		Arr[i].XuatPhanSo();
		cout << endl;
	}
}
void cDSPhanSo::TimPhanSoCoTuSoLaSNTMax() // Logic hàm tìm phân số có tử số là SNT và Max
{
	int max = 1;
	PhanSo Kq = Arr[0];
	for (int i = 0; i < spt; i++)
	{
		if (SNT(Arr[i].getTu()) )
		{
			if (max == 1 || Arr[i].getTu() > max)
			{
				max = Arr[i].getTu();
				Kq = Arr[i];
			}
		}
	}
	if (max == 1)
	{
		cout << "Khong co phan tu co Tuso la SNT " << endl ;
	}
	else
	{
		cout << "Phan tu co Tuso la SNT max la: ";
		Kq.XuatPhanSo();
		cout << endl;
	}

}

void cDSPhanSo::TimPhanSoNhoNhat() // Hàm tìm phân số có giá trị Min
{
	double min = double(Arr[0].getTu()) / (Arr[0].getMau()); // Set phần tử đầu là min và s sánh với các thành viên còn lại
	PhanSo Kq = Arr[0];
	for (int i = 1; i < spt; i++)
	{
		double value = double(Arr[i].getTu()) / (Arr[i].getMau());
		if (value < min)
		{
			min = value;
			Kq = Arr[i];
		}
	}
	cout << "Phan so nho nhat la: "; Kq.XuatPhanSo(); cout << endl;
}

void cDSPhanSo::SapXepTang()
{
	for (int i = 0; i < spt-1; i++) // Sử dụng thuật toán bubble sort
	{
		for (int j = 0; j < spt - i - 1; j++)
		{
			double truoc = double(Arr[j].getTu()) / (Arr[j].getMau());
			double sau = double(Arr[j + 1].getTu()) / (Arr[j + 1].getMau());

			if (truoc >= sau) // Logic hoán đổi vị trí thủ công
			{
				int iTutam = Arr[j].getTu();
				int iMautam = Arr[j].getMau();

				Arr[j].SetTuMau(Arr[j + 1].getTu(), Arr[j + 1].getMau());
				Arr[j + 1].SetTuMau(iTutam, iMautam);
			}

		}
	}
}

void cDSPhanSo::SapXepGiam()
{
	for (int i = 0; i < spt - 1; i++) // Sử dụng thuật toán bubble sort cho chiều ngược lại
	{
		for (int j = 0; j < spt - i - 1; j++)
		{
			double truoc = double(Arr[j].getTu()) / (Arr[j].getMau());
			double sau = double(Arr[j + 1].getTu()) / (Arr[j + 1].getMau());

			if (truoc <= sau) // Logic hoán đổi đối tượng (thực hiện shallow copy)
			{
				PhanSo temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = temp;
			}

		}
	}
}

