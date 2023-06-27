//Program on area of rectangle, square, circle and triangle using function overloading,(default argument, inlining within F.O.)

#include<iostream>

#define pi 3.14

using namespace std;

class Number
{	
	public:
		int area(int, int);
		int area(int);
		double area(double);
		float area(float,float);
};

inline int Number :: area(int l, int b)
{
	return l*b;
}


inline int Number :: area(int s)
{
	return s*s;
}


inline double Number :: area(double r)
{
	return pi*r*r;
}


inline float Number :: area(float B, float H=4.56)
{
	return (float)1/2*B*H;
}


int main()
{
	Number n;
	
	int l,b,s,i;
	float H,B,y;
	double r,x;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
    cout<<"\n Enter length and breadth of rectangle respectively : ";
	cin>>l>>b;
			
	cout<<"\n Enter side of square : ";
	cin>>s;
			
	cout<<"\n Enter radius of circle : ";
	cin>>r;
			
	cout<<"\n Enter base of triangle where height is a default argument : ";
	cin>>B;
	
	i=n.area(l,b);
	cout<<"\n Area of rectangle : "<<i<<endl;
	
	i=n.area(s);
	cout<<"\n Area of square : "<<i<<endl;
	
	x=n.area(r);
	cout<<"\n Area of circle : "<<x<<endl;
	
	y=n.area(B);
	cout<<"\n Area of triangle : "<<y<<endl;
	
	return 0;
}
