//WOOP over Circle (Base), Cylinder (Derived) class and implement runtime polymorphism over area() function 

#include<iostream>

using namespace std;

class Circle
{
	protected: 
		int r;
		
	public:
		Circle(int x)
		{
			r=x;
		}
		
		virtual void area()
		{
			cout<<"\n Area of circle = "<<3.14*r*r<<endl;
		}
};

class Cylinder : public Circle
{
	int h;
	
	public:
		Cylinder(int y):Circle(r)
		{
			h=y;
		}
		
		void area()
		{
			int area=3.14*r*r*h;
			
			cout<<"\n Area of cylinder = "<<area<<endl;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	int r;
	cout<<"\n Enter radius : ";
	cin>>r;
	
	int h;
	cout<<"\n Enter height : ";
	cin>>h;
	
	Circle b(r);
	Cylinder d(h);
	
	Circle *xp=&b;
	
	xp->area();
		
	xp=&d;
	
	xp->area();
	
	return 0;
}
