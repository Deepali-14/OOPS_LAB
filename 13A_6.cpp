//WOOP over Array class for searching, sorting and storing array of generic data type

#include<iostream>

using namespace std;

#define max 5

template<class T>

class Array
{
	T *arr;
	
	public:
		Array()
		{
			arr=new T[max];
			
			for(int i=0; i<max; i++)
				arr[i]=0;
		}
		
		Array(T *a)
		{
			for(int i=0; i<max; i++)
				arr[i]=a[i];
		}
				
		void display()
		{
			for(int i=0; i<max; i++)
				cout<<arr[i]<<" ";
			cout<<endl;
		}	
		
		void bubble()
		{
			for(int i=0; i<max-1; i++)
				for(int j=max-1; i<j; j--)
					if(arr[j]<arr[j-1])
					{
						T temp=arr[j];
						arr[j]=arr[j-1];
						arr[j-1]=temp;
					}
		}	
		
		void search(T x)
		{
			int flag=0;
			
			for(int i=0; i<max; i++)
			{
				if(arr[i]==x)
				{
					flag=1;
					cout<<"\n "<<x<<" found at "<<i<<" location"<<endl;
				}
			}
			
			if(flag==0)
				cout<<"\n "<<x<<" not found"<<endl;
		}
	
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	int x[]={1,5,3,4,2};
	float y[]={1.1,5.5,3.3,4.4,2.2};
	
	Array<int>a1;
	Array<float>a2;
	
	a1=x;
	a2=y;
	
	cout<<"\n Integer array x : ";
	a1.display();
	
	cout<<"\n Float array y : ";
	a2.display();
	
	a1.bubble();	
	cout<<"\n Sorted array x : ";
	a1.display();
	
	a2.bubble();
	cout<<"\n Sorted array y : ";
	a2.display();
	
	cout<<"\n Searching 5 in array x"<<endl;
	a1.search(5);
	
	cout<<"\n Searching 5.89f in array y"<<endl;
	a2.search(5.89f);
		
	return 0;
}
