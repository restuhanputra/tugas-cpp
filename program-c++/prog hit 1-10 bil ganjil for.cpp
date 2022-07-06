// program menghitung jumlah total bil. ganjil dari 1-10

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a, total;
	
	total = 0;
	for (a=1; a<=10; a=a+2)
	{
		//cout<<"Masukkan Bilangan Ke "<<a<<" : ";cin>>bilangan;
		cout<<"Bilangan : "<<a;
		total= total + a;
		cout<<""<<endl;
		cout<<"Maka Totalnya adalah "<<total<<endl;
	}
}
