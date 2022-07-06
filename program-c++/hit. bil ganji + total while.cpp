
//menghitung total rata-rata yang Anda masukan dgn while

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a, total;
	
	a = 1;
	total = 0;
	
	while(a<=10) 
	{
		cout<<"Bilangan : "<<a;
		total= total + a;
		cout<<""<<endl;
		cout<<"Maka Totalnya adalah "<<total<<endl;

		a = a + 2;
	}
	
}
