//Program Mencari Gaji Bersih Dengan IF

// jika char maka case 'a'

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int gaji_pokok, gaji_bersih, tunjangan, pajak, pil;
	cout<<"Program Menghitung Gaji Bersih\n";
	cout<<"******************************\n";
	cout<< "1. Pilihan 1\n";
	cout<< "2. Pilihan 2\n";
	cout<< "3. Pilihan 3\n";
	cout<< "4. Pilihan 4\n";
	cout<<"Masukkan Pilihan (1, 2, 3, 4) : ";cin>>pil;
    
    if (pil==1) {
    	gaji_pokok = 5000000;
	} else if (pil==2) {
		gaji_pokok = 10000000;
	} else if (pil==3) {
		gaji_pokok = 15000000;
	} else if (pil==4) {
		gaji_pokok = 20000000;
	} else {
		cout << "Hanya Ada 4 Pilihan\n" << endl;
	}
	
    tunjangan = gaji_pokok*0.2;
	pajak = 0.15*(gaji_pokok+tunjangan);
	gaji_bersih = (gaji_pokok+tunjangan)-pajak;
	
	cout<<"Pilihan Adalah "<<pil<<endl;
	cout<<"Total Tunjangan Adalah "<<tunjangan<<endl;
	cout<<"Total Pajak Adalah "<<pajak<<endl;
	cout<<"Gaji Bersih Karyawan Adalah "<<gaji_bersih<<endl;
}
