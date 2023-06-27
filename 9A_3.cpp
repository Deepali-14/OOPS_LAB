#include<iostream>

using namespace std;

#define max 50

class Student
{
	protected:
		int rn;
		char name[max];
		
	public:
		void get()
		{
			cout<<"\n Enter roll no : ";
			fflush(stdin);
			cin>>rn;
			
			cout<<"\n Enter name : ";
			fflush(stdin);
			gets(name);
		}
		
		void show()
		{
			cout<<"\n Name : "<<name<<endl;
			cout<<"\n Roll no : "<<rn<<endl;
		}
};

class Test : virtual public Student
{
	protected: 
		float marks;
		
	public:
		void get_t()
		{
			cout<<"\n Enter marks : ";
			cin>>marks;
		}
		
		void show_t()
		{
			cout<<"\n Marks : "<<marks<<endl;
		}
};

class Sports : public virtual Student
{
	protected:
		float score;
		
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

class Result : public Test, public Sports
{
	float total;
	
	public:
		void get_total()
		{
			float total=marks+score;
			
			show();
			show_t();
			show_s();
			
			cout<<"\n Total marks = "<<total<<endl;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	Result r;
	
	r.get();
	r.get_t();
	r.get_s();
	r.get_total();
	
	return 0;
}
