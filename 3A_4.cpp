//Program on student class
 
#include<iostream>

#include<iomanip>

#include<cstring>

using namespace std;

class Student
{
	int Id;
    char Sname[30];
    int Marks[5];
    
    public:
    	void Getdata();
    	
    	void Showdata();
    	
    	int Searchdata(char []);
    	
    	void Searchdata(Student *, char [], int);
    	
    	void Sortdata(Student *, int);
};

void Student :: Getdata()
{
	static int i=1;
	
    cout<<"\n Read Students Record "<<i<<" :\n";
    
    cout<<"\n Enter Students Id : ";
    cin>>Id;
    
    cout<<"\n Enter Students Name : ";
    fflush(stdin);
    gets(Sname);
    
    cout<<"\n Enter Students Marks in 5 Subjects : ";
    for(int j=0; j<5; j++)
    {
        cout<<"\n Enter marks in subject " <<j+1<<" : ";
        cin>>Marks[j];        
    }
    
    i++;
}

void Student :: Showdata()
{
    cout<<"\n Id \t\t Name \t\t M1 \t\t M2 \t\t M3 \t\t M4 \t\t M5 \n";
    cout<<" "<<Id<<setw(20)<<Sname;
    
    for(int i=0;i<5;i++)
        cout<<setw(15)<<Marks[i];
        
    cout<<endl;
}

void Student :: Searchdata(Student *Z, char t[], int n)
{
	    int i;
	    
        for(i=0; i<n; i++)
        if (strcmp(Z[i].Sname,t)==0)
        {       
			cout<<"\n Student found \n"; 
			Z[i].Showdata();        
			break;
		}
       
        if(i==n)
        cout<<"\n Student not found \n";
}

int Student :: Searchdata(char t[])
{
        if (strcmp(Sname,t)==0)
        	return 1;
        
		else
        	return 0;
}

void Student :: Sortdata(Student *Z, int n)
{
    int IT,JT;
    Student Temp;
        
    for(int i=0; i<n-1; i++)
    for(int j=i+1; j<n; j++)
    {
        IT=Z[i].Marks[0]+Z[i].Marks[1]+Z[i].Marks[2]+Z[i].Marks[3]+Z[i].Marks[4];
        JT=Z[j].Marks[0]+Z[j].Marks[1]+Z[j].Marks[2]+Z[j].Marks[3]+Z[j].Marks[4];
                        
		if (IT < JT)                            
        {
            Temp=Z[i];
            Z[i]=Z[j];
            Z[j]=Temp;
        }
    }   
}
    
int main()
{
	Student S[100];
	char temp[100];
	int ch,n,k;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	cout<<"\n Enter total no. of student records : ";
	cin>>n;
	
	do
	{
		cout<<"\n ***** STUDENTS RECORD *****\n";
		
		cout<<"\n 1. Read \n 2. Display \n 3. Search \n 4. Sort \n 0. Exit \n";
		
		cout<<"\n Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				
				for(int i=0; i<n; i++)
				S[i].Getdata();
				break;
				
			case 2:
				
				cout<<"\n Students Record : \n";
				for(int i=0; i<n; i++)
				S[i].Showdata();
				break;
				
			case 3:
				
        		cout<<"\n Read student's name to search : ";
        		fflush(stdin);
        		gets(temp);
        		
       			cout<<"\n Approach 1 \n";
        		for(int i=0; i<n; i++)
        		{
        			k=S[i].Searchdata(temp);
        			if (k==1)
        			{
        				cout<<"\n Student found \n";
       					S[i].Showdata();
        				break;
        			}
       			}
        
				if (k!=1)
      			cout<<"\n Student not found \n";
       
       			cout<<"\n Approach 2 \n";
       			S[0].Searchdata(S,temp,n);
				break;
				
		    case 4:
		    	
		    	cout<<"\n Sorting students record in descending order based on total marks in all subjects \n";
		    	S[0].Sortdata(S,n);
		    	break;
				
			case 0:
				
				cout<<"\n Exiting...Bye :) \n";
				break;
				
			default:
				
				cout<<"\n Wrong choice \n";	
		}
		
	}while(ch!=0);
	
	return 0;
}
