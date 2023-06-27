//WOOP over complex class for overloading post (++) , pre (++) (UNARY) and () operators

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

		Complex operator ++()
		{
			Complex temp;
			
			temp.r=++r;
			temp.i=++i;
			
			return temp;
		}
		
		Complex operator ++(int)
		{
			Complex temp;
			
			temp.r=r;
			r++;
			temp.i=i;
			i++;
			
			return temp;
		}
		
		Complex operator ()(Complex x)
		{
			Complex temp;
			
			temp.r=-x.r;
			temp.i=-x.i;
			
			return temp;
		}
		
		void show()
		{
			cout<<r<<" + i "<<i<<endl;
		}
		
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	Complex a(1.1,-2.1),b(-3.1,4.1),c;
	
	cout<<"\n Initially a : ";
	a.show();
	
	cout<<"\n Initially b : ";
	b.show();
	
	cout<<"\n After post incrementing complex number 1 : ";
	c=a++;
	c.show();
	
	cout<<"\n After post incrementing complex number 2 : ";
	c=b++;
	c.show();
	
	cout<<"\n After pre incrementing complex number 1 : ";
	c=++a;
	c.show();
	
	cout<<"\n After pre incrementing complex number 2 : ";
	c=++b;
	c.show();
	
	cout<<"\n After complementing complex number 1 : ";
	c=c(a);
	c.show();
	
	return 0;
}
