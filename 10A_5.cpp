//WOOP over string class to overload (==), (>>) and (<<) operators

#include<iostream>

#include<cstring>

using namespace std;

#define max 20

class String
{
	char p[max];
	
	public:
		friend void operator >>(istream &din, String &x)
		{
			din>>x.p;
		}
		
		friend void operator <<(ostream &dout, String &x)
		{
			dout<<x.p;
		}
		
		int operator ==(String c)
		{
			if(strcmp(p,c.p)==0)
				return 1;
				
			else
				return 0;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	String a,b;
	
	cout<<"\n Reading string a : ";
	cin>>a;
	
	cout<<"\n Reading string b : ";
	cin>>b;
	
	cout<<"\n String a : ";
	cout<<a;
	
	cout<<"\n String b : ";
	cout<<b;
	
	if(a==b)
		cout<<"\n Strings a and b are equal"<<endl;
		
	else
		cout<<"\n Strings a and b are not equal"<<endl;

	return 0;
}
