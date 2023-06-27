//WOOP over integer class for overloading (UNARY) (++(F)), -(M)) and (BINARY) (*(F), !=(M)) operators

#include<iostream>

using namespace std;

class Integer
{
	int a;
	
	public:
		Integer()
		{
			a=0;
		}
		
		Integer(int x)
		{
			a=x;
		}
		
		friend Integer operator ++(Integer &x)
		{
			Integer Temp;
			
			Temp.a=++x.a;
			
			return Temp;
		}
		
		friend Integer operator ++(Integer &x,int)
		{
			Integer Temp;
			
			Temp.a=x.a;
			
			x.a++;
			
			return Temp;
		}
		
		int operator !=(Integer x)
		{
			if(a!=x.a)
				return 1;
				
			else
				return 0;
		}
		
		void operator -()
		{
			a=-a;
		}
		
		friend Integer operator *(Integer x, Integer y)
		{
			Integer temp;
			
			temp.a=x.a*y.a;
			
			return temp;
		}
		
		void show()
		{
			cout<<"\n Value of a : "<<a<<endl;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	Integer x(5),y,z;
	
	cout<<"\n Initially integer of object x : ";
	x.show();
	
	cout<<"\n After post incrementing integer of object x : ";
	y=x++;
	y.show();
	
	cout<<"\n After pre incrementing integer of object x : ";
	y=++x;
	y.show();
	
	cout<<"\n After complementing integer of object x : ";
	-x;
	x.show();
	
	cout<<"\n After multiplying integer of object x and object y : ";
	z=x*y;
	z.show();

	cout<<"\n Finally integer of object x : ";
	x.show();
	
	cout<<"\n Finally integer of object y : ";
	y.show();
	
	if(x != y)
		cout<<"\n x and y objects are not equal"<<endl;
		
	else
		cout<<"\n x and y objects are equal"<<endl;
	
	return 0;
}
