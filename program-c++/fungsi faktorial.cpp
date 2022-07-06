#include <iostream>
using namespace std;

int faktorial(int);

int main()
{
	int x, f;
	cout<<"Masukkan angka : ";
	cin>>x;
	f = faktorial(x);
	cout<<"Faktorial : "<<f;
}

int faktorial(int a)
{
	int faktorial =1;
	while(a>=1){
		faktorial = faktorial*a;
		a--;
	}
	return faktorial;
}
