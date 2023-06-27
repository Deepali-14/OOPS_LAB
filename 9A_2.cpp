//Program on hybrid inheritance

#include<iostream>

using namespace std;

class student
{
	protected:
		int rollno;
	
	public:
		void get_rn()
		{
			cout<<"\n Enter roll no. : ";
			cin>>rollno;
		}
		
		void show_rn()
		{
			cout<<"\n Roll no : "<<rollno<<endl;
		}
	
};

class test : public student
{
	protected:
		int m1,m2;
		
	public:
		void get_m()
		{
			cout<<"\n Enter marks in two subjects : ";
			cin>>m1>>m2;
		}
		
		void show_m()
		{
			cout<<"\n Marks obtained : "<<m1<<"\t"<<m2<<endl;
		}
};

class sports
{
	protected:
		int score;
		
	public:
		void get_s()
		{
			cout<<"\n Enter score : ";
			cin>>score;
		}
		
		void show_s()
		{
			cout<<"\n Score : "<<score<<endl;
		}
};

class result : public test, public sports
{
	protected:
		int total;
		
	public:
		void display()
		{
			total=m1+m2+score;
			
			show_rn();
			
			show_m();
			
			show_s();
			
			cout<<"\n Total Marks : "<<total<<endl;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	result r;
	
	r.get_rn();
	
	r.get_m();
	
	r.get_s();
	
	r.display();
	
	return 0;
}
