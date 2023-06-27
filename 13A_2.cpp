//WOP with DISPLAY template function for displayng two values of generic type.

#include<iostream>

#include<cstring>

using namespace std;

template <class T1, class T2>

void display(T1 a, T2 b)
{
	cout<<"\n a = "<<a<<" and "<<" b = "<<b<<endl;
}

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	cout<<"\n Calling template function with one int and one string type parameters"<<endl;
	display(1,"xyz");
	
	cout<<"\n Calling template function with one int and one float type parameters"<<endl;
	display(1,2.3);
	
	cout<<"\n Calling template function with one float and one character type parameters"<<endl;
	display(2.3,'x');
	
	return 0;
}
