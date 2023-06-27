//WOOP for implementing single inheritance over base class (having private and public D.M.) and derived it publically in class
//(having 1 D.M.) write operations of multiply all 3 D.M. in derived class.

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

class D : public B
{
	int c;
	
	public:
		void getc()
		{
			cout<<"\n Enter value of c : ";
			cin>>c;
		}
		
		void showc()
		{
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
	
	d.get();
	
	d.getc();
	
	d.show();
	
	d.showc();
	
	cout<<"\n Multiplication of D.M. = "<<d.mul()<<endl;
		
	return 0;
}
