//Program Menghitung Kebutuhan Kalori

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	system("color 17");
	int pil, jk, pilih;
	float tinggi_badan, berat_badan, bmr_pria, bmr_wanita, usia, total_kalori;
	char nama[30];
	
	cout<<"\t\t\t  ====================================================="<<endl<<endl;
	cout<<"\t\t\t  --- PROGRAM MENGHITUNG KEBUTUHAN KALORI PER HARI  ---"<<endl<<endl;
	cout<<"\t\t\t  ====================================================="<<endl<<endl;
	
	hitung :
	cout<<"	Masukkan Nama Anda		: ";cin>>nama;
	cout<<"	Masukkan Tinggi Badan Anda (Cm)	: ";cin>>tinggi_badan;
	cout<<"	Masukkan Berat Badan Anda (Kg)	: ";cin>>berat_badan;
	cout<<"	Masukkan Usia Anda (Tahun)	: ";cin>>usia;
	
	cout<<"\n";
	cout<<"\t\t Jenis Kelamin"<<endl;
	cout<<"	1. Laki-Laki"<<endl;
	cout<<"	2. Perempuan"<<endl;
	cout<<"	Masukkan Pilihan (1, 2) : ";cin>>jk;
	
	cout<<"\n";
	cout<<"\t\t Aktivitas"<<endl;
	cout<<"	1. Tidak berolahraga sama sekali dalam seminggu"<<endl;
	cout<<"	2. Berolahraga sekitar 1-3 kali dalam seminggu"<<endl;
	cout<<"	3. Normal Berolahraga sekitar 3-5 kali dalam seminggu"<<endl;
	cout<<"	4. Sering Berolahraga sekitar 5-6 kali dalam seminggu"<<endl;
	cout<<"	5. Sangat Sering Berolahraga sekitar 2 kali dalam sehari"<<endl;
	cout<<"	Masukkan Pilihan (1, 2, 3, 4, 5) : ";cin>>pil;
	
	switch (jk)
	{
		case 1:
			bmr_pria = 66 + (13.7 * berat_badan) + (5 * berat_badan) - (6.8 * usia);
			if (pil==1) {
				total_kalori = bmr_pria * 1.2;
			} else if (pil==2) {
				total_kalori = bmr_pria * 1.375;
			} else if (pil==3) {
				total_kalori = bmr_pria * 1.55;
			} else if (pil==4) {
				total_kalori = bmr_pria * 1.725;
			} else if (pil==5) {
				total_kalori = bmr_pria * 1.9;
			} else {
				cout<<"Error !"<<endl;
			}
		break;
		case 2:
			bmr_wanita = 655 + (9.6 * berat_badan) + (1.8 * berat_badan) - (4.7 * usia);
			if (pil==1) {
				total_kalori = bmr_wanita * 1.2;
			} else if (pil==2) {
				total_kalori = bmr_wanita * 1.375;
			} else if (pil==3) {
				total_kalori = bmr_wanita * 1.55;
			} else if (pil==4) {
				total_kalori = bmr_wanita * 1.725;
			} else if (pil==5) {
				total_kalori = bmr_wanita * 1.9;
			} else {
				cout<<"Error !"<<endl;
			}
		break;
		default:
			cout<<"Error !"<<endl;
		break;
	}
	
	cout<<"\n";
	cout<<"\n";
	cout<<"	Nama 				: "<<nama<<endl;
	cout<<"	Usia				: "<<usia<<" Tahun "<<endl;
	cout<<"	Kalori Yang Dibutuhkan	Perhari	: "<<total_kalori<<" Kkal "<<endl;
	cout<<"\n";	
	
	cout<<"	====================================================================="<<endl;
	cout<<"	Coba lagi [1]"<<endl;
    cout<<"	Keluar [2]"<<endl;
    cout<<"	====================================================================="<<endl;
    cout<<"	Masukkan Pilihan : ";cin>>pilih;
    cout<<"\n";
    if (pilih==1){
        goto hitung;
    } else if (pilih==2){
	    system("cls");
		cout<<"\t\t\t  ============================"<<endl;
		cout<<"\tTerima kasih telah menggunakan Program Menghitung Kebutuhan Kalori Per Hari"<<endl;
		cout<<"\t\t\t  ============================"<<endl;
	    system("pause");
	}
}
