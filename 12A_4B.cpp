//WOP to test file state functions over any suitable file.(fail, good, bad, eof)

#include<iostream>

#include<fstream>

using namespace std;

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
	
    ifstream in("F:/1-13 OOPS LAB/12A_3B.txt");
    char st[80];
    
    if (in.fail())
        cout<<"\n Unable to open file"<<endl;
        
    else
    {        
        if (in.bad())
            cout<<"\n Fatal error";
            
        else if (in.good())
            cout<<"\n No error. Command run successful ..!"<<endl;
            
        cout<<"\n Data : ";
        while(!in.eof())
        {
                in.getline(st,80);
                cout<<st;
        }
    }
    in.close();
    
    return 0;
}
