//Program to implement inline function for calculation of power, average and cube of a variable

#include<iostream>

using namespace std;

class Number
{
	int a,b,c;
	
	public:
		void getdata()
		{
			cout<<"\n Enter two numbers : ";
			cin>>a>>b;
		}
		void power();
		void average();
		void cube(int);
};

inline void Number :: power()
{
	float power=1;
	
	if(a>0 && b>0 || a<0 && b>0)
	{
		for(int i=1; i<=b; i++)
			power=power*a;
		cout<<endl<<a<<" raised to power "<<b<<" is "<<power<<endl;
	}
	
	else if(a==0 && b==0)
		cout<<endl<<a<<" raised to power "<<b<<" is "<<power<<endl;
		
	else if(a>0 && b<0)
	{
		for(int i=1; i<=-b; i++)
			power=power*1/a;
		cout<<endl<<a<<" raised to power "<<b<<" is "<<power<<endl;
	}
	
	else if(a<0 && b<0)
	{
		for(int i=1; i<=-b; i++)
			power=power*1/a;
		cout<<endl<<a<<" raised to power "<<b<<" is "<<power<<endl;
	}
	
} 

inline void Number :: average()
{
	float c=(float)(a+b)/2;
	
	cout<<endl<<"Average of "<<a<<" and "<<b<<" is "<<c<<endl;
}

inline void Number :: cube(int c=6)
{
	cout<<endl<<"Cube of "<<c<<" number is "<<c*c*c<<endl;
}

int main()
{
	Number n;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	n.getdata();
	
	n.power();
	
	n.average();
	
	n.cube();

	return 0;
}

