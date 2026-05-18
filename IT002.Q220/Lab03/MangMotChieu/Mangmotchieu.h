#pragma once


#include "vector"
#include "iostream"
#include <cstdlib> 
#include <ctime>

using namespace std;

class Mangmotchieu
{
private:
	int spt;
	vector <int> cArray;
public:
	Mangmotchieu (int k) : spt (k), cArray(k, 0.0) 
	{
		int max = 100, min = 0;
		srand(time(0));
		cArray.resize(spt);
		for (int i = 0; i < spt; i++)
		{
			cArray[i] = min + rand() % (max - min + 1);
		}
	}

	void Xuat();
	void DemGiaTri(int x);

	bool KiemTraTang();
	int TimPhanTuLeMin();
	int TimSNTMax();
	void SapXep();

};

