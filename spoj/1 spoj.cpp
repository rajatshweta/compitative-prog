#include <iostream>
using namespace std;

int main() {
	 int i=0,t,b=0;
	  string a;
	  cin>>t;
	  
	  
	  while(t--)
{ 
	   cin>>a;
	  
       b=a.length();
   
 	   for(i=0;i<(b+2)/2;i++)
 	 {   
 	 	if(i%2!=0)
 	    {
	 		cout<<a[i-1];}
	 }
cout<<'\n';
	 		
b=0;
	  
}
	 
	return 0;
}