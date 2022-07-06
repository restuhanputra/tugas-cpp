//Menghitung Keliling dan Luas Lingkaran
#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	float jari , keliling , luas;
	float phi=3.14;
	cout <<"Masukan nilai jari = ";
	cin >> jari;
	
	keliling =2 * phi * jari;
	luas = phi * jari * jari;
	cout <<"Keliling lingkaran adalah = " << keliling << endl;
	cout <<"Luas lingkaran adalah = " << luas << endl;
}

