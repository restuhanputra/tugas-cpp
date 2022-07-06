//Program Menghitung Bonus Karyawan
#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int nip, pil, mk, hasil;
	char nama[30];
	cout<<"Program Menghitung Bonus Karyawan\n";
	cout<<"Masukkan NIP : ";cin>>nip;
	cout<<"Masukkan Nama : ";cin>>nama;
	cout<<"******************************\n";
	cout<< "1. Masa Kerja 3 Tahun\n";
	cout<< "2. Masa Kerja 5 Tahun\n";
	cout<< "3. Masa Kerja 8 Tahun\n";
	cout<< "4. Masa Kerja 10 Tahun\n";
	cout<<"Masukkan Pilihan (1, 2, 3, 4) : ";cin>>pil;
	
	switch (pil)
	{
		case 1 :
        	mk = 3;
        	break;
        case 2 :
        	mk = 5;
        	break;
        case 3 :
        	mk = 8;
        	break;
        case 4 :
        	mk = 10;
        	break;
        default : 
			cout << "Maaf, Yang Anda Input Salah\n" << endl;
        break;
	}
	if (mk > 5){
		hasil = mk*100000;}
	else {
		cout<<"Maaf, Bonus karyawan diberikan jika masa kerja lebih dari 5 tahun\n";
	}
	cout<<"NIP : "<<nip<<endl;
	cout<<"Nama : "<<nama<<endl;
	cout<<"Bonus Karyawan Adalah "<<hasil<<endl;
}
