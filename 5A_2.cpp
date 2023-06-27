//Program on queue class

#include<iostream>

using namespace std;

#define max 10

class Queue
{
    int LQ[max];
    int F,R;
    public:
        void Init() 
		{
			F=R=-1;
		}
				
        int Overflow()
        {
       		if(R==(max-1))
        		return 1;
        	else
        		return 0;
		}
				
        int Underflow()
        {	
        	if(F==-1)
        		return 1;
        	else
        		return 0;
		}
				
		int Enqueue(int x);
        int Dequeue();
        int Size();
        int Peek();
        void Display();
};

int Queue :: Enqueue(int x)
{
    if(Overflow())
        return -999;
    
    else
    {
    	if(R==-1)
    		R=F=0;
    		
    	else
    		R++;
    		
    	LQ[R]=x;
    	return 1;
	}
}

int Queue :: Dequeue()        
{
    if(Underflow())
        return -999;
            
    else
    {
        int temp=LQ[F];
                
		if(F==R)  
			Init();
				
        else           
			F++;  
					      
        return temp;
    }
}

int Queue::Size()
{
    if(Underflow())
       	return 0;
    
    else
        return(R-F+1);
}

int Queue :: Peek()
{
	if(Underflow())
		return -999;
		
	else
		return LQ[F];
}

void Queue::Display()
{
    if(Underflow())
        cout<<"\n Queue is underflow \n";
        
    else
    {
        cout<<"\n Queue elements are : \n";
        for(int i=F;i<=R;i++)
            cout<<" "<<LQ[i];
        cout<<endl;
    }
}

int main()
{
	Queue lq;
	int ch,x,r;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	lq.Init();
	
	do
	{
		cout<<"\n ***** QUEUE IMPLEMENTATION USING OOP ***** \n";
		cout<<"\n 1. INITIALIZATION \n 2. UNDERFLOW \n 3. OVERFLOW \n 4. ENQUEUE \n 5. DEQUEUE \n 6. DISPLAY \n 7. SIZE \n 8. PEEK \n 0. EXIT";
		
		cout<<"\n Enter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				lq.Init();
				break;
				
			case 2:
				if(lq.Underflow())
					cout<<"\n Queue is underflow \n";
				else
					cout<<"\n Queue is not underflow \n";
				break;
				
			case 3:
				if(lq.Overflow())
					cout<<"\n Queue is overflow \n";
				else
					cout<<"\n Queue is not overflow \n";
				break;
				
			case 4:
				cout<<"\n Enter element to enqueue : ";
				cin>>x;
			    if(lq.Enqueue(x)!=-999)
			    	cout<<" "<<x<<" enqueued \n";
			    else
			    	cout<<" "<<x<<" not enqueued because queue is overflow \n";
				break;
				
			case 5:
				r=lq.Dequeue();
				if(r!=-999)
			    	cout<<" "<<r<<" dequeued \n";
			    else
			    	cout<<"\n Queue is underflow \n";
				break;
				
			case 6:
				lq.Display();
				break;
				
			case 7:
				cout<<"\n Queue size : "<<lq.Size()<<endl;
				break;
				
			case 8:
				r=lq.Peek();
				if(r!=-999)
					cout<<"\n Queue peek : "<<r<<endl;
				else
					cout<<"\n Queue is underflow \n";
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
