//Program to implement CONST object, member function and arguments

#include<iostream>

#include<cstring>

using namespace std;

class String
{
	char *name;
	int length;
	
	public :
		String()
		{
			length=0;
			name=new char[length+1];
			strcpy(name, "\0");
		}
		
		String(const char *s)
		{
			length=strlen(s);
			name=new char[length+1];
			strcpy(name, s);
		}
			
		~String()
		{
			delete []name;
		}
		
		void display() const
		{
			cout<<endl<<" Name : "<<name<<endl;
		}
};

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
		
	const char *first="Deepali ";
	
    const String name1(first), name2("Arushi"); //Default and Parameterized constructor
	
	name1.display();
	
	name2.display();
	
	return 0;
}
