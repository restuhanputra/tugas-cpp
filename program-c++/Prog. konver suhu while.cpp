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
	
	C = 0;
	while (C<=100)   /* C+=10 sama juga dgn C=C+10 */
	{
      		F = 9/5 * ( C + 32 );
			R = 0.8 * ( C + 32 );
			cout<<C<<"		"<<F<<"		"<<R<<endl;
			
			C=C+10;
	}
}

