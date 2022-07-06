// prog. menukar nilai 2 variabel
#include "iostream"
using namespace std;

int main()
{
	int a, b, temp;
	cout<<"\nEnter two number : ";
	cin>>a>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"\n After swapping numbers are : ";
	cout<<a<<"	"<<b;
	
	return 0;
}
