//Program to generate and compute series x/1! + x/2! + x/3! + .....

#include<iostream>

using namespace std;

int main()
{
	int n;
	float x;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	cout<<"\n Enter value of x and range of series respectively : ";
	cin>>x>>n;
	cout<<endl;
	
	for(int i=1; i<=n; i++)
	{
		cout<<" "<<x<<"/"<<i<<"! ";
		if(i!=n)
			cout<<" + ";
	}
	
	float sum=0;
	int fact=1;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=i; j>=1; j--)
			fact=fact*j;
	
		sum=sum+(x/fact);
		fact=1;
	}
	
	cout<<"\n After computing series result = "<<sum<<endl;
		
	return 0;
}
