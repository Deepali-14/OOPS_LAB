//Program using reference variable to array and print value of all index using reference variable

#include<iostream>

#define max 50

using namespace std;

int main()
{
	int a[10];
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	cout<<"\n Enter 10 elements : \n";
	for(int i=0; i<10; i++)
		cin>>a[i];
	
	cout<<"\n Elements using iteration\n";
	cout<<"\n Elements : \n";
	for(int i=0; i<10; i++)
		cout<<a[i]<<"\t";
	
	cout<<"\n Elements using reference variable\n";
	cout<<"\n Elements : \n";	

	int (&b)[10]=a;
	
	for(int i=0; i<10; i++)
		cout<<b[i]<<"\t";

	return 0;
}
