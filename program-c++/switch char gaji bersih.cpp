//Program Mencari Gaji Bersih Dengan Switch

// jika char maka case 'a'

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int gaji_pokok, gaji_bersih, tunjangan, pajak;
	char golongan;
	cout<<"Program Menghitung Gaji Bersih\n";
	cout<<"******************************\n";
	cout<< "1. Golongan a\n";
	cout<< "2. Golongan b\n";
	cout<< "3. Golongan c\n";
	cout<< "4. Golongan d\n";
	cout<<"Masukkan Golongan (a, b, c, d) : ";
	cin>>golongan;
    
    switch(golongan)
    {
        case 'a' :
        	gaji_pokok = 5000000;
        	break;
    	case 'b' :
        	gaji_pokok = 10000000;
        	break;
        case 'c' :
        	gaji_pokok = 15000000;
        	break;
        case 'd' :
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
