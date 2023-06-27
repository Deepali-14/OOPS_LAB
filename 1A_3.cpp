//Program on calculation of electricity bill

#include<iostream>

using namespace std;

int main()
{
	int units;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	cout<<"\n Enter units consumed : ";
	cin>>units;
	
	float bill;
	
	if (units <= 100)
	bill = units * 2.25;
	
	else if (units > 100 && units <= 200)
	bill = 100 * 2.25 + (units - 100) * 3.00;
	
	else if (units > 200 && units <= 500)
	bill = 100 * 2.25 + 100 * 3.00 + (units - 200) * 4.25;
	
	else if (units > 500)
	bill = 100 * 2.25 + 100 * 3.00 + 300 * 4.25 + (units - 500) * 7.00;
	
	cout<<"\n Total bill = Rs."<<bill<<endl;

	return 0;
}
