//Program to swap private data members of two different classes

#include<iostream>

using namespace std;

class Number2;

class Number1
{
	int a;
	
	public:
		void getdata()
		{
			cout<<"\n Enter value of a : ";
			cin>>a;
		}
		
		void showdata()
		{
			cout<<"\n Value of a : ";
			cout<<a<<endl;
		}
		
		friend void swap(Number1 &, Number2 &);
};

class Number2
{
	int b;
	
	public:
		void getdata()
		{
			cout<<"\n Enter value of b : ";
			cin>>b;
		}
		
		void showdata()
		{
			cout<<"\n Value of b : ";
			cout<<b<<endl;
		}
		
		friend void swap(Number1 &, Number2 &);
};

void swap(Number1 &m, Number2 &n)
{
	int temp;
	
	temp=m.a;
	
	m.a=n.b;
	
	n.b=temp;
}

int main()
{
	Number1 m;
	Number2 n;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	m.getdata();
	
	n.getdata();
	
	swap(m,n);
	
	m.showdata();
	
	n.showdata();
		
	return 0;
}
