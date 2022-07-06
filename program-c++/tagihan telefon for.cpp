#include <iostream>
using namespace std;

int main()
{
	int a, hit, panggil;
	float b, total;
	
	total = 0;
	cout<<"Masukkan berapa penghitungan panggilan : ";cin>>hit;
	for (a=1; a<=hit; a=a+1)
	{
		cout<<"Masukkan berapa panggilan : ";cin>>panggil;
		
		if (panggil==100){
			b = 200;
		} else if (panggil==50){
			b = 0.6*200;
		} else if (panggil>50){
			b = 0.5*200;
		} else if (panggil>200){
			b = 0.4*200;
		} else {
			cout<<"error !";
		}
		
		total = total + b;
		
	}
		
		cout<<""<<endl;
		cout<<"Maka Tagihan Telefon Adalah "<<total<<" usd ";
}
