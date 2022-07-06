#include <iostream>
using namespace std;

int main()
{
	int no, panggil;
	float b, total;

	while (1)	/* while(1) akan selalu bernilai TRUE karena 1=TRUE */
	{
		cout<<"No : ";cin>>no;

		if (no==999) 
			break;

		cout<<"Masukkan berapa panggilan : ";cin>>panggil;
		
		if (panggil==100){
			b = 200;
		} else if (panggil==50){
			b = 0.6*50;
		} else if (panggil>50){
			b = 0.5*50;
		} else if (panggil>200){
			b = 0.4*200;
		} else {
			cout<<"error !";
		}
		
		total = total + b;

		cout<"\n";
	}
	
    	cout<<"Maka Tagihan Telefon Adalah "<<total<<" usd ";
}
