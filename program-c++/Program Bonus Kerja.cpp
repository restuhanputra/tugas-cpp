//Program Mencari Bonus Karyawan

#include <iostream>
#include <conio.h>
//#include <stdlib.h>
using namespace std;
int main()
{
	int nip, mk, hasil;
	char nama[15];
	cout<<"Program Menghitung Bonus Karyawan\n";
	cout<<"Masukkan NIP : ";cin>>nip;
	cout<<"Masukkan Nama : ";cin>>nama;
	cout<<"Masukkan Masa Kerja : ";cin>>mk;
	
	if (mk >= 5){
		hasil = mk*100000;
	}
	else {
		cout<<"Maaf, Bonus karyawan diberikan jika masa kerja lebih dari 5 tahun\n";
	}
	
	cout<<"Bonus Karyawan Adalah "<<hasil<<endl;
	//getch();
	return 0;
}
