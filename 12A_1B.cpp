//WOP for storing char/int/double data in file and print after reading from file

#include<iostream>

#include<fstream>

using namespace std;

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
	ofstream O;
	
	O.open("F:/1-13 OOPS LAB/12A_1B.txt");
	
	int a;
	char b;
	float c;
	
	cout<<"\n Enter data : "<<endl;
	
	cout<<"\n Enter value of a(int), b(char) and c(float) : ";
	cin>>a>>b>>c;
	
	O<<a<<" "<<b<<" "<<c<<" "; // Here O.put() or << can be used
	
	O.close();
	
	ifstream I;
	
	I.open("F:/1-13 OOPS LAB/12A_1B.txt");
	
	if(I.fail())
		cout<<"\n Unable to open file"<<endl;
		
	else
	{
		cout<<"\n Data : "<<endl;
	
		I>>a>>b>>c; //Here read(), get(), >> or getline operator can be used
	
		cout<<" "<<a<<" "<<b<<" "<<c<<" "<<endl; 
	
		I.close();
		
	}
	
	return 0;
}
