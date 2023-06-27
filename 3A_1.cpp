//Program on factorial, even - odd check and negative - positive check

#include<iostream>

using namespace std;

class Number
{
	int n;

	public:
		void factorial(int);
		void checkevenodd(int);
		void checkposneg(int);
};

void Number :: factorial(int n)
{
	int i,fact=1;
	
	if(n<0)
		cout<<"\n Factorial of negative number is not possible";
	
	else
	{
		for(i=1;i<=n;i++)
		fact=fact*i;
	
		cout<<"\n Factorial of "<<n<<" is "<<fact;
	}
}

void Number :: checkevenodd(int n)
{
   if(n%2==0)
   cout<<"\n Number is even";
  
   else
   cout<<"\n Number is odd";
}

void Number :: checkposneg(int n)
{
	if(n>-1)
		cout<<"\n Number is positive";
	
	else
		cout<<"\n Number is negative";
}

int main()
{
	Number a;
	int n;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	cout<<"\n Enter number : ";
    cin>>n;
	
	a.factorial(n);
	
	a.checkevenodd(n);
	
	a.checkposneg(n);
	
	return 0;
}
