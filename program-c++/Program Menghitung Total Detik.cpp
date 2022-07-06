//Program Menghitung Total Detik

#include <iostream>
#include <conio.h>
#define j 3600
#define m 60

using namespace std;
int main()
{
	int jam, menit, detik, total, a, b;
	
	cout<<"Program Menghitung Total Detik\n";
	cout<<"Masukkan Jam = ";cin>>jam;
	cout<<"Masukkan Menit = ";cin>>menit;
	cout<<"Masukkan Detik = ";cin>>detik;
	
	a = jam*j;
	b = menit*m;
	total = a + b + detik;
	cout<<"Hasil Total Detiknya Adalah "<<total<<endl;
}
