//WOP for implement all 5 IOS function nad manipulators

#include<iostream>

#include<iomanip>

#include<math.h>

using namespace std;

int main()
{
	cout<<"\n Deepali \n 2016736"<<endl;
    int i=546, j=3;   
   
    cout.width(10);
    cout.precision(3);
    cout<<i<<endl;
    cout.width(10);
    cout<<j<<endl;
   
    float f=6.74343933;
    cout.setf(ios::fixed,ios::floatfield);
    cout<<f<<endl;
    cout.precision(3);
    cout<<f<<endl;
    float g=7.5000000000;
    cout<<g<<endl;
    cout<<sqrt(2)<<endl;
   
    cout.setf(ios::internal,ios::adjustfield);
    cout.width(10);
    cout.fill('&');
    cout<<i<<endl;
   
    int ii=-5556;
    cout.setf(ios::internal,ios::adjustfield);
    cout.setf(ios::left,ios::adjustfield);
    cout.width(10);
	cout.fill('&');
    cout<<ii<<endl;
   
    float h=0.00000077445005;
   
    h=7.74e-7;
    cout.setf(ios::scientific,ios::floatfield);
    cout<<h<<endl;
   
    int k=87;
    cout.width(10);
    cout.setf(ios::left,ios::adjustfield);
    cout.setf(ios::oct,ios::basefield);
    cout<<k<<endl;
    cout.unsetf(ios::fixed);
    cout.setf(ios::fixed,ios::floatfield);
    float m=78.60000;
    cout.precision(4);
    cout.setf(ios::showpoint);
    cout<<m<<endl;
   
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout.precision(3);
    cout.setf(ios::fixed,ios::floatfield);
    cout.setf(ios::internal,ios::adjustfield);
    cout.width(10);
    cout<<275.5<<endl;
   
    m=78.60000;
    cout.precision(4);
    cout.setf(ios::showbase);
    cout<<m<<endl;
   
    int l=18;
    cout.setf(ios::showbase);
    cout<<l<<endl;
   
    cout<<setw(5)<<setprecision(2)<<endl<<1.2345<<setw(10)
    <<setprecision(4)<<sqrt(2)<<setw(15)<<endl
    <<setiosflags(ios::scientific)<<sqrt(3)<<endl;
    cout<<setiosflags(ios::right)<<setiosflags(ios::dec)<<setw(10)<<12345<<endl;
   
    return 0;
}
