//Program Hasil Test Karyawan
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main()
{
	int no, nilai, pil;
	char keterangan[20];
	cout<<"Program Hasil Test Karyawan\n";
	cout<<"Masukkan No. Test : ";cin>>no;
	cout<<"Masukkan Pilihan Nilai Test\n";
	cout<<"1. Nilai 50\n";
	cout<<"2. Nilai 60\n";
	cout<<"3. Nilai 80\n";
	cout<<"4. Nilai 90\n";
	cout<<"Masukkan Pilihan : ";cin>>pil;
	
	switch (pil)
	{
		case 1 :
        	nilai = 50;
        	break;
        case 2 :
        	nilai = 60;
        	break;
        case 3 :
        	nilai = 80;
        	break;
        case 4 :
        	nilai = 90;
        	break;
        default : 
			cout << "Maaf, Yang Anda Input Salah\n" << endl;
        	break;
	}
	if (nilai >=60){
		strcpy(keterangan, "LULUS");
	}
    else{
    	strcpy(keterangan, "GAGAL");	
	}
	
	cout<<"NO. Test : "<<no<<endl;	
	cout<<"Hasil Test Karyawan : "<<keterangan<<endl;	
}
