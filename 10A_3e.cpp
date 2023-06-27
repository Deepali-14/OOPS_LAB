//Overload unary (~)(M) and binary (+)(F) and (==)(M) over string class

#include<iostream>

#include<cstring>

using namespace std;

class String
{
	char *p;
	int l;
	
	public:
		String()
		{
			l=0;
			p=new char[l+1];
			strcpy(p,"\0");
		}
		
		String(const char c[])
		{
			l=strlen(c);
			p=new char[l+1];
			strcpy(p,c);
		}
		
		void show()
		{
			cout<<p<<"\n Length : "<<l<<endl;
		}
		
		String operator ~()
		{
			strrev(p);
		}
		
		friend String operator +(String a, String b)
		{
			String temp;
			
			temp.l=strlen(a.p)+strlen(b.p);
			temp.p=new char[temp.l+1];
			strcpy(temp.p,a.p);
			strcat(temp.p,b.p);
			
			return temp;
		}
		
		int operator !=(String a)
		{
			if(strcmp(a.p,p)==0)
				return 1;
			else
				return 0;
		}
		
};

int main()
{
	cout<<"\n Program developed by Deepali, 2016736"<<endl;
	
	String a("Deepali"),b("Deepali"),c;
	
	cout<<"\n String a : ";
	a.show();
	
	cout<<"\n String b : ";
	b.show();
	
	cout<<"\n After concatinating string a and b : ";
	c=a+b;
	c.show();
	
	int d=a!=b;
	if(d)
		cout<<"\n Strings are same"<<endl;
	else
		cout<<"\n Strings are not same"<<endl;
	
	cout<<"\n After reversing string a : ";
	~a;
	a.show();

	return 0;
}
