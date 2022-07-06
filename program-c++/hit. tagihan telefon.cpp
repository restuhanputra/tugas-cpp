//prog. hitung panggilan

#include <iostream>
using namespace std;

int main()
{
	int panggilan, tagihan;
	
	cout<<"Masukkan Jumlah Panggilan : ";cin>>panggilan;
	
	if (panggilan==100){
		tagihan = 200;
	} else if(panggilan>100 && panggilan<150){
		tagihan = 200 + ((panggilan - 100) * 0.6);
	} else if(panggilan>=150 && panggilan<200){
		tagihan = 200 + (50*0.6) + ((panggilan - 150) * 0.5);
	} else {
		tagihan = 200 + (50*0.6) + (50 * 0.5) + ((panggilan - 200) * 0.4);
	}
	
	cout<<"Maka tagihanya adalah "<<tagihan<<" usd";
	
}
