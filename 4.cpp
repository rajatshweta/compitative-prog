#include <iostream>
using namespace std;


void givemetime( int a[],int n,int k)
{ int smallest=a[0],i ,l;
	for(i=0;i<n;i++)
 	{
 		if(smallest>a[i] )
 		{
 		smallest=a[i];}}
 		l=k-smallest;
 		if(l>0)
 		cout<<l<<endl;
 		else
 		cout<<0<<endl;
 		
	
	}

int main() {
 int t,i,n,k,a[1000000],smallest;
 cin>>t;
 while(t--)
 {
 	cin>>n>>k;
 	for(i=0;i<n;i++)
 	{
 		cin>>a[i];
 	}
 	
 givemetime( a, n, k)	;
 }
 	
 	
 
	return 0;
}