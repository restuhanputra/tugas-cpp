//Program Membuat Luas Lingkaran

#include <iostream>
#include <conio.h>
#define phi 3.14

using namespace std;
int main()
{
	int jarijari; 
	float luas;
	cout<<"Masukkan Jari-Jari : "<<endl;
	cin>>jarijari;
	
	luas = phi*jarijari*jarijari;
	cout<<"Maka Luas Lingkaran Adalah "<<luas;
}
