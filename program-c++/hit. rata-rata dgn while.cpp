//menghitung total rata-rata yang Anda masukan dgn while

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a, total, bilangan, jumlah;
	float ratarata;
	
	a = 1;
	total = 0;
	
	cout<<"Masukkan Berapa Bilangan Yang aka Dijumlahkan : ";cin>>jumlah;
	while(a<=jumlah) 
	{
		cout<<"Masukkan Bilangan Ke  "<<a<<" : ";
		cin>>bilangan;
		
		total= total + bilangan;
		
		cout<<""<<endl;
		cout<<"Maka Total Bilangan Adalah "<<total<<endl;

		a = a + 1;
	}	
	ratarata= total / jumlah;
	cout<<"Maka Rata-Rata Adalah "<<ratarata;
	
}
