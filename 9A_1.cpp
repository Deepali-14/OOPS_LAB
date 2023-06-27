#include<iostream>

using namespace std;

class alpha
{
	int a;
	public:
		alpha(int i)
		{
			a=i;
			cout<<"\n alpha initialized..!"<<endl;
		}
		
		void show()
		{
			cout<<"\n a = "<<a<<endl;
		}
};

class beta
{
	float b;
	public:
		beta(float i)
		{
			b=i;
			cout<<"\n beta initialized..!"<<endl;
		}
		
		void show()
		{
			cout<<"\n b = "<<b<<endl;
		}
};

class gamma : public beta, public alpha 
{
	int c,d;
	public:
		gamma(int i,int j,float k,int l):beta(k),alpha(l)
		{
			c=i;
			d=j;
			cout<<"\n gamma initialized..!"<<endl;
		}
		
		void show()
		{
			cout<<"\n c = "<<c<<" d = "<<d<<endl;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	gamma g(5,10,15.5,6);
	
	g.alpha::show();
	
	g.beta::show();
	
	g.gamma::show();
	
	return 0;
}
