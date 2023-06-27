//WOOP for implementing Vector class for different data types

#include<iostream>

using namespace std;

const int size=3;

template<class T>

class vector
{
	T* v;
	
	public:
		vector()
		{
			v=new T[size];
			for(int i=0; i<size; i++)
				v[i]=0;
		}
		
		vector(T* a)
		{
			for(int i=0; i<size; i++)
				v[i]=a[i];
		}
		
		void display()
		{
			for(int i=0; i<size; i++)
				cout<<v[i]<<"  ";
			cout<<"\n";
		}
		
		T operator* (vector &y)
		{
			T sum=0;
			
			for(int i=0; i<size; i++)
				sum += this->v[i] * y.v[i];
				
			return sum;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	int a[3]={1,2,3};
	int b[3]={4,5,6};
	
	float x[3]={1.1,2.2,3.3};
	float y[3]={4.4,5.5,6.6};
	
	vector<int> v1;
	vector<int> v2;
	vector<float> v3;
	vector<float> v4;
	
	v1=a;
	v2=b;
	v3=x;
	v4=y;
	
	cout<<"\n v1 = ";
	v1.display();
	
	cout<<"\n v2 = ";
	v2.display();
	
	cout<<"\n v3 = ";
	v3.display();
	
	cout<<"\n v4 = ";
	v4.display();
	
	cout<<"\n v1*v2 = "<<v1*v2<<endl;
	
	cout<<"\n v3*v4 = "<<v1*v2<<endl;
	
	return 0;
} 
