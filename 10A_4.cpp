//WOOP over student class to overload (<<) and (>>) operators

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
			friend void operator >>(istream &din, Student &s)
			{	
				cout<<"\n Enter student's roll number : ";
				din>>s.rollno;
				
				cout<<"\n Enter student's name : ";
				fflush(stdin);
				gets(s.name);
				
				cout<<"\n Enter student's marks in 5 subjects : ";
		        for(int i=1; i<=5 ; i++)
		        	din>>s.marks[i];
		        	
		        ++count;
			}
			
			friend void operator <<(ostream &dout, Student s)
			{
				dout<<"\n Roll no. "<<"\t"<<"Name"<<"\t"<<"Marks";
				dout<<"\n "<<s.name<<setw(10)<<s.rollno<<setw(10);
		        for(int i=1; i<=5; i++)
		        	dout<<s.marks[i]<<" ";
		        dout<<endl;
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
				cin>>a;
				
				cin>>b;
						
				cin>>c;
				
				break;
				
			case 2:
				cout<<a;
					
				cout<<b;
					
				cout<<c;
					
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
