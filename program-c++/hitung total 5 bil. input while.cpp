//menghitung total 5 bilangan yang Anda masukan dgn while

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a, total, bilangan;
	
	a = 1;
	total = 0;
	
	while(a<=5) 
	{
		cout<<"Masukkan Bilangan Ke "<<a<<" : ";cin>>bilangan;
		total= total + bilangan;
		cout<<""<<endl;
		cout<<"Totalnya bilangan ke "<<a<<" adalah "<<total<<endl;

		a = a + 1;
	}	
	
}
