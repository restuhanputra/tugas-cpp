//Sum

#include <iostream>
using namespace std;

int sum(int, int);

int main()
{
	int x, y, s;
	cout<<"Masukkan angka pertama : ";
	cin>>x;
	cout<<"Masukan angka kedua : ";
	cin>>y;
	
	s = sum(x, y);
	cout<<"Sum : "<<s;
}

int sum(int a, int b)
{
	int total;
	total = a+b;
	return total;
}
