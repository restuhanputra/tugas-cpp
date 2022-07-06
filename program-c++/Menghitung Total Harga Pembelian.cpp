//Menghitung Total Harga Pembelian

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	float jumlah_barang, harga_satuan, total_harga;

	cout <<"Masukan Jumlah Barang = ";
	cin >> jumlah_barang;
	cout <<"Masukan Harga Satuan = ";
	cin >> harga_satuan;

	total_harga = jumlah_barang*harga_satuan;
	cout <<"Total Harga Pembelian = " <<total_harga << endl;
}
