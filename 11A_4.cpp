//WOOP over Media (Base), Book (Derived), Tape (Derived) for implementing runtime polymorphism over pure virtual function display()

#include<iostream>

#include<cstring>

using namespace std;

class media
{
	protected:
		char title[50];
		float price;
		
	public:
		media(char *s, float a)
		{
			strcpy(title,s);
			price=a;
		}
		
		virtual void display(){}
};

class book : public media
{
	int pages;
	
	public:
		book(char *s, float a, int p):media(s,a)
		{
			pages=p;
		}
		
		void display()
		{
			cout<<"\n Title : "<<title<<endl;
			cout<<"\n Pages : "<<pages<<endl;
			cout<<"\n Price : "<<price<<endl;
		}
};

class tape : public media
{
	float time;
	
	public:
		tape(char *s, float a, float t):media(s,a)
		{
			time=t;
		}
		
		void display()
		{
			cout<<"\n Title : "<<title<<endl;
			cout<<"\n Time : "<<time<<" mins"<<endl;
			cout<<"\n Price : "<<price<<endl;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	char *title=new char[30];
	float price, time;
	int pages;
	
	cout<<"\n ***** ENTER BOOK DETAILS ***** "<<endl;
	cout<<"\n Title : ";
	cin>>title;
	cout<<"\n Price : ";
	cin>>price;
	cout<<"\n Pages : ";
	cin>>pages;
	
	book book1(title,price,pages);
	
	cout<<"\n ***** ENTER TAPE DETAILS ***** "<<endl;
	cout<<"\n Title : ";
	cin>>title;
	cout<<"\n Price : ";
	cin>>price;
	cout<<"\n Time (mins) : ";
	cin>>time;
	
	tape tape1(title,price,time);
	
	media* list[2];
	
	list[0]=&book1;
	list[1]=&tape1;
	
	cout<<"\n ***** MEDIA DETAILS ***** "<<endl;
	
	cout<<"\n ***** BOOK ***** "<<endl;
	list[0]->display();
	
	cout<<"\n ***** TAPE ***** "<<endl;
	list[1]->display();
	
	return 0;
}
