//menghitung total 5 bilangan yang Anda masukan

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a, bilangan, total;
	
	total = 0;
	for (a=1; a<=5; a=a+1)
	{
		cout<<"Masukkan Bilangan Ke "<<a<<" : ";cin>>bilangan;
		total= total + bilangan;
		cout<<""<<endl;
		cout<<"Maka Totalnya adalah "<<total<<endl;
	}
}
