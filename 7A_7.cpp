//Program to implement local class and inner class concepts

#include<iostream>

using namespace std;

void fun()
{
	class Number
	{
		int a;
		
		public:
			Number(int x)
			{
				a=x;
			}
			
			void show()
			{
				cout<<"\n a = "<<a<<endl;
			}
	};
	
	Number n(5);
	
	n.show();
}

class Number1
{
	public:
		class Number2
		{
			int x;
			
			public:
				
				Number2(int a)
				{
					x=a;
				}
				
				void show()
				{
					cout<<"\n x = "<<x<<endl;
				}
		};
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	fun();
	
	Number1 :: Number2 n(111);
	
	n.show();
	
	return 0;
}
