#include<iostream>

#include<cstring>

using namespace std;

class String 
{
	char *p;
	int l;
	
	public:
		String()
		{
			l=0;
			p=new char[l+1];
			strcpy(p,"\0");
		}
		
		String(const char c[])
		{
			l=strlen(c);
			p=new char[l+1];
			strcpy(p,c);
		}	
		
		void show()
		{
			cout<<"\n String : "<<p<<"\n Length : "<<l<<endl;
		}
		
		~ String()
		{
		}	
		
		void wordsearch(const char []);
		
		void vcount();
		
		friend String operator +(String a, String b)
		{
			String temp;
			
			temp.l=strlen(a.p)+strlen(b.p);
			temp.p=new char[temp.l+1];
			strcpy(temp.p,a.p);
			strcat(temp.p,b.p);
			
			return temp;
		}
		
		friend void operator -(String a, String b)
		{
			int flag,i=0;
			while(a.p[i]!='\0')
			{
				flag=0;
				for(int j=0;b.p[j]!='\0';j++)
				{
					if(a.p[i]==b.p[j])	
					{
						flag=1;
						break;
					}	
				}
				if(flag==0)
					cout<<" "<<a.p[i];
				i++;
			}
			
			cout<<endl;
		}
};

void String :: wordsearch(const char sub[])
{
    int j=0,cn=0;
    char ch;
      
    for(int i=0;i<strlen(p);i++)
    {
     	ch=p[i];
     	if(ch==sub[j])
     	{
     		j++;
			if(j==strlen(sub))
			{
				cn++;
				j=0;
			}	
		}
		else
		j=0;
	}
	cout<<"\n Substring found " << cn <<" times in the string"<<endl;
}

void String :: vcount()
{
	char c;
	int vc=0,cc=0;
	
	for(int i=0;p[i]!='\0';i++)
	{
		c=p[i];
	
	    if(isalpha(c))
		{
			if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
			vc++;
		
		    else
			cc++;
		}
	}
	
	cout<<" No. of vowels in string s3(s1+s2) = "<<vc<<endl;
}

int main()
{
	String s1("Banasthali"),s2("Vidyapith"),s3;
	
	s1.show();
	s2.show();
	
	cout<<"\n Finding characters that are in string s1 but not in s2"<<endl;
	s1-s2;
	
	cout<<"\n Finding substring Vidya in string s2 ";
	s2.wordsearch("Vidya");
	
	s3=s1+s2;
	s3.show();
	
	s3.vcount();
	
	return 0;
}
