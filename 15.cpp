#include <bits/stdc++.h>
using namespace std;
int lpb(int a[],int l,int h,int key )
{
	int m;
	while(l<h)
	{
		m=l+(h-l)/2;
		if(a[m]<=key)
		{
		l=m+1;
		}
		else
		{
		  h=m; 
		}
	}
	return l;
	}
int main() {
 int a[10000],i,h,t,key,sum=0,x;
 
 cin>>h; for(i=0;i<h;i++){ cin>>a[i];}
 cin>>t;
 sort(a,a+h);
 while(t--)
 {
 	cin>>key;
 	sum=0;
 	if(key<a[0])
 	{
 		cout<<0<<" "<<0<<"\n";
 	}
 	else if(a[h-1]<=key)
 	{ 
 	cout<<h<<" ";
 	for(i=0;i<h;i++){ sum=sum+a[i];}
 	cout<<sum<<"\n";
 	}
 	else
 	{
 	x=lpb(a,0,h-1,key);
 	  
 	cout<<x<<" ";
 	for(i=0;i<x;i++){ sum=sum+a[i];}
 	cout<<sum<<"\n";
 	}
 }
	return 0;
}