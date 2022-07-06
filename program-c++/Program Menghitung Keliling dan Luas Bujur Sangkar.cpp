//Menghitung Keliling dan Luas Bujur Sangkar

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	float sisi, luas, keliling;
	
	cout<<"Program Menghitung Keliling dan Luas Bujur Sangkar\n";
	cout <<"Masukan Nilai Sisi = ";
	cin >> sisi;

	keliling = 4*sisi;
	luas = sisi*sisi;
	cout <<"Keliling Bujur Sangkar adalah = " << keliling << endl;
	cout <<"Luas Bujur Sangkar adalah = " << luas << endl;
}
