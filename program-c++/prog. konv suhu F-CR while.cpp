/* Program konversi suhu */
#include <iostream>
using namespace std;

int main()
{
	int C;
	float F, R;

	cout <<"			TABEL SUHU"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"Fahrenheit	   Celcius	    Reamur"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	
	F = 0;
	while (F<=100)   /* C+=10 sama juga dgn C=C+10 */
	{
      		C = (0.55 *  F) - 32 ;
			R = (1.25 *  C) - 32 ;
			cout<<F<<"		"<<C<<"		"<<R<<endl;
			
			F=F+10;
	}
}
