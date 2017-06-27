#include <bits/stdc++.h>
using namespace std;
 
 
 
 
 
 
int main() {
 int i,a[100000],h,t,key,x,z,q;
 bool u;
    cin>>h;
 for(i=0;i<h;i++)
 	{
 	cin>>a[i];
 	}
 	
 	
 	 sort(a, a+h);
  
 	cin>>t;
 
 	
 while(t--)
 { 
 	cin>>u;
    cin>>key;
    
 if(!u)
 {  
 		if(a[0]>=key)
	{
		 cout<<h<<"\n";
	}
	else if(a[h-1]<x)
	{
		cout<<0<<"\n";
	}
	else
	{
		 x=lower_bound(a, a+h, key)-a;
  
 	 
 	cout<<h-x<<"\n";}
 	}
 
 else
 {    	if(a[0]>key)
	{
		 cout<<h<<"\n";
	}
	else if(a[h-1]<key)
	
	{ cout<<0<<"\n";}
	else{
  
 		 z=upper_bound(a, a+h, key)-a;
 	cout<<h-z<<"\n";}
 }
 	
 }
	return 0;
}