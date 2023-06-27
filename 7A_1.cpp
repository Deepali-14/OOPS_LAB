//Program on student class with at least one or more static data members and member function 

#include<iostream>

#include<cstring>

#include<iomanip>

using namespace std;

class Student
{
	char name[20];
	int rollno, marks[10];
	static int count;
	
		public:
			void getdata()
			{	
				cout<<"\n Enter student's roll number : ";
				cin>>rollno;
				
				cout<<"\n Enter student's name : ";
				fflush(stdin);
				gets(name);
				
				cout<<"\n Enter student's marks in 5 subjects : ";
		        for(int i=1; i<=5 ; i++)
		        	cin>>marks[i];
		        	
		        ++count;
			}
			
			void showdata()
			{
				cout<<"\n Roll no. "<<"\t"<<"Name"<<"\t"<<"Marks";
				cout<<"\n "<<name<<setw(10)<<rollno<<setw(10);
		        for(int i=1; i<=5; i++)
		        	cout<<marks[i]<<" ";
		        cout<<endl;
			}
			
			static void showcount()
			{
				cout<<"\n Total number of objects : "<<count<<endl;
			}
};

int Student :: count=0;

int main()
{
	Student a,b,c;
	int ch,n,i;
	
	cout<<"\n Deepali \n 2016736"<<endl;
	
	do
	{
		cout<<"\n 1. INPUT"<<"\n 2. OUTPUT"<<"\n 3. COUNT"<<"\n 0. EXIT";
		cout<<"\n Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				a.getdata();
				
				b.getdata();
						
				c.getdata();
				
				break;
				
			case 2:
				a.showdata();
					
				b.showdata();
					
				c.showdata();
					
				break;
				
			case 3:
				Student :: showcount();
				
				break;
				
			case 0:
				cout<<"\n Exiting :)"<<endl;
				
				break;
				
			default:
				cout<<"\n Wrong choice :( Try again...!"<<endl;
		}
	}while(ch!=0);
	
	return 0;
}
