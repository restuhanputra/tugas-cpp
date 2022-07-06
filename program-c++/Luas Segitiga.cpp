//Program Membuat Luas Segitiga

#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int alas, tinggi;
	float luas;
	cout<<"Masukkan Alas : "<<endl;
	cin>>alas;
	cout<<"Masukkan Tinggi : "<<endl;
	cin>>tinggi;
	
	luas = 0.5*alas*tinggi;
	cout<<"Maka Luas Segitiga Adalah "<<luas;
}
