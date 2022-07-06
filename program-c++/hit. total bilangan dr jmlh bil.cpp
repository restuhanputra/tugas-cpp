//mencetak bilangan dari 1 hingga 10 beserta total
#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int a, bilangan, jumlah, total;
	
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
}
