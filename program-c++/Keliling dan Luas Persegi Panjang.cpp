//Menghitung Keliling dan Luas Persegi Panjang
#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	float panjang, lebar, luas, keliling;

	cout <<"Masukan nilai panjang = ";
	cin >> panjang;
	cout <<"Masukan nilai lebar = ";
	cin >> lebar;

	keliling = 2 * (panjang * lebar);
	luas = panjang * lebar;
	cout <<"Keliling persegi panjang adalah = " << keliling << endl;
	cout <<"Luas persegi panjang adalah = " << luas << endl;
}

