// program menghitung jumlah rata-rata bil. ganjil input while 

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a, total, jumlah, ratarata;
	
	a = 1;
	total = 0;
	
	cout<<"Masukkan Berapa Jumlah (Bilangan Ganjil) : ";cin>>jumlah; 
	while(a<=jumlah) 
	{
		cout<<"Bilangan : "<<a;
		total= total + jumlah;
		
		cout<<""<<endl;
		cout<<"Maka Total Bilangan Adalah "<<total<<endl;

		a = a + 2;
	}
	ratarata= total / jumlah;
	cout<<"Maka Rata-Rata Adalah "<<ratarata;
	
}
