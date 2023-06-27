//Program on sum of row and diagonal of matrix

#include<iostream>

using namespace std;

#define max 5

int main()
{
	int M[max][max];
	int m,n;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	cout<<"\n Enter the size of the matrix : ";
	cin>>m>>n;
	
	cout<<"\n Enter matrix : \n";
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>M[i][j];
	
	cout<<"\n Entered matrix : \n";
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<" "<<M[i][j];	
		cout<<endl;
	}
	
	cout<<"\n Columns sum \n";
	
	int sum=0;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
			sum=sum+M[j][i];
		
		cout<<"\n Sum of column "<<i<<" is "<<sum<<endl;
		sum=0;
	}
	
	cout<<"\n Diagonal sum \n";
	
    if(m!=n)
    	cout<<"\n Diagonal element sum cannot be found because the matrix is not a sqaure matrix\n";
    
    else
    {
    	int rdsum=0, ldsum=0;	
    	
    	for(int i=0; i<m; i++)
    		for(int j=0; j<n; j++)
            {
            	if(i==j)
            		ldsum=ldsum+M[i][j];
            	
            	if(i+j == m-1)
            		rdsum=rdsum+M[i][j];
			}
			
		cout<<"\n Left diagonal sum of given matrix = "<<ldsum<<endl;
		
		cout<<"\n Right diagonal sum of given matrix = "<<rdsum<<endl;
	}		

	return 0;
}
