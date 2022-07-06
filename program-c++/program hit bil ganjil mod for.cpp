// program menghitung jumlah total bil. ganjil dari 1-10

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int i, total;
	
	cout<<"Menghitung jumlah bil. ganjil"<<endl;
	cout<<"Bil. Ganjil"<<endl;
	total = 0;
	for (i=1; i<=10; i++)
	if (i%2 != 0)
	{
		 cout<<"Bilangan : "<<i<<endl;
		total = i + total;
	}
	
	cout<<"Total Bilangan Adalah "<<total<<endl;
}
