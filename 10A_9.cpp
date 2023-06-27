//WOOP over integer class for overloading pre (--), post (--) and logical (&&) operators

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
		
		Integer operator --()
		{
			Integer Temp;
			
			Temp.a=--a;
			
			return Temp;
		}
		
		Integer operator --(int)
		{
			Integer Temp;
			
			Temp.a=a;
			
			a--;
			
			return Temp;
		}
		
		int operator &&(Integer x)
		{
			if(a==3 && x.a==3)
				return 1;
				
			else
				return 0;
		}
		
		void show()
		{
			cout<<"\n Value of a : "<<a<<endl;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	Integer x(5),y;
	
	cout<<"\n Initially integer of object x : ";
	x.show();
	
	cout<<"\n After post decrementing : ";
	y=x--;
	y.show();
	
	cout<<"\n After pre decrementing : ";
	y=--x;
	y.show();
	
	cout<<"\n Finally integer of object x : ";
	x.show();
	
	cout<<"\n Finally integer of object y : ";
	y.show();
	
	if(x && y)
		cout<<"\n Condition True"<<endl;
		
	else
		cout<<"\n Condition False"<<endl;
	
	return 0;
}
