// Menghitung Gaji Bersih

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int gaji_pokok, tunjangan, pajak, gaji_bersih;
	
	cout<<"Program Menghitung Gaji Bersih\n";
	cout<<"Masukkan Gaji Pokok = ";cin>>gaji_pokok;
	
	tunjangan = gaji_pokok*0.2;
	pajak = 0.15*(gaji_pokok+tunjangan);
	gaji_bersih = gaji_pokok+tunjangan-pajak;
	
	cout<<"Gaji Bersih Karyawan Adalah "<<gaji_bersih<<endl;
}
