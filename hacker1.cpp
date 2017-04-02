#include <iostream>
using namespace std;

void dump(int a[],int n,int c,int b,int k)
{   
	 int i=0;
	for(i=c-1;i<b;i++)
	 {
	 	a[i]+=k;
	 }
	
	}
	 

int main() {
	 int i,n,m,c,b,k,first=0;
	 
	 cin>>n>>m;
	 int *a = new int[n];
	  
	 for(i=0;i<n;i++)
	 {
	 	a[i]=0;
	 }
 
	 while(m--)
	 { cin>>c>>b>>k;
	dump(a,n,c,b,k);
	 
	 }
	 first=a[0];
	 
for(i=0;i<n;i++)
	 {
	 	if(first<a[i])
	 	{ first=a[i];
	 		
	 	}
	 }
	 
	cout<<first;
	 
	 
	return 0;
}