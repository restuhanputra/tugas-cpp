//Menghitung Total Harga Pembelian

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	float barang, jumlah, total;
	
	cout<<"Program Menghitung Total Harga\n";
	cout<<"Daftar Harga\n";
	cout<<"1. Susu = 40000\n";
	cout<<"2. Gula = 20000\n";
	cout<<"3. Roti = 8000\n";
	cout<<"Pilih Barang\n";
	cin>>barang;
	cout<<"Masukkan Jumlah Barang\n";
	cin>>jumlah;
	
	if(barang==1)
		total=40000*jumlah;
	else if(barang==2)
		total=20000*jumlah;
	else
		total=8000*jumlah;
	
	cout<<"Total Harga Barang Adalah "<<total<<endl;
}
