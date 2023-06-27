//Program for string class functions

#include<iostream>

#include<string.h>

using namespace std;

class String
{
    char *p;
    int l;
       
        public:
            void Read(char const s[])
            {
                l=strlen(s);
                p=new char[l+1];
                strcpy(p,s);
            }
                
            friend void Concate(String y,String z)
            {
                String Temp;
                    
				Temp.l=y.l+z.l;
                Temp.p=new char[Temp.l+1];
                strcpy(Temp.p,y.p);
                strcat(Temp.p,z.p);
                    
                cout<<"\n Concatinated String is " <<Temp.p<<endl;
            }
            
            friend void Compare(String y, String z)
            {
            	if(strcmp(y.p,z.p)==0)
            		cout<<"\n Both the strings are same"<<endl;
            		
            	else
            		cout<<"\n Both the strings are different"<<endl;
			}
};

int main()
{
    String P,Q;
    char m[30],n[30];
    
    cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
    
    cout<<"\n Enter first string : ";
    gets(m);
    
    cout<<"\n Enter second string : ";
    gets(n);
    
    P.Read(m);
    Q.Read(n);
    
    Concate(P,Q);
    
    Compare(P,Q);
    
    return 0;
}

