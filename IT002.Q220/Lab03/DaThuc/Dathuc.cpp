#include "Dathuc.h"
#include <vector>

void Da_thuc::Nhap()
{
	for (int i = 0; i <= GetBac(); i++)
	{
		cout << "Nhap he so cho bac " << i << " : "; cin >> Heso[i];
	}
}

void Da_thuc::Xuat() // Module được chia xử lý 3 thành phần, phép tính, hệ số và biến, trong đó logic xử lý phép tính được gộp bởi so sánh 
// biến đầu tiên cùng với "dấu của phép tính" giữa các đơn thức
{
	bool First = true;
	for (int i = GetBac(); i >= 0; i--)
	{
		if (Heso[i] == 0)
		{
			continue;
		}
		if (First)
		{
			if (Heso[i] < 0) cout << "-";
			First = false;
		}

		else
		{
			cout << ((Heso[i] > 0) ? " + " : " - ");
		}

		double absv = abs(Heso[i]);  // Logic kiẻm tra và xuất ra hệ số 

		if (i == 0 && absv == 1) // Xử lý trường hợp hệ số tự do = 1 hoặc -1
		{
			cout << absv;
			continue;
		}
		if (absv != 1) // Xuất hệ số
			cout << absv;

		if (i > 0)
		{
			if (i > 1)
				cout << "x^" << i;
			else
				cout << "x";
		}	
	}
	if (First) // Xử lý trường hợp đa thức = 0, nghĩa là vòng lặp for bị bỏ qua
	{
		cout << "0";
	}
} 
Da_thuc operator+(const Da_thuc& a, const Da_thuc &b) // Sử dụng friend function để đảm bảo tính đối xứng 5 + A = A + 5
{

	int Bacmax = (a.Bac >= b.Bac) ? a.Bac : b.Bac;
	Da_thuc Kq(Bacmax);
	for (int i = 0; i <= Bacmax; i++)
	{
		double hs1 = (i > a.Bac) ? 0 : a.Heso[i]; // Xử lý an toàn với hệ số, chúng = 0 nếu bậc của đa thức không tồn tại
		double hs2 = (i > b.Bac) ? 0 : b.Heso[i];

		Kq.Heso[i] = hs1 + hs2;
	}

	return Kq;
}

Da_thuc operator-(const Da_thuc& a, const Da_thuc& b) // Nạp chồng toán tử bằng operator ở dạng Friend function
{

	int Bacmax = (a.Bac >= b.Bac) ? a.Bac : b.Bac;
	Da_thuc Kq(Bacmax);
	for (int i = 0; i <= Bacmax; i++)
	{
		double hs1 = (i > a.Bac) ? 0 : a.Heso[i];
		double hs2 = (i > b.Bac) ? 0 : b.Heso[i];

		Kq.Heso[i] = hs1 - hs2;
	}

	return Kq;
}

double Da_thuc::TinhGiaTri(double x) // Hàm tính giá trị khi biết x 

{
	double sum = 0;
	for (int i = 0; i <= Bac; i++)
	{
		sum += Heso[i] * pow(x, i);
	}
	return sum;
}