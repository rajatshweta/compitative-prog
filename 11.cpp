#include <bits/stdc++.h>
using namespace std;

int main() {
	 int i=0,n=0,t,a[100001],b[100001],c[100001],re, minimum ,location;
	 cin>>t;
	 
	 while(t--)
{     
    cin>>n; 
    
	  re=0;minimum=0;location=0;
	  
	  for(i=0;i<n;i++)
	  {
	  	b[i]=0;
	  }
	  for(i=0;i<n;i++)
	  {
	  	cin>>a[i];
	  }
	  
	  
	 
	  for(i=0;i<n;i++)
	  {
	  	c[i]=a[i];
	  }
	 
	  
	  
	  for(i=0;i<n;i++)
	  {    
	  	    if(a[i]==0)
	      {
	      	b[i]=6;
	      }
	  	else{
	  	 while(a[i]!=0)
	 {
	 
	 re=a[i]%10;
	 if(re==2||re==3||re==5)
	 {
	 	re=5;
	 }
	  else
	 if(re==0||re==6||re==9)
	 	{
	 		re=6;
	 	}
	  else  
	 if(re==8)
	 	{
	 		re=7;
	 	}
	  else
	 if(re==7)
	 	{
	 		re=3;
	 	}
	  else	
	 	
	  if(re==1)
	 	{
	 		re=2;
	 	}	
	  
	 
	 
	 b[i]=b[i]+re;
	 a[i]=a[i]/10;
	 }
	  	}	
	  	
	  }
 
	  minimum =b[0];
	  for ( i = 1 ; i < n ; i++ ) 
    {
        if ( b[i] < minimum ) 
        {
           minimum = b[i];
           location = i;
        }
    }
      
 
	 cout<<c[location]<<"\n";
	 }
	return 0;
}