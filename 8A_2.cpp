//WOOP for inheriting same base class but privately

#include<iostream>

using namespace std;

class B
{
	int a;
	
	public:
		int b;
		
		void get()
		{
			cout<<"\n Enter value of a and b : ";
			cin>>a>>b;
		}
		
		void show()
		{
			cout<<"\n a = "<<a<<" b = "<<b<<endl;
	    }
	    
	    int get_a()
	    {
	    	return a;
		}
};

class D : private B
{
	int c;
	
	public:
		void getc()
		{
			get();
			cout<<"\n Enter value of c : ";
			cin>>c;
		}
		
		void showc()
		{
			show();
			cout<<"\n c = "<<c<<endl;
	    }
	    
	    int mul()
	    {
	    	return (get_a() * b * c);
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
		
	D d;
	
	d.getc();
	
	d.showc();
	
	cout<<"\n Multiplication of D.M. = "<<d.mul()<<endl;
		
	return 0;
}
