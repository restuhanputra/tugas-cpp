#include <iostream>
using namespace std;

int main()
{
	int cp, sp, result;
	
	cout<<"Enter Cost price of item : ";cin>>cp;
	cout<<"Enter Selling price of item : ";cin>>sp;
	
	result = sp-cp;
	
	if(result>0){
		cout<<"profit : "<<result;
	} else {
		if(result<0){
			cout<<"Loss : "<<-(result);
		} else {
			cout<<"No Profit no loss";
		}
	}
	
}
