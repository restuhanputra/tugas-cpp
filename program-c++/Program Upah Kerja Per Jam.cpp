//Program Mencetak Upah per Jam Karyawan
#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int upj;
	char gol;
	cout<<"Program Mencetak Upah per Jam Karyawan \n";
	cout<<"Masukkan Golongan\n";
	cout<<"1. Golongan a\n";
	cout<<"2. Golongan b\n";
	cout<<"3. Golongan c\n";
	cout<<"4. Golongan d\n";
	cout<<"Masukkan Golongan : ";cin>>gol;
	
	switch (gol)
	{
		case 'a' :
        	upj = 5000;
        	break;
        case 'b' :
        	upj = 6000;
        	break;
        case 'c' :
        	upj = 7000;
        	break;
        case 'd' :
        	upj = 8000;
        	break;
        default : 
			cout << "Maaf, Yang Anda Input Salah\n" << endl;
        break;
	}
	cout<<"Upah Per Jam Karyawan Adalah "<<upj<<endl;
}
