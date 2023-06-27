//WOOP for Calculator class for performing mathematical operations over different data types

#include<iostream>

using namespace std;

template<class T>

class Calculator
{
	T x,y;
	
	public:
		Calculator(T a, T b)
		{
			x=a;
			y=b;
		}
		
		void display()
		{
			cout<<"\n x : "<<x<<" and y : "<<y<<endl;
		}
		
		void op()
		{
			T temp;
			
			temp=x+y;
			cout<<"\n Sum = "<<temp<<endl;
			
			temp=x-y;
			cout<<"\n Difference = "<<temp<<endl;
			
			temp=x*y;
			cout<<"\n Multiplication = "<<temp<<endl;
			
			temp=x/y;
			cout<<"\n Division = "<<temp<<endl;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	Calculator<int> c1(11,22);
	Calculator<float> c2(11.3,2.2);
	
	c1.display();
	c2.display();
	
	cout<<"\n ********* INTEGER DATA MEMBERS ********* "<<endl;
	c1.op();
	
	cout<<"\n ********* FLOAT DATA MEMBERS ********* "<<endl;
	c2.op();
	
	return 0;
}
