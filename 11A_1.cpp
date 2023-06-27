//WOOP using object pointer over student class for holding and printing data of n students

#include<iostream>

#include<iomanip>

using namespace std;

#define max 20

class Student
{
	char name[max];
    int rn;
   
    public:
       
        void Read()
        {
        	cout<<"\n Enter name : ";
        	fflush(stdin);
        	gets(name);
        	
        	cout<<"\n Enter roll number : ";
            cin>>rn;
        }
   
        void Show()
        {
        	cout<<"\n Name "<<setw(30)<<" Roll number "<<endl;
            cout<<" "<<name<<setw(20)<<rn<<endl;
        }
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
    int n;
    
    cout<<"\n Enter number of students : ";
    cin>>n;
    
    Student *p=new Student[n];
   
   	cout<<"\n ******* Entering data..... ******* "<<endl;
    for(int i=0;i<n;i++)
    {
        p->Read();
        p++;    
    }
    p=p-n;
    
    cout<<"\n ******* Entered data..... ******* "<<endl;
    for(int i=0;i<n;i++)
    {
        p->Show();
        p++;    
    }
    
    return 0;
}
