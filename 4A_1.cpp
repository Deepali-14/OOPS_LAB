//Program on array class with functions like sort and search

#include<iostream>

using namespace std;

class Array
{
	int a[50];
	int n;
	
	public:
		
		void getdata(void);

		void display(void);
		
		void lsearch(int);
	    
		int bsearch(int);
	    
		void sort(void);
		
};

void Array :: getdata()
{
	cout<<" Enter size of array : ";
	cin>>n;
	
	cout<<" Enter array : \n";
	for(int i=0;i<n;i++)
	cin>>a[i];
}
	
void Array :: display()
{
	
	cout<<" Array : \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
	
	cout<<endl;
} 

void Array :: lsearch(int x)
{
	int c=0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
	    {
	    	cout<<x<<" found at location "<<i<<endl;
	    	c++;
		}
	}
	
	if(c==0)
	cout<<x<<" not found"<<endl;
	
	else
	cout<<x<<" found "<<c<<" times "<<endl;
}

int Array :: bsearch(int x)
{
	int s=1,e=n-1,m;
	
	while(s<=e)
	{
		m=(s+e)/2;
		
		if(x<a[m])
		e=m-1;
		
		else if(x>a[m])
		s=m+1;
		
		else
		return m;
	}
	
	return -999;
}

void Array :: sort()
{
	int min,temp;
	
	for(int i=0;i<n-1;i++)
	{
		min=i;
		
		for(int j=i+1;j<n;j++)
		if(a[j]<a[min])
		min=j;
		
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}

int main()
{
	Array A;
	int ch,x,y;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	A.getdata();
	
	do
	{
		cout<<"\n 1. INPUT ARRAY \n 2. OUTPUT ARRAY \n 3. LINEAR SEARCH";
		cout<<"\n 4. BINARY SEARCH \n 5. SORTING \n 0. EXIT \n";
		
		cout<<" Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				A.getdata();
				break;
			
			case 2:
				A.display();
				break;
			
			case 3:
				cout<<" Enter element to search : ";
				cin>>x;
				
				A.lsearch(x);
				break;
			
			case 4:
				cout<<" Enter element to search : ";
				cin>>x;
				
				y=A.bsearch(x);
				
				if(y!=-999)
				cout<<x<<" found at location "<<y<<endl;
				
				else
				cout<<x<<" not found"<<endl;
				break;
			
			case 5:
				A.sort();
				break;
			
			case 0:
				cout<<"\n Exiting :) \n";
				break;
			
			default:
				cout<<"\n Wrong choice entered \n";
		}
	}while(ch!=0);
	
	return 0;
}
