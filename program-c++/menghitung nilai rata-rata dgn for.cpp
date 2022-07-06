//menghitung nilai rata-rata dgn for
#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	float a, bilangan, jumlah, total;
	float ratarata;
	
	total = 0;
	cout<<"Masukkan Berapa Bilangan Yang aka Dijumlahkan : ";cin>>jumlah;
	for (a=1; a<=jumlah; a=a+1)
	{
		cout<<"Masukkan Bilangan Ke  "<<a<<" : ";
		cin>>bilangan;
		
		total= total + bilangan;
		
		cout<<""<<endl;
		cout<<"Maka Total Bilangan Adalah "<<total<<endl;
	}
	ratarata= total / jumlah;
	cout<<"Maka Rata-Rata Adalah "<<ratarata;
}
