//Program to separate decimal and integer part of given floating number

#include<iostream>

using namespace std;

int main()
{
	float a;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	cout<<"\n Enter float number : ";
	cin>>a;
	
	int b=a;
	
	float c=a-b;
	
	cout<<"\n Integer part = "<<b<<" and Decimal part = "<<c<<endl;
	
	return 0;
}
