//Program to calculate area of circle, rectangle, triangle and square using inline function

#include<iostream>

using namespace std;

class Number
{
	float l,b,s,B,H,r;
	
	public:
		void getdata()
		{
			cout<<"\n Enter radius of circle : ";
			cin>>r;
			
			cout<<"\n Enter length and breadth of rectangle respectively : ";
			cin>>l>>b;
			
			cout<<"\n Enter base and height of triangle respectively : ";
			cin>>B>>H;
			
			cout<<"\n Enter side of square : ";
			cin>>s;
		}
		
		void area_of_circle();
		void area_of_rectangle();
		void area_of_triangle();
		void area_of_square();		
};

inline void Number :: area_of_circle()
{
	cout<<"\n Area of circle of radius "<<r<<" is "<<3.14*r*r<<endl;
}

inline void Number :: area_of_rectangle()
{
	cout<<"\n Area of rectangle of length "<<l<<" and breadth "<<b<<" is "<<l*b<<endl;
}

inline void Number :: area_of_triangle()
{
	cout<<"\n Area of triangle of base "<<B<<" and height "<<H<<" is "<<(float)1/2*B*H<<endl;
}

inline void Number:: area_of_square()
{
	cout<<"\n Area of square of side "<<s<<" is "<<s*s<<endl;
}

int main()
{
	Number n;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	n.getdata();
	
	n.area_of_circle();
	
	n.area_of_rectangle();
	
	n.area_of_square();
	
	n.area_of_triangle();
	
	return 0;
}
