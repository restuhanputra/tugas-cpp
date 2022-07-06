//Prog. menetukan bil. ganjil / genap

#include <iostream>
using namespace std;
int main()
{
	int bil;			
	cout <<"Masukkan bilangan :"; 
	cin>>bil;
	if ( bil % 2 == 0)
		cout <<"Bil. genap"<<endl<<endl;
	else if (bil % 2 == 1)
		cout <<"Bil. ganjil"<<endl<<endl;
}


