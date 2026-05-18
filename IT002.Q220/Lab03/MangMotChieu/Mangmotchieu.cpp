#include "Mangmotchieu.h"
#include "iostream"
#include "vector"

using namespace std;

void Mangmotchieu::Xuat()
{
	for (int i = 0; i < spt; i++)
	{
		cout << cArray[i] << " ";
	}
}

void Mangmotchieu::DemGiaTri(int x) // Nhập giá trị x và kiểm tra xem có phần tử nào giống x không?
{
	int cnt = 0;
	for (int i = 0; i < spt; i++)
	{
		if (cArray[i] == x)
		{
			cnt++;
		}
	}
	cout << "Co: " << cnt << " gia tri trong mang trung voi x = " << x;
}

bool Mangmotchieu::KiemTraTang() // So sánh logic tăng, nếu có gia trị i+1 mà nhỏ hơn hoặc bằng giá trị i thì mang không còn
// tính chất tăng
{ 
	for (int i = 0; i < spt - 1; i++)
	{
		if (cArray[i] >= cArray[i + 1])
		{
			return false;
		}
	}
	return true;
}

int Mangmotchieu::TimPhanTuLeMin() // Hàm tìm phần tử lẻ có giá trị nhỏ nhất
{
	double min = 0.5;
	for (int i = 0; i < spt; i++)
	{
		if (cArray[i] % 2 != 0) // Lọc các giá trị lẻ trước
		{
			if (min == 0.5 || cArray[i] <= min) // Sử dụng logic hoán đổi
			{
				min = cArray[i];
			}
		}
	}
	if (min == 0.5) // Nếu min vẫn bằng 0.5 tức là không có phần tử nào thỏa mãn
		return -1;

	return min;

}

int SNT(int n)
{
	if (n <= 1)
		return 0;
	for (int i = 2; i <= n / 2; i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}

int Mangmotchieu::TimSNTMax() // Hàm tìm giá trị snt max
{
	double max = 0.5;
	for (int i = 0; i < spt; i++)
	{
		if (SNT(cArray[i])) // Lọc giá trị SNT
		{
			if (max == 0.5 || cArray[i] >= max )
				max = cArray[i];
		}
	}
	if (max == 0.5)
		return -1;
	
		return max;
}

void Mangmotchieu::SapXep() // Sử dụng thuật toán Bubble sort
{
	for (int i = 0; i < spt - 1; i++)
	{
		for (int j = 0; j < spt - i - 1; j++)
		{
			if (cArray[j] > cArray[j+1])
			{
				int key = cArray[j];
				cArray[j] = cArray[j+1];
				cArray[j+1] = key;

			}
		}
	}
}

