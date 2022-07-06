//Program Mencetak Upah Karyawan per Jam
#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int upj, pil;
	cout<<"Program Mencetak Upah Karyawan per Jam \n";
	cout<<"Masukkan Pilihan\n";
	cout<<"1. Pilihan 1\n";
	cout<<"2. Pilihan 2\n";
	cout<<"3. Pilihan 3\n";
	cout<<"4. Pilihan 4\n";
	cout<<"Masukkan Pilihan : ";cin>>pil;
	
	if (pil==1) {
        upj = 5000;
    } else if (pil==2) {
    	upj = 6000;
	} else if (pil==3) {
    	upj = 7000;
	} else if (pil==4) {
    	upj = 8000;
	} else {  
		cout << "Maaf, Yang Anda Input Salah\n" << endl;
	}
	cout<<"Upah Per Jam Karyawan Adalah "<<"Rp"<<"."<<upj<<endl;
}
