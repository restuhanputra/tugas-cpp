//Program Mencari Gaji Bersih Dengan Switch int

// jika char maka case 'a'

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int golongan, gaji_pokok, gaji_bersih, tunjangan, pajak;
	cout<<"Program Menghitung Gaji Bersih\n";
	cout<<"Masukkan Golongan (1, 2, 3, 4) : ";
	cin>>golongan;
    
    switch(golongan)
    {
        case 1 :
        	gaji_pokok = 5000000;
        	break;
        case 2 :
        	gaji_pokok = 10000000;
        	break;
        case 3 :
        	gaji_pokok = 15000000;
        	break;
        case 4 :
        	gaji_pokok = 20000000;
        	break;
        default : 
			cout << "Hanya Ada 4 Golongan\n" << endl;
        break;
    }
    
    tunjangan = gaji_pokok*0.2;
	pajak = 0.15*(gaji_pokok+tunjangan);
	gaji_bersih = gaji_pokok+tunjangan-pajak;
	
	cout<<"Total Golongan Adalah "<<golongan<<endl;
	cout<<"Total Tunjangan Adalah "<<tunjangan<<endl;
	cout<<"Total Pajak Adalah "<<pajak<<endl;
	cout<<"Gaji Bersih Karyawan Adalah "<<gaji_bersih<<endl;
}
