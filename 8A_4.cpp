//WOOP for multilevel inheritance (protected / Private) over Student -> Test -> Result class

#include<iostream>

#include<cstring>

#include<iomanip>

using namespace std;

#define max 20

#define n 10

class Student
{
	protected: 
		int Rollno;
		char Name[max];
	
	public:
		void get()
		{
			cout<<"\n Enter Roll Number : ";
			cin>>Rollno;
	
			cout<<"\n Enter Name : ";
			fflush(stdin);
			gets(Name);
		}
		
		void put()
		{
			cout<<"\n Roll No. : "<<Rollno<<endl;
	
			cout<<"\n Name : "<<Name<<endl;
		}
};

class Test : private Student 
{
	protected:
		float M[n];
	
	public:
		void getm()
		{
			get();
			cout<<"\n Enter marks in "<<n<<" subjects from 100 : ";
			for(int i=0; i<n; i++)
				cin>>M[i];
		}
		
		void putm()
		{
			put();
			cout<<"\n Marks in "<<n<<" subjects : ";
			for(int i=0; i<n; i++)
				cout<<M[i]<<"\t";
			cout<<endl;
		}
};

class Result : private Test
{
	float percent;
	char grade;
	
	public:
		void calresult()
		{	
			getm();
			
			float total=0.0;
			
			for(int i=0; i<n; i++)
				total=total+M[i];
			
			percent=total/(n*100)*100;
			
			if(percent>=90)
				grade='O';
				
			else if(percent>=80 && percent<90)
				grade='A';
				
			else if(percent>=70 && percent<80)
				grade='B';
				
			else if(percent>=60 && percent<70)
				grade='C';
				
			else 
			 	grade='D';
		}
		
		void putresult()
		{
			putm();
			cout<<"\n Percent = "<<percent<<endl;
			cout<<"\n Grade = "<<grade<<endl;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	Result r;
	
	r.calresult();
	
	r.putresult();
	
	return 0;
}
