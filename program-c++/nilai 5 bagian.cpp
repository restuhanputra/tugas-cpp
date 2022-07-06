#include <iostream>
using namespace std;

int main()
{
	int nilai;
	
	cout<<"Masukkan Nilai : ";cin>>nilai;
	
	if (nilai<101 && nilai>=80){
		cout<<"Nilai Anda : A";
	} else if (nilai<80 && nilai>69){
		cout<<"Nilai Anda : B";
	} else if (nilai<70 && nilai>54){
		cout<<"Nilai Anda : C";
	} else if (nilai<55 && nilai>49){
		cout<<"Nilai Anda : D";
	} else {
		cout<<"Nilai Anda : E";
	}
	
}
