//Program to test use of reference variable over basic data type

#include<iostream>

using namespace std;

void swap_int1(int, int);

void swap_int2(int &, int &);

void swap_dou1(double, double);

void swap_dou2(double &, double &);

void swap_char1(char, char);

void swap_char2(char &, char &);

int main()
{
	int a,b;
	double m,n;
	char x,y;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	cout<<"\n Enter two integer numbers : ";
	cin>>a>>b;
	
	cout<<"\n Enter two double numbers : ";
	cin>>m>>n;
	
	cout<<"\n Enter two character numbers : ";
	cin>>x>>y;
	
	cout<<"\n Before swapping : \n";
	cout<<" a = "<<a<<", b = "<<b<<endl;
	
	cout<<"\n Swapping integers using basic data type \n";
	swap_int1(a,b);
	
	cout<<"\n After swapping using basic data type : \n";
	cout<<" a = "<<a<<", b = "<<b<<endl;
	
	cout<<"\n Swapping integers using reference variable \n";
	swap_int2(a,b);
	
	cout<<"\n After swapping using reference variable : \n";
	cout<<" a = "<<a<<", b = "<<b<<endl;
	
	cout<<"\n Before swapping : \n";
	cout<<" m = "<<m<<", n = "<<n<<endl;
	
	cout<<"\n Swapping double using basic data type \n";
	swap_dou1(m,n);
	
	cout<<"\n After swapping using basic data type : \n";
	cout<<" m = "<<m<<", n = "<<n<<endl;
	
	cout<<"\n Swapping double using reference variable \n";
	swap_dou2(m,n);
	
	cout<<"\n After swapping using reference variable : \n";
	cout<<" m = "<<m<<", n = "<<n<<endl;
	
	cout<<"\n Before swapping : \n";
	cout<<" x = "<<x<<", y = "<<y<<endl;
	
	cout<<"\n Swapping character using basic data type \n";
	swap_char1(x,y);
	
	cout<<"\n After swapping using basic data type : \n";
	cout<<" x = "<<x<<", y = "<<y<<endl;
	
	cout<<"\n Swapping character using reference variable \n";
	swap_char2(x,y);
	
	cout<<"\n After swapping using reference variable : \n";
	cout<<" x = "<<x<<", y = "<<y<<endl;
	
	return 0;
}

void swap_int1(int a, int b)
{
	int temp;
	
	temp=a;
	
	a=b;
	
	b=temp;
}

void swap_int2(int &a, int &b)
{
	int temp;
	
	temp=a;
	
	a=b;
	
	b=temp;
}

void swap_dou1(double a, double b)
{
	double temp;
	
	temp=a;
	
	a=b;
	
	b=temp;
}

void swap_dou2(double &a, double &b)
{
	double temp;
	
	temp=a;
	
	a=b;
	
	b=temp;
}

void swap_char1(char a, char b)
{
	char temp;
	
	temp=a;
	
	a=b;
	
	b=temp;
}

void swap_char2(char &a, char &b)
{
	char temp;
	
	temp=a;
	
	a=b;
	
	b=temp;
}
