//Program on gcd or hcf, greater of two numbers and to find power

#include<iostream>

using namespace std;

class Number
{
    int a,b;
    
    public:
    	void getdata();
    	void gcd();	   	
    	void greater();
    	void power();
};

void Number :: getdata()
{
	cout<<"\n Enter two numbers : ";
	cin>>a>>b;
}

void Number :: gcd()
{
	int gcd;
	
	for(int i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		gcd=i;
	}
	
	cout<<"\n GCD of "<<a<<" and "<<b<<" is "<<gcd;
}

void Number :: greater()
{
	if(a>b)
		cout<<"\n "<<a<<" is greater";
		
	else
		cout<<"\n "<<b<<" is greater";
}

void Number :: power()
{
	int pow=1;
	
	for(int i=1; i<=b; i++)
		pow=pow*a;
	
	cout<<"\n "<<a<<" raised to the power "<<b<<" is "<<pow;
}

int main()
{
	Number n;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	n.getdata();
	
	n.gcd();
	
	n.greater();
	
	n.power();
		
	return 0;
}
