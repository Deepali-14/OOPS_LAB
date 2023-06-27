//WOP to copy all data of one file and paste it to another

#include<iostream>

#include<fstream>

using namespace std;

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	ifstream I;
	ofstream O;
	
	I.open("F:/1-13 OOPS LAB/12A_2B.txt");
	O.open("F:/1-13 OOPS LAB/12A_3B.txt");
	
	cout<<"\n Entering data...."<<endl;
	char c;
	do
	{
		c=I.get();
		O.put(c);
	}while(c!='.');
	
	I.close();
	O.close();
	
	ifstream In;
	
	In.open("F:/1-13 OOPS LAB/12A_3B.txt");
	
	if(In.fail())
		cout<<"\n Unable to open file"<<endl;
		
	else
	{
		char d[50];
		
		cout<<"\n Data : ";
		
		In.getline(d,20);
		
		cout<<d;
		
		In.close();
		
		cout<<"\n Data copied successfully..!"<<endl;
	}
	
	return 0;
}
