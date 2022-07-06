//mencetak bilangan dari 1 hingga 10 beserta total
#include <iostream>


using namespace std;
int main()
{
	int A, bilangan, total;
	
	total = 0;
	for (A=1; A<=10; A=A+1)
	{
		total = total + A;
		cout<<"Maka Total Bilangan ke "<<A<<" adalah "<<total<<endl;
	}
}
