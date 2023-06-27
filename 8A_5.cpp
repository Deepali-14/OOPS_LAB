//WOOP for implementing the concept of function overriding on simple class

#include<iostream>

using namespace std;

class B
{
	int a;
	
	public:
		void get()
		{
			cout<<"\n Enter value of a : ";
			cin>>a;
		}
		
		void show()
		{
			cout<<"\n a : "<<a<<endl;
		}
};

class D : public B
{
	int b;
	
	public:
		void get()
		{
			cout<<"\n Enter value of b : ";
			cin>>b;
		}
		
		void show()
		{
			cout<<"\n b : "<<b<<endl;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	D d;
	
	d.B::get();
	
	d.get();
	
	d.B::show();
	
	d.show();
	
	return 0;
}
