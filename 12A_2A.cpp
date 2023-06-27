//WOOP over student class for storing record and printing result of student using IOS function and manipulators

#include<iostream>

#include<iomanip>

#include<fstream>

using namespace std;

class Student
{
	int roll_no;
	char name[50];
	int marks[5];
	
	public:
		void read();
		void write();
};

void Student::read()
{
	cout<<"\n Enter Roll no : ";
	cin>>roll_no;
	
	cout<<"\n Enter Name : ";
	fflush(stdin);
	gets(name);
	
	cout<<"\n Enter Marks in five subject out of 100 : ";
	for(int i=0;i<5;i++)
	{
		cout<<"\n Enter Marks subject "<<i+1<<" : ";
		cin>>marks[i];
	}	
}

void Student::write()
{
	cout<<"\n-----------------Student Record--------------------";
	cout<<"\n Roll no : ";
	cout<<roll_no;
	
	cout<<"\n Name : ";
	cout<<name;
	
	cout<<endl<<" Subject"<<setw(10)<<"Marks"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<" "<<i+1<<setw(15)<<marks[i]<<endl;
	}
	
	float p=0;
	for(int i=0;i<5;i++)
		p=p+marks[i];	
	p=p/5;	
	cout<<"\n Percentage=";
	cout.precision(5);
	cout<<p;
}

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	Student S,R;
	fstream s;
	int n;
	
	cout<<"\n No. of objects to read: ";
	cin>>n;
	
	s.open("F:/1-13 OOPS LAB/12A_2A.txt",ios::out);
	
	if (s.fail())
    	cout<<"\n Unable to open"<<endl;
    else
	{
		for(int i=0;i<n;i++)
		{
			cout<<"\n------------Enter Student Record "<<i+1<<"-----------------------";
			S.read();
			s.write((char*)&S,sizeof(S));
		}
		s.close();

		s.open("F:/1-13 OOPS LAB/12A_2A.txt",ios::in);
    
		if (s.fail())
    		cout<<"\n Unable to open"<<endl;
    	else
    	{
    		for(int i=0;i<n;i++)
			{	
				s.read((char*)&R,sizeof(R));
				R.write();
			}	
		}
	}
	
	return 0;
}
