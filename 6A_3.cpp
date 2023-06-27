//Program on complex class functions 

#include<iostream>

using namespace std;

class Complex
{
	int R,I;
	
	public:
		void read();
		
		void display();
		
		friend Complex add(Complex,Complex);
		
		friend Complex sub(Complex,Complex);
		
		friend void mul(Complex,Complex);
};

void Complex :: read()
{
	cout<<"\n Enter value of real and imaginary part respectively : ";
	cin>>R>>I;
}

void Complex :: display()
{
	cout<<" "<<R<<"+i*"<<I<<endl;
}

Complex add(Complex Y,Complex Z)
{
	Complex T;
	
	T.R=Y.R+Z.R;
	T.I=Y.I+Z.I;
	
	return T;
}

Complex sub(Complex Y,Complex Z)
{
	Complex T;
	
	T.R=Y.R-Z.R;
	T.I=Y.I-Z.I;
	
	return T;
}

void mul(Complex Y,Complex Z)
{
	Complex T;
	
	T.R=Y.R*Z.R-((Y.I)*(Z.I));
	T.I=((Y.R)*(Z.I))+((Y.I)*(Z.R));
	
	cout<<"\n Displaying Complex number after multiplication : \n";
	cout<<" "<<T.R;
	
	if(T.I>=0)
		cout<<"+"<<T.I<<"i";
		
	else if(T.I<0)
		cout<<T.I<<"i";
}

int main()
{
	Complex A,B,C;
	int ch;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	do
	{
		cout<<"\n ***** COMPLEX CLASS *****";
		
		cout<<"\n 1. Read \n 2. Display \n 3. Addition";
		cout<<"\n 4. Subtraction \n 5. Multiplication \n 0. Exit";
		
		cout<<"\n Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"\n Reading complex number 1 : \n";
				A.read();
				
				cout<<"\n Reading complex number 2 : \n";
				B.read();
				break;
				
			case 2:
				cout<<"\n Displaying complex number 1 : \n";
				A.display();
				
				cout<<"\n Displaying complex number 2 : \n";
				B.display();
				break;
				
			case 3:
    			C=add(A,B);
    			
    			cout<<"\n Displaying Complex number after addition : \n";
    			C.display();
				break;
				
			case 4:
    			C=sub(A,B);
    			
    			cout<<"\n Displaying Complex number after subtraction : \n";
    			C.display();
				break;
				
			case 5:
				mul(A,B);
				break;
				
			case 0:
				cout<<"\n Exiting :)";
				break;
				
			default:
				cout<<"\n Wrong choice entered"<<endl;
		}
		
	}while(ch!=0);
	
	return 0;
}
