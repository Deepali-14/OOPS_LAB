//Program to enter 10 different values

#include<iostream>

using namespace std;

int main()
{
	int a[20];
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	cout<<"\n Enter 10 valid numbers"<<endl;
	
	for(int i=0; i<10; i++)
	{
		cout<<" "<<i+1<<"th number : ";
		cin>>a[i];
		
		for(int j=i-1; j>-1; j--)
		{
			if(a[j]==a[i])
			{
				--i;
				cout<<"\n Duplicate number..:( Please enter again..!"<<endl;
			}
		}
	}
	
	return 0;
}
