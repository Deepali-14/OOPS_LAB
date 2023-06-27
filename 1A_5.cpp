//Program on finding second highest element of an array

#include<iostream>

#define max 100

using namespace std;

void sec_largest(int [], int);

int main()
{
	int a[max];
	int n;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	cout<<"\n Enter size of array : ";
	cin>>n;
	
	cout<<"\n Enter elements : \n";
	for(int i=0; i<n; i++)
		cin>>a[i];
		
	cout<<"\n Entered elements : \n";
	for(int i=0; i<n; i++)
		cout<<" "<<a[i];
	cout<<endl;
		
	sec_largest(a,n);
		
	return 0;
}

void sec_largest(int a[], int n)
{
	int max1=a[0], max2=a[0];
	
	for(int i=1; i<n; i++)
	{
		if (a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
			
		else if (a[i]<max1 && a[i]>max2)
			max2=a[i];
	}
	
	cout<<"\n Second largest element of the array = "<<max2<<endl;
}
