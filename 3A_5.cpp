//Program on customer class

#include<iostream>

#include<cstring>

#include<iomanip>

#define max 100

using namespace std;

class Customer
{
	char name[max];
	char address[max];
	int pincode;
	char phonenum[max];
	
	public:
		void getdata();
		void putdata();
};

void Customer :: getdata()
{
	cout<<"\n Enter name of customer : ";
	fflush(stdin);
	gets(name);
	
	cout<<"\n Enter address of customer : ";
    gets(address);
	
	cout<<"\n Enter pincode : ";
	cin>>pincode;
	
	cout<<"\n Enter phone number : ";
	fflush(stdin);
	gets(phonenum);
}

void Customer :: putdata()
{
	cout<<"\n Name"<<setw(30)<<"Address"<<setw(30)<<"Pin Code"<<setw(30)<<"Phone Number";
	cout<<endl<<name<<setw(30)<<address<<setw(30)<<pincode<<setw(30)<<phonenum<<endl;
}
int main()
{
	Customer c[max];
	int n;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	cout<<"\n Total number of records you want to enter : ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"\n Enter record "<<i+1<<" : "<<endl;
		c[i].getdata();
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<"\n Record "<<i+1<<" : "<<endl;
		c[i].putdata();
	}
	
	return 0;
}
