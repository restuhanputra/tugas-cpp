/* Program konversi suhu F-C */
#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	
	cout<<"Masukkan A : ";cin>>a;
	cout<<"Masukkan B : ";cin>>b;
	cout<<"Masukkan C : ";cin>>c;
	
    if(a>b && a>c){
    	cout<<"A paling besar";
	} else if (b>c && b>a){
		cout<<"B paling besar";
	} else {
		cout<<"C paling besar";
	}
}

