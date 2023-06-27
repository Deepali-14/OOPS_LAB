//WOOP over array class for overloading >>, << and [] operators

#include<iostream>

using namespace std;

#define max 5

class Array
{
	int a[max];
	
	public:
		friend void operator >>(istream &din, Array &x)
		{
			cout<<"\n Read array : ";
			
			for(int i=0; i<max; i++)
				din>>x.a[i];
		}
		
		friend void operator <<(ostream &dout, Array &x)
		{
			dout<<"\n Display array : ";
			
			for(int i=0; i<max; i++)
				dout<<x.a[i]<<"\t";
			dout<<endl;
		}
		
		int operator [](int x)
		{
			return a[x];
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	Array z;
	
	cin>>z;
	
	cout<<z;
	
	int a,b;
	
	cout<<"\n Enter index : ";
	cin>>a;
	
	cout<<"\n Value : ";
	cout<<z[a]<<endl;
	
	return 0;
}
