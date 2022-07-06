/* Program konversi suhu */
#include <iostream>
using namespace std;

int main()
{
	int C;
	float F, R;

	cout <<"			TABEL SUHU"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"Celcius	   Fahrenheit	    Reamur"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	
	for (C=0; C<=100; C=C+10)   /* C+=10 sama juga dgn C=C+10 */
	{
      		F = 9/5 * ( C + 32 );
			R = 0.8 * ( C + 32 );
			cout<<C<<"		"<<F<<"		"<<R<<endl;
	}
}

