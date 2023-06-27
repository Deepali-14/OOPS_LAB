//Program on armstrong number

#include<iostream>

#include<cmath>

using namespace std;

class Number
{
	int m,n;
	
	public:
		void getdata(void);
		void armno(void);
};

void Number :: getdata(void)
{
	cout<<"Enter start range : ";
	cin>>m;
	
	cout<<"Enter end range : ";
	cin>>n;
}

void Number :: armno(void)
{
	int sum,p,k; 
	
	for(int i=m;i<=n;i++)
	{
		p=0;
		sum=0;
		
		for(int n1=i;n1!=0;n1=n1/10)
		p++;
		
		for(int n2=i;n2!=0;n2=n2/10)
		{
			k=n2%10;
			sum=sum+pow(k,p);
		}
		
		if(sum==i)
		cout<<i<<" ";
		
		else
		continue;
	}
}

int main()
{
	Number num;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	num.getdata();
	
	num.armno();
	
	return 0;
}
