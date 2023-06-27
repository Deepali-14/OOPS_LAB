//WOOP for multilevel inheritance (publicly) over Student -> Test -> Result class

#include<iostream>

#include<cstring>

using namespace std;

#define max 20

#define n 5

class Student
{
	protected: 
		int Rollno;
		char Name[max];
	
	public:
		void get();
		void put();
};

void Student :: get()
{
	cout<<"\n Enter Roll Number : ";
	cin>>Rollno;
	
	cout<<"\n Enter Name : ";
	fflush(stdin);
	gets(Name);
}

void Student :: put()
{
	cout<<"\n Roll No. : "<<Rollno<<endl;
	
	cout<<"\n Name : "<<Name<<endl;
}

class Test : public Student 
{
	protected:
		float M[n];
	
	public:
		void getm()
		{
			cout<<"\n Enter marks in "<<n<<" subjects from 100 : ";
			for(int i=0; i<n; i++)
				cin>>M[i];
		}
		
		void putm()
		{
			cout<<"\n Marks in "<<n<<" subjects : ";
			for(int i=0; i<n; i++)
				cout<<M[i]<<"\t";
			cout<<endl;
		}
};

class Result : public Test
{
	float percent;
	char grade;
	
	public:
		void calresult()
		{
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
			cout<<"\n Percent = "<<percent<<endl;
			cout<<"\n Grade = "<<grade<<endl;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	Result r;
	
	r.get();
	
	r.getm();
	
	r.calresult();
	
	r.put();
	
	r.putm();
	
	r.putresult();
	
	return 0;
}
