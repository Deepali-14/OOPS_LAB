//Program to design a login screen by checking username and password

#include<iostream>

#include<cstring>

#define username "Deepali Singh"

#define password "deepali_14112001"

using namespace std;

class Login
{
	char user[50], pass[50];
	
	public:
		int checkdata();
};

int Login :: checkdata()
{
	cout<<"\n Enter username : ";
	gets(user);
	
	cout<<"\n Enter password : ";
	fflush(stdin);
	gets(pass);

	if(strcmp(username,user)==0)
	{
		if(strcmp(password,pass)==0)
			return 1;
		
		else
			return 0;
	}
	
	else
		return -999;
}

int main()
{
	Login a;
	
	int r,attempts=0;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	while(attempts < 5)
	{
		r=a.checkdata();
	
		if(r==1)
		{
			cout<<"\n Welcome Deepali Singh :)";
			break;
		}
	
		else if(r==0)
			cout<<"\n Invalid Password :(";
		
		else
			cout<<"\n Invalid Username and Password :(";
		
		attempts++;
	}
	
	if(attempts==5)
		cout<<"\n Device has been locked!! Try again after 30 sec :(";
		
	return 0;
}
