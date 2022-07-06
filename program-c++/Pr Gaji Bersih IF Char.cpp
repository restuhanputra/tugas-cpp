//Program Mencari Gaji Bersih Dengan IF

// jika char maka case 'a'

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int gaji_pokok, gaji_bersih, tunjangan, pajak;
	char gol;
	cout<<"Program Menghitung Gaji Bersih\n";
	cout<<"******************************\n";
	cout<< "1. Golongan a\n";
	cout<< "2. Golongan b\n";
	cout<< "3. Golongan c\n";
	cout<< "4. Golongan d\n";
	cout<<"Masukkan Golonagn (a, b, c, d) : ";cin>>gol;
    
    if (gol== 'a' || gol=='A') {
    	gaji_pokok = 5000000;
	} else if (gol== 'b' || gol=='B') {
		gaji_pokok = 10000000;
	} else if (gol=='c' || gol== 'C') {
		gaji_pokok = 15000000;
	} else if (gol=='d' || gol=='D') {
		gaji_pokok = 20000000;
	} else {
		cout << "Hanya Ada 4 Pilihan\n" << endl;
	}
	
    tunjangan = gaji_pokok*0.2;
	pajak = 0.15*(gaji_pokok+tunjangan);
	gaji_bersih = (gaji_pokok+tunjangan)-pajak;
	
	cout<<"Pilihan Adalah "<<gol<<endl;
	cout<<"Total Tunjangan Adalah "<<tunjangan<<endl;
	cout<<"Total Pajak Adalah "<<pajak<<endl;
	cout<<"Gaji Bersih Karyawan Adalah "<<gaji_bersih<<endl;
}
