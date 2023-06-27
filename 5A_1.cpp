//Program on stack class 

#include<iostream>

using namespace std;

#define max 10

class Stack
{
	int stack[max];
	int top;
		public:
			void init();
			int underflow();
			int overflow();
			int push(int);
			int pop();
			int size();
			int peek();
			void display();
};

void Stack :: init()
{
	top=-1;
}
			
int Stack :: underflow()
{
	if(top==-1)
		return 1;
					
	else 
		return 0;
}
			
int Stack :: overflow()
{
	if(top==max-1)
		return 1;
					
	else 
		return 0;
}

int Stack :: push(int x)
{
	if(overflow())
	 	return -999;
	 	
	else
	{
		stack[++top]=x;
		return 1;
	}
}

int Stack :: pop()
{
	if(underflow())
		return -999;
		
	else
	{
		int x=stack[top--];
		return x;
	}
}

int Stack :: size()
{
	if(underflow())
		return 0;
		
	else 
		return top+1;
}

int Stack :: peek()
{
	if(underflow())
		return -999;
		
	else
		return stack[top];
}

void Stack :: display()
{
	if(underflow())
		cout<<"\n Stack is underflow \n";
		
	else
	{
		cout<<"\n Stack elements are : \n";
		for(int i=top; i>-1; i--)
			cout<<" "<<stack[i];
		cout<<endl;
	}
}

int main()
{
	Stack stk;
	int ch,x,r;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	stk.init();
	
	do
	{
		cout<<"\n ***** STACK IMPLEMENTATION USING OOP ***** \n";
		cout<<"\n 1. INITIALIZATION \n 2. UNDERFLOW \n 3. OVERFLOW \n 4. PUSH \n 5. POP \n 6. DISPLAY \n 7. SIZE \n 8. PEEK \n 0. EXIT";
		
		cout<<"\n Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				stk.init();
				break;
				
			case 2:
				if(stk.underflow())
					cout<<"\n Stack is underflow \n";
				else
					cout<<"\n Stack is not underflow \n";
				break;
				
			case 3:
				if(stk.overflow())
					cout<<"\n Stack is overflow \n";
				else
					cout<<"\n Stack is not overflow \n";
				break;
				
			case 4:
				cout<<"\n Enter element to push : ";
				cin>>x;
			    if(stk.push(x)!=-999)
			    	cout<<" "<<x<<" pushed \n";
			    else
			    	cout<<" "<<x<<" not pushed because stack is overflow \n";
				break;
				
			case 5:
				r=stk.pop();
				if(r!=-999)
			    	cout<<" "<<r<<" poped \n";
			    else
			    	cout<<"\n Stack is underflow \n";
				break;
				
			case 6:
				stk.display();
				break;
				
			case 7:
				cout<<"\n Stack size : "<<stk.size()<<endl;
				break;
				
			case 8:
				r=stk.peek();
				if(r!=-999)
					cout<<"\n Stack peek : "<<r<<endl;
				else
					cout<<"\n Stack is underflow \n";
				break;
				
			case 0:
				cout<<"\n We are exiting..:) \n";
				break;
				
			default :
				cout<<"\n Wrong choice entered.. \n";
		}
	}while(ch!=0);
	
	return 0;
}
