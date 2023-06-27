//Program over sum function to calculate sum of 2 int, 1 int- 1 float, 3 int, 1 double - 1 int

#include<iostream>

using namespace std;

int sum(int, int);
float sum(int, float);
int sum(int, int, int);
double sum(double, int);

int main()
{
	int a,b,c,d,e,f,g,r;
	float x,s;
	double y,t;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	cout<<"\n Enter 7 integers : ";
	cin>>a>>b>>c>>d>>e>>f>>g;
			
	cout<<"\n Enter a float : ";
	cin>>x;
			
	cout<<"\n Enter a double : ";
	cin>>y;
	
	r=sum(a,b);
	cout<<"\n Sum of two integers "<<a<<" and "<<b<<" is "<<r<<endl;
	 
	s=sum(c,x);
	cout<<"\n Sum of one integer : "<<c<<" and one float : "<<x<<" is "<<s<<endl;
	
	r=sum(d,e,f);
	cout<<"\n Sum of three integers "<<d<<" , "<<e<<" and "<<f<<" is "<<r<<endl;
	
	t=sum(y,g);
	cout<<"\n Sum of one double : "<<y<<" and one integer : "<<g<<" is "<<t<<endl;
	
	return 0;
}

int sum(int a, int b)
{
	return a+b;
}

float sum(int c, float x)
{
	return c+x;
}

int sum(int d, int e, int f)
{
	return d+e+f;
}

double sum(double y, int g)
{
	return g+y;
}
