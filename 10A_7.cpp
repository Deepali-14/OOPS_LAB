//WOOP over vector class for overloading (*), (>>) and (<<) operators

#include<iostream>

using namespace std;

#define max 10

class Vector
{
	int v[max];
	
	public:
		friend void operator >>(istream &din, Vector &y)
		{
			for(int i=0; i<max; i++)
				din>>y.v[i];
		}
		
		friend void operator <<(ostream &dout, Vector &y)
		{
			for(int i=0; i<max; i++)
				dout<<y.v[i]<<"\t";
		}
		
		friend Vector operator *(Vector y,int a)
		{
			Vector Temp;
			
			for(int i=0; i<max; i++)
				Temp.v[i]=a*y.v[i];
				
			return Temp;
		}
		
		friend Vector operator *(int a,Vector y)
		{
			Vector Temp;
			
			for(int i=0; i<max; i++)
				Temp.v[i]=a*y.v[i];
				
			return Temp;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	Vector Y,Z;
	cout<<"\n Enter vectors : ";
	cin>>Z;
	
	Y=Z;
	cout<<"\n Display vectors : ";		
	cout<<Y;
	
	Vector W;
	W=3*Y;
	cout<<"\n Display vectors : ";
	cout<<W;
	
	W=Y*3;
	cout<<"\n Display vectors : ";
	cout<<W;
	
	return 0;
}
