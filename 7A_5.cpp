//Program on account class functions

#include<iostream>

#include<cstring>

#include<iomanip>

using namespace std;

class Account
{
	char name[50], accno[20];
	int accamt;
	
	public : 
		Account()
		{
			strcpy(name, "\0");
			strcpy(accno, "\0");
			accamt=0.0f;
		}
		
		Account(char * nm, char * acno, int amt=0.0f)
		{
			strcpy(name, nm);
			strcpy(accno, acno);
			accamt=amt;
		}
		
		void showdata()
		{	
			cout<<endl<<" Name"<<setw(30)<<"Account number"<<setw(30)<<"Balance"<<endl;
			cout<<" "<<name<<setw(20)<<accno<<setw(20)<<"Rs."<<accamt<<endl;
		}
		
		int searchdata(char * nm)
		{
			if(strcmp(name, nm)==0)
				return 1;
			
			else 
				return 0;
		}
		
		int search(char * tempacc)
		{
			if(strcmp(accno, tempacc)==0)
				return 1;
			
			else 
				return 0;
		}
		
		void sortdata(Account * X, int n)
		{
			Account Temp;
			
			for(int i=0; i<n-1; i++)
			{
				for(int j=i+1; j<n; j++)
				{
					if(strcmp(X[i].accno,X[j].accno)>0)
					{
						Temp=X[i];
						X[i]=X[j];
						X[j]=Temp;
					}
				}
			}
		}
		
		void deposit(int);
	    
	    void withdraw(int);
	    
	    int balance(int tempamt)
	    {
	    	if(tempamt > accamt)
	    		return 0;
	    	
	    	else 
	    		return 1;
		}
		
};

void Account :: deposit(int tempamt)
{
	accamt=accamt+tempamt;
	
	cout<<"\n Your current updated account balance in "<<accno<<" : Rs."<<accamt<<endl;
}

void Account :: withdraw(int tempamt)
{
	if(tempamt > accamt)
	{
		cout<<"\n Insuficient balance \n";
		return;
	}
	
	accamt=accamt-tempamt;
	
	cout<<"\n Your current updated account balance in "<<accno<<" : Rs."<<accamt<<endl;
}

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	Account A[100];
	int n;
	
	cout<<"\n Enter total number of records : ";
	cin>>n;
	
	int ch;
	
	do
	{
		cout<<"\n ***** ACCOUNT CLASS ***** \n";
		
		cout<<"\n 1. INPUT \n 2. OUTPUT \n 3. SEARCH \n 4. SORT \n 5. DEPOSIT \n 6. WITHDRAW \n 0. EXIT"<<endl;
		cout<<"\n Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				char nm[50], acno[20];
	
				for(int i=0; i<n; i++)
				{
					cout<<"\n Enter name : ";
					fflush(stdin);
					gets(nm);
		
					cout<<"\n Enter account number : ";
					cin>>acno;
		
					A[i]=Account(nm,acno);
				}
				
				break;
				
			case 2:
				cout<<"\n ***** DISPLAYING DATA ***** \n"<<endl;
						
				for(int i=0; i<n; i++)
					A[i].showdata();
				
				break;
				
			case 3:
				cout<<"\n Enter name to search : ";
				fflush(stdin);
				gets(nm);
	
				int r;
	
				for(int i=0; i<n; i++)
				{
					r=A[i].searchdata(nm);
		
					if(r)
					{
						cout<<"\n Searched account data : "<<endl;
						A[i].showdata();
						break;
					}
				}
	
				if(r==0)
					cout<<"\n Account is not found...!"<<endl;
				
				break;
		
			case 4:
				A[0].sortdata(A,n);
	
				break;
				
			case 5:
				char tempacc[20];
				int k;
				
				cout<<"\n Enter account number of account you want to search for : ";
				cin>>tempacc;
				
				for(int i=0; i<n; i++)
				{
					k=A[i].search(tempacc);
					
					if(k==1)
					{
						int tempamt;
						
						cout<<"\n Enter amount to be deposited : ";
						cin>>tempamt;
						
						A[i].deposit(tempamt);
						break;
					}
				}
				
				if(k!=1)
					cout<<"\n Account not found \n";
					
				break;
				
			case 6:
				cout<<"\n Enter account number of account you want to search for : ";
				cin>>tempacc;
				
				for(int i=0; i<n; i++)
				{
					k=A[i].search(tempacc);
					
					if(k==1)
					{
						int tempamt;
						
						cout<<"\n Enter amount to be withdrawn : ";
						cin>>tempamt;
						
						A[i].withdraw(tempamt);
						break;
					}
				}
				
				if(k!=1)
					cout<<"\n Account not found \n";
					
				break;
			
			case 0:
				cout<<"\n We are exiting ..!"<<endl;
				
				break;
				
			default:
				cout<<"\n Wrong choice entered :( Try again ..!"<<endl;
		}
	}while(ch!=0);
	
	return 0;
}
