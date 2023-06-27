//WOOP over ABC (Base), XYZ (Derived) class for implementing Runtime polymorphism

#include<iostream>

using namespace std;

class ABC
{
	public:
		virtual void display()
		{
			cout<<"\n Base class display"<<endl;
		}
};

class XYZ : public ABC
{
	public:
		void display()
		{
			cout<<"\n Derived class display"<<endl;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	ABC a;
	XYZ x;
	
	ABC *aptr=&a;
	
	cout<<"\n aptr points to base class ABC"<<endl;
	aptr->display();
	
	aptr=&x;
	
	cout<<"\n aptr points to derived class XYZ"<<endl;
	aptr->display();
		
	return 0;
}
