//Program for time class functions

#include<iostream>

using namespace std;

class Time
{
	int hr,min,sec;
	
	public:
		Time()
		{
			hr=min=sec=0;
		}
		
		Time(int h, int m, int s)
		{
			hr=h;
			min=m;
			sec=s;
		}
	
		void display();
		
		void add(Time,Time);
		
		void sub(Time,Time);
};

void Time :: display()
{
	cout<<" "<<hr<<":"<<min<<":"<<sec<<endl;
}

void Time :: add(Time y,Time z)
{
	hr=y.hr+z.hr;
	
	min=y.min+z.min;
	
	sec=y.sec+z.sec;
	
	if(sec>60)
	{
		sec=sec-60;
		min=min+1;
	}
	
	if(min>60)
	{
		min=min-60;
		hr=hr+1;
	}
}

void Time :: sub(Time y,Time z)
{
	if(y.hr>z.hr)
	{
		hr=0;
		min=((y.hr*60)+y.min+(y.sec/60))-((z.hr*60)+z.min+(z.sec/60));
		sec=0;
	}
	
	else
	{
		hr=0;
		min=((z.hr*60)+z.min+(z.sec/60))-((y.hr*60)+y.min+(y.sec/60));
		sec=0;
	}
}

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
		
	Time a(12,15,15),c;
	
	Time b(2,45,55);
	
	cout<<"\n Time 1 : ";
	a.display();
	
	cout<<"\n Time 2 : ";
	b.display();
	
	cout<<"\n After addition : ";
	c.add(a,b);
	c.display();
	
	cout<<"\n After subtraction : ";
	c.sub(a,b);
	c.display();
	
	return 0;
}
