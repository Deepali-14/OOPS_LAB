//WOP for storing data in file and print it in reverse order

#include<iostream>

#include<fstream>

using namespace std;

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
    char bv[]="Banasthali Vidyapith, Tonk";
    
    ofstream o;
    o.open("F:/1-13 OOPS LAB/12A_7B.txt");
    
    if (o.fail())
    	cout<<"\n Unable to open file"<<endl;
    else
    {
    	o<<bv;
    	o.close();    
    }    
   
    ifstream in;
    in.open("F:/1-13 OOPS LAB/12A_7B.txt");
    
    in.seekg(0,ios::end);
    int n=in.tellg(),i=1; 
    char ch;
    
    cout<<"\n Data : ";
    do
    {
        in.seekg(-i,ios::end);
        ch=in.get();
        if (in.bad())
            cout<<"\n Unable to run last command"<<endl;
        cout<<ch;
        ++i;
    }while(i<=n); 
    in.close();
    
    return 0;
}
