//Program over matrix class to add two matrix

#include<iostream>

using namespace std;

#define max 20

class Matrix2;

class Matrix1
{
	int M[max][max];
	int R,C;
	
	public:
		void getdata();
		friend void add(Matrix1, Matrix2);
};

class Matrix2
{
	int N[max][max];
	int R,C;
	
	public:
		void getdata();
		friend void add(Matrix1, Matrix2);
};

void Matrix1 :: getdata()
{
	cout<<"\n Enter size of array : ";
	cin>>R>>C;
	
	cout<<"\n Enter elements of Matrix 1 : \n";
	for(int i=0; i<R; i++)
		for(int j=0; j<C; j++)
		 	cin>>M[i][j];		 	
}

void Matrix2 :: getdata()
{
	cout<<"\n Enter size of array : ";
	cin>>R>>C;
	
	cout<<"\n Enter elements of Matrix 2 : \n";
	for(int i=0; i<R; i++)
		for(int j=0; j<C; j++)
		 	cin>>N[i][j];			 	
}

void add(Matrix1 m, Matrix2 n)
{
	Matrix1 T;
	
    T.R=m.R;  
    T.C=n.C;  
    
    for(int i=0;i<T.R;i++)
        for(int j=0;j<T.C;j++)
        	T.M[i][j]= m.M[i][j] + n.N[i][j];   
    
    cout<<"\n Sum of given matrices : \n";
    for(int i=0;i<T.R;i++)
    {
    	for(int j=0;j<T.C;j++)
        	cout<<T.M[i][j]<<"\t";
    	cout<<endl;
	}
}

int main()
{
	Matrix1 m;
	Matrix2 n;
	
	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
	
	m.getdata();
	n.getdata();
	
	add(m,n);
	
	return 0;
}
