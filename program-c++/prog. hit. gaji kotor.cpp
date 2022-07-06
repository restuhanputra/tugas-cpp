#include <iostream>
using namespace std;

int main()
{
	float basic_salary, gross_salary, hra, da;
	
	cout<<"Enter basic salary of Employee : ";cin>>basic_salary;
	
	//ha = tunjangan
	//da = bonusw
	
	if(basic_salary<1500){
		hra = 0.1*basic_salary;
		da = 0.9*basic_salary;
	} else {
		hra = 500;
		da = 0.98 * basic_salary;
	}
	
	gross_salary = basic_salary + hra + da;
	cout<<"HRA : "<<hra<<endl;
	cout<<"DA : "<<da<<endl;
	cout<<"Gross Salary : "<<gross_salary;
}
