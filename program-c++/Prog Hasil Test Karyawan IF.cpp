//Program Hasil Test Karyawan dengan IF
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main()
{
	int no, nilai;
	char keterangan[20];
	cout<<"Program Hasil Test Karyawan\n";
	cout<<"Masukkan No. Test : ";cin>>no;
	cout<<"Masukkan Nilai : ";cin>>nilai;
	
	if (nilai >=60) {
		strcpy(keterangan, "LULUS");
	} else {
    	strcpy(keterangan, "GAGAL");	
	}
		
	cout<<"NO. Test : "<<no<<endl;	
	cout<<"Hasil Test Karyawan : "<<keterangan<<endl;
	
	//if (nilai >=60)
		//cout<<"Anda LULUS";
	//else
		//cout<<"Anda Tidak Lulus";	
}h
