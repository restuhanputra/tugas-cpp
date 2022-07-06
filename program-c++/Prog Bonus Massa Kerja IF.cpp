//Program Bonus Masa Kerja Karyawan IF

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int nip, masa_kerja, bonus;
	char nama[25];
	
	cout<<"Program Bonus Masa Kerja Karyawan\n";
	cout<<"Masukkan Nama Pegawai : ";cin>>nama;
	cout<<"Masukkan NIP Pegawai : ";cin>>nip;
	cout<<"Masukkan Masa Kerja Pegawai : ";cin>>masa_kerja;
		
	if (masa_kerja > 5) {
		bonus = masa_kerja*100000;
		cout<<""<<endl;
	}
	else {
		cout<<"Maaf Tidak Ada Bonus Untuk Anda"<<endl;	
	}
		
	cout<<"Nama Pegawai : "<<nama<<endl;
	cout<<"NIP Pegawai : "<<nip<<endl;
	cout<<"Masa Kerja : "<<masa_kerja<<" "<<"Tahun"<<endl;
	cout<<"Total Gaji Bonus : "<<bonus;
}
