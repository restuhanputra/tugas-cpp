// Menghitung Volume Silinder

#include <iostream>
#include <conio.h>
#define phi 3.14

using namespace std;
int main()
{
	float r, t, v;
	
	cout<<"Program Menghitung Volume Silinder\n";
	cout<<"Masukkan Jari-Jari = ";cin>>r;
	cout<<"Masukkan Tinggi = ";cin>>t;
	
	v = phi*(r*r)*t;
	cout<<"Volume Silinder Adalah "<<v<<endl;
}
