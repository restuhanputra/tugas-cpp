//Program Konversi Fahrenheit ke celcius

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	float f, suhu;

	cout<<"Program Konversi Fahrenheit Ke Celcius\n";
	cout <<"Masukan Suhu Fahrenheit = ";
	cin >> f;

	//suhu = (0,55)*(f-32);
	suhu = (f-32)/1,8;
	cout <<"Konversi Fahrenheit Ke Celcius Adalah " << suhu << endl;
	
}
