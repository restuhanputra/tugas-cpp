//Prog Jumlah diterima & ditolak While
#include <iostream>
//#include <conio.h>
using namespace std;
int main()
{

	int no_test, nilai, umur, diterima=0, ditolak=0;

	while (1)	/* while(1) akan selalu bernilai TRUE karena 1=TRUE */
	{
		cout<<"\n";
		cout<<"\tNo test	: ";cin>>no_test;
		

		if (no_test==999) 
			break;

		cout<<"\tUmur	: ";cin>>umur;
		cout<<"\tNilai	: ";cin>>nilai;
		
		if ((umur>16 && umur<25) && (nilai>70 && nilai<101)) {
			cout<<"\tDiterima !";
			diterima++;
		}
		else {
			cout<<"\tDitolak !";
			ditolak++;
		}
		//else
		//	cout<<"Error !";
		cout<<"\n";
	}
	cout<<"\n";
    cout <<"\tJumlah Yang Diterima	: "<<diterima<<endl;
    cout <<"\tJumlah Yang Ditolak	: "<<ditolak<<endl;
}
