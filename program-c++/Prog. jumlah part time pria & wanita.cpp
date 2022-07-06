//Prog junmlah part time pria & wanita

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

	int nip, jml_part_lk=0, jml_part_wn=0, jml_fulltime = 0;			
	char status, jk;

	while (1)	/* while(1) akan selalu bernilai TRUE karena 1=TRUE */
	{
		cout<<"NIP : ";
		cin>>nip;

		if (nip==999) 
			break;

		cout<<"Status Part Time(P) atau Full Time (F) : ";
		cin>>status;

		cout<<"Jenis kelamin (L/W) : ";
		cin>>jk;
		
		if (status=='P' && jk=='L')
			jml_part_lk++;
		else if (status=='F' && jk=='W')
			jml_part_wn++;
		else
			jml_fulltime++;

		cout<<endl;
	}
	
    	cout <<"Jumlah pegawai Part-time Laki-laki : "<<jml_part_lk<<endl;
    	cout <<"Jumlah pegawai Part-time Wanita    : "<<jml_part_wn<<endl;
    	cout <<"Jumlah pegawai Full Time    : "<<jml_fulltime<<endl;
}

