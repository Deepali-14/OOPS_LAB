//WOP with generic SUM function for sumation of two int, double, float etc.

#include<iostream>

using namespace std;

template<class T>

T display(T x, T y)
{
	return(x+y);
}

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	int a,b;
	
	cout<<"\n Enter two integers : ";
	cin>>a>>b;
	cout<<"\n Sum of two integers : "<<display(a,b)<<endl;
	
	float m,n;
	
	cout<<"\n Enter two floats : ";
	cin>>m>>n;	
	cout<<"\n Sum of two floats : "<<display(m,n)<<endl;
	
	double x,y;
	
	cout<<"\n Enter two doubles : ";
	cin>>x>>y;	
	cout<<"\n Sum of two doubles : "<<display(x,y)<<endl;
	
	return 0;
}
