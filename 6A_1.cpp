//Program to print sum of private data members of two different classes

#include<iostream>

using namespace std;

class XYZ;

class ABC
{
    int a;
    public:
            void read() 
			{
				cout<<"\n Enter value of a : ";
				cin>>a;
			}
			
            void sum(XYZ &); 
};

class XYZ
{
    int b;
    public:
        void Read()
        {
                cout<<"\n Enter value of b : ";
				cin>>b;    
        }
        friend void ABC :: sum(XYZ &); 
};

void ABC :: sum(XYZ &z)
{
        cout<<"\n Sum of two data members "<<a<<" and "<<z.b<<" is "<<a+z.b<<endl;
}

int main()
{
        ABC P;
        
        cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
        
        P.read();
        
        XYZ Q;
        
        Q.Read(); 
        
        P.sum(Q); 
        
        return 0;
}
