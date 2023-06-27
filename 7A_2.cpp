//Program on complex class functions

#include<iostream>

using namespace std;

class Complex
{
	float real, imag;
	
	public:
	
	Complex()
	{
		real=imag=0.0f;
	}
	
	Complex(float a, float b=0.0f)
	{
		real=a;
		imag=b;
	}
	
	void add(Complex x, Complex y)
	{	
		real=x.real+y.real;
		imag=x.imag+y.imag;
	}
	
	void sub(Complex x, Complex y)
	{	
		real=x.real-y.real;
		imag=x.imag-y.imag;
	}

	void showdata()
	{
		cout<<"\n Complex number : "<<real<<" + i * "<<imag<<endl;
	}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	Complex c1(1.2,-8),c2,c3;
	
	c2=Complex(-3.6,-8);
	
	c1.showdata();
	
	c2.showdata();
	
	cout<<"\n After addition : \n";
	c3.add(c1,c2);
	c3.showdata();
	
	cout<<"\n After subtraction : \n";
	c3.sub(c1,c2);
	c3.showdata();

	return 0;
}
