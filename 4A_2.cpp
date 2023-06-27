//Program on 2-D matrix functions

#include<iostream>

using namespace std;

class Matrix 
{
	int R,C;
	int M[5][5];
	
	public :
		
		void read();
		
		void print();
		
		void transpose(Matrix);
};

void Matrix :: read()
{
    cout<<"\n Read row size and column size : ";
    cin>>R>>C;
    
    cout<<"\n Enter elements : \n";
	for(int i=0;i<R;i++)
    for(int j=0;j<C;j++)
    cin>>M[i][j];
}

void Matrix :: print()
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        cout<<M[i][j]<<"\t";
        
        cout<<"\n";
    }
}

void Matrix :: transpose(Matrix Y)
{
	R=Y.C;
	C=Y.R;
	
	for(int i=0;i<R;i++)
	for(int j=0;j<C;j++)
	M[i][j]=Y.M[j][i];
}

int main()
{
	Matrix A;
    int ch;
    
    cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
    
    do
    {
    	cout<<"\n ***** 2-D matrix functions *****";
    	
    	cout<<"\n 1. Read \n 2. Display \n 3. Transpose \n 0. Exit";
    	
    	cout<<"\n Enter your choice : ";
    	cin>>ch;
    	
    	switch(ch)
    	{
    		case 1:
    			cout<<"\n Enter matrix 1 : \n";
    			A.read();
    			
    			break;
    			
    		case 2:
    			cout<<"\n Displaying matrix 1 : \n";
    			A.print();

    			break;
    			
    		case 3:
    			cout<<"\n Displaying matrix 1 after transpose : \n";
    			A.transpose(A);
    			A.print();
    			
    			break;
    				
    		case 0:
    			printf("\n Exiting :)");
    			
    			break;
    			
    		default:
    			printf("\n Wrong choice entered");	
		}
	}while(ch!=0);
	
    return 0;
}
