#include <iostream>
using namespace std;

int main()
{
	int ram_age, sulal_age, ajay_age;
	
	cout<<"Enter Ram Age : ";cin>>ram_age;
	cout<<"Enter Sulal Age : ";cin>>sulal_age;
	cout<<"Enter Ajay Age : ";cin>>ajay_age;
	
	if(ram_age<sulal_age && ram_age<ajay_age){
		cout<<"Ram is Youngest";
	} else if (sulal_age<ram_age && sulal_age<ajay_age){
		cout<<"Sulal is Youngest";
	} else if (sulal_age==ram_age && sulal_age==ajay_age){
		cout<<"Mereka Sama semua umurnya";	
	} else {
		cout<<"Ajay is Younger";
	}
}
