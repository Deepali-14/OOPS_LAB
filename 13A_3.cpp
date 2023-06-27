//WOP for SWAPPING two variables of any D.T. with each other.

#include<iostream>

using namespace std;

template <class T>

void swap1(T &x, T &y)
{
	T temp=x;
	x=y;
	y=temp;
}

void fun(int m, int n, float o, float p)
{
	cout<<"\n m and n before swapping "<<m<<" and "<<n<<endl;
		swap1(m,n);
	cout<<"\n m and n after swapping "<<m<<" and "<<n<<endl;
	
	cout<<"\n o and p before swapping "<<o<<" and "<<p<<endl;
		swap1(o,p);
	cout<<"\n o and p after swapping "<<o<<" and "<<p<<endl;
}

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	fun(100,2,44.55,5.555);
	
	return 0;
}
