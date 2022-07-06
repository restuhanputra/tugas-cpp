//Program bonus mas kerja

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int nip, masa_kerja, bonus, pil;
	char nama[25];
	
	cout<<"Program Bonus Masa Kerja\n";
	cout<<"Masukkan Nama Pegawai : ";cin>>nama;
	cout<<"Masukkan NIP Pegawai : ";cin>>nip;
	cout<<"Masukkan Masa Kerja Pegawai : ";cin>>masa_kerja;
	cout<<"Pil Bonus : ";cin>>pil;
	
	switch(pil)
	{
		case 1 :
			bonus = masa_kerja*100000;
			break;
		default :
			cout<<"Pilihan Bonus Tidak Ada"<<endl;
	}	
	cout<<"Nama Pegawai : "<<nama<<endl;
	cout<<"NIP Pegawai : "<<nip<<endl;
	cout<<"Masa Kerja : "<<masa_kerja<<" "<<"Tahun"<<endl;
	if (masa_kerja > 5)
		cout<<"Total Gaji Bonus : "<<bonus; 
	else
		cout<<"Maaf Tidak Ada Bonus Untuk Anda"<<endl;	
}
