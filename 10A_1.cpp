//WOOP over complex class for overloading post (--) , pre (--) (UNARY), (+) and (-) (BINARY) operators

#include<iostream>

using namespace std;

class Complex
{
	float r,i;
	
	public:
		Complex ()
		{
			r=i=0.0f;
		}
		
		Complex (float a, float b)
		{
			r=a;
			i=b;
		}

		Complex operator --()
		{
			Complex temp;
			
			temp.r=--r;
			temp.i=--i;
			
			return temp;
		}
		
		Complex operator --(int)
		{
			Complex temp;
			
			temp.r=r;
			r--;
			temp.i=i;
			i--;
			
			return temp;
		}
		
		void show()
		{
			cout<<r<<" + i "<<i<<endl;
		}
		
		Complex operator +(Complex x)
		{
			Complex temp;
			
			temp.r=r+x.r;
			temp.i=i+x.i;
			
			return temp;
		}
		
		friend Complex operator -(Complex x, Complex y)
		{
			Complex temp;
			
			temp.r=x.r-y.r;
			temp.i=x.i-y.i;
			
			return temp;
		}
		
		friend Complex operator +(Complex x, float z)
		{
			Complex temp;
			
			temp.r=x.r+z;
			temp.i=x.i+z;
			
			return temp;
		}
		
		friend Complex operator +(float z, Complex x)
		{
			Complex temp;
			
			temp.r=z+x.r;
			temp.i=z+x.i;
			
			return temp;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	Complex a(1.1,2.1),b(3.1,4.1),c;
	
	cout<<"\n Initially a : ";
	a.show();
	
	cout<<"\n Initially b : ";
	b.show();
	
	cout<<"\n After post decrementing complex number 1 : ";
	c=a--;
	c.show();
	
	cout<<"\n After post decrementing complex number 2 : ";
	c=b--;
	c.show();
	
	cout<<"\n After pre decrementing complex number 1 : ";
	c=--a;
	c.show();
	
	cout<<"\n After pre decrementing complex number 2 : ";
	c=--b;
	c.show();
	
	
	cout<<"\n Sum of complex number 1 and complex number 2 : ";
	c=a+b;
	c.show();
	
	cout<<"\n Sum of complex number 1 and 8.4 : ";
	c=a+8.4;
	c.show();
	
	cout<<"\n Sum of complex number 2 and 4.8 : ";
	c=4.8+b;
	c.show();
	
	cout<<"\n Difference of complex number 2 from complex number 1: ";
	c=a-b;
	c.show();

	return 0;
}
