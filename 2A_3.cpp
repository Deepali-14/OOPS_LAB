//Program on difference between two dates in days

#include<iostream>

using namespace std;

int fun(int,int,int);

int main() 
{
   	int d1,d2,m1,m2,yr1,yr2;
   	
   	cout<<endl<<" Deepali "<<endl<<" 2016736 "<<endl;
   
   	cout<<"\n Enter valid dates"<<endl;
   
   	cout<<"\n 1) Enter start date, month and year : "<<endl;
   	cin>>d1>>m1>>yr1;
   	cout<<d1<<"-"<<m1<<"-"<<yr1;
   
  	cout<<"\n 2) Enter final date, month and year : "<<endl;
   	cin>>d2>>m2>>yr2;
   	cout<<d2<<"-"<<m2<<"-"<<yr2;
   
   	int diff;
   
   	if((yr1==yr2) && (m1==m2))
   	{
      	diff=d2-d1;
      	cout<<"\n The difference in days of two years : "<<diff;
      	exit(0);
   	}  
   
   	else if(yr1==yr2)
   	{
      	if(m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12)
      		diff=(31-d1);
      
      	else if(m1==2)
      	{
         	if (((yr1%4==0) && (yr1%100!=0)) || (yr1%400==0))
         		diff=(29-d1);
         
		 	else
         		diff=(28-d1);
      	}
      
     	else
      		diff=(30-d1);
      
	  	diff=diff+d2;
	  
      	for(int i=m1+1;i<m2;i++)
      	{
        	if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
        		diff=diff+31;
        
        	else if(i==2)
        	{
          		if (((yr1%4==0) && (yr1%100!=0)) || (yr1%400==0))
          			diff=diff+29;
          	
				else
          			diff=diff+28;
        	}
        
        	else
        		diff=diff+30;
      	}
      
      	cout<<"\n The difference in days of two years : "<<diff<<endl;
   }
   
   else
   {
   		int day1,day2,i,t=0,c=0;
   		
      	day1=fun(d1,m1,yr1);
      	day2=fun(d2,m2,yr2);
      	i=yr2;
      	
		if (((i%4==0) && (i%100!=0)) || (i%400==0))
      		day2=366-day2;
      	
	    else
      		day2=365-day2;
      	
      	for(i=yr1+1;i<yr2;i++)
      	{
         	if (((i%4==0) && (i%100!=0)) || (i%400==0))
         		t++;
         	
			 else
         		c++;
      	}
      	
      	diff=day1+day2+c*365+t*366;
      
	  	cout<<"\nThe difference in days of two years : "<<diff<<endl;
   }
   return 0;
}

int fun(int d,int m,int yr)
{
   int day=0;
   
   switch(m) 
   {
     	case 1:
          	if(m==1)
          		day=day+(31-d);
          	else
          		day=day+31;
          		
    	case 2:
          	if (((yr%4==0) && (yr%100!=0)) || (yr%400==0))
          	{
            	if(m==2)
            		day=day+(29-d);
            	else
            		day=day+29;
          	}
          	else
          	{
            	if(m==2)
            		day=day+(28-d);
            	else
            		day=day+28;
          	}
          	
    	case 3:
          	if(m==3)
          		day=day+(31-d);
          	else
          		day=day+31;
          
     	case 4:
          	if(m==4)
         		day=day+(30-d);
         	else
          		day=day+30;
          
     	case 5:
          	if(m==5)
          		day=day+(31-d);
          	else
          		day=day+31;
          
     	case 6:
          	if(m==6)
          		day=day+(30-d);
          	else
          		day=day+30;
          		
     	case 7:
          	if(m==7)
          		day=day+(31-d);
          	else
          		day=day+31;
          		
     	case 8:
          	if(m==8)
          		day=day+(31-d);
          	else
          		day=day+31;
          		
     	case 9:
          	if(m==9)
          		day=day+(30-d);
          	else
          		day=day+30;
          		
     	case 10:
          	if(m==10)
          		day=day+(31-d);
          	else
          		day=day+31;
          		
    	case 11:
          	if(m==11)
          		day=day+(30-d);
          	else
          		day=day+30;
          	
     	case 12:
          	if(m==12)
          		day=day+(31-d);
			else
          		day=day+31;
   }
   
   return day;
}

