//mencetak bilangan dari 1 hingga 10 beserta total dengan while
#include <iostream>

using namespace std;
int main()
{
	int a, total;
	
	a = 1;
	total = 0;
	
	while(a<=10) 
	{
		cout<<"nilai ke "<<a<<endl;
		total=total + a;
		cout<<"Total adalah "<<total<<endl;
		a = a + 1;
	}	
	
	
}
