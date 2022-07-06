//Program Mencari Titik Tengah P1 Dan P2

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int x1, x2, y1, y2, p1, p2;
	cout<<"Program Mencari Titik Tengah P1 Dan P2\n";
	cout<<"Masukkan Nilai X1 = ";cin>>x1;
	cout<<"Masukkan Nilai X2 = ";cin>>x2;
	cout<<"Masukkan Nilai Y1 = ";cin>>y1;
	cout<<"Masukkan Nilai Y1 = ";cin>>y2;
	
	p1 = (x1+x2)/2;
	p2 = (y1+y2)/2;
	//ut<<"Titik Tengah P1 Adalah ("<<p1<<","<<p2<<")";
	cout<<"Titik Tengah P2 Adalah "<<p1<<endl;
	cout<<"Titik Tengah P2 Adalah "<<p2<<endl;
}
