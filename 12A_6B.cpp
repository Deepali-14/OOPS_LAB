//Modify program 3 to perform random updation in file (append, ate, read, write function, seekg, seekp, tellg, tellp)

#include<iostream>

#include<fstream>

using namespace std;

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	ifstream I;
	ofstream O;
	
	I.open("F:/1-13 OOPS LAB/12A_3B.txt");
	O.open("F:/1-13 OOPS LAB/12A_6B.txt");
	
	char c;
	do
	{
		c=I.get();
		O.put(c);
	}while(c!='.');
	
	I.close();
	O.close();
	
	fstream file;
	file.open("F:/1-13 OOPS LAB/12A_6B.txt",ios::out | ios::app);
	
	streampos begin, end;
	
	begin=file.tellg();
	file.seekg(0,ios::end);
	end=file.tellg();
	
	cout<<"\n Size = "<<end-begin<<endl;
	
	char ch[]="abc";
	file<<ch;
	
	file.close();
	
	fstream In;
	
	In.open("F:/1-13 OOPS LAB/12A_6B.txt");
	
	if(In.fail())
		cout<<"\n Unable to open file"<<endl;
		
	else
	{
		char d[50];
		
		cout<<"\n Data : ";
		
		In.getline(d,20);
		
		cout<<d;
		
		cout<<endl<<"\n The current position of pointer = "<<In.tellp()<<endl;
		
		In.close();
	}
	
	return 0;
}
