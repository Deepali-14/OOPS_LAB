//WOP for storing char(s) upto user's choice in file and then retrive and print it(get, put, eof)

#include<iostream>

#include<fstream>

using namespace std;

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	ofstream O;
	
	O.open("F:/1-13 OOPS LAB/12A_2B.txt");
	
	char c;
	
	cout<<"\n Program will terminate when '.' encountered"<<endl;
	
	cout<<"\n Enter data : "<<endl;
	
	int i=0;
	do
	{
		cout<<"\n Enter data "<<++i<<" : ";
		cin>>c;
		O.put(c);
	}while(c!='.');
	
	O.close();
	
	ifstream I;
	
	I.open("F:/1-13 OOPS LAB/12A_2B.txt");
	
	if(I.fail())
		cout<<"\n Unable to open file"<<endl;
		
	else
	{
		cout<<"\n Data : "<<endl;
		char ch;
		
		do
		{
			ch=I.get();
			cout<<" "<<ch<<" ";
		}while(ch!='.');
	}	
	
	I.close();
	
	return 0;
}
