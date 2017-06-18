#include <iostream>
using namespace std;

int main() {
	 int i,a[10001],b[10001]={0},n,v,k=1  ;
	 cin>>n;
	 for(i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 }
	 for(i=0;i<n;i++)
	 {
	 v=i+a[i]+1;
	 if(v>n)
	 {
	 	b[i]=v;
	 }
	 }
	 for(i=0;i<n;i++)
	 {
	    if(b[i]>n)
	    {
	    	    break; 
	    }
	    k++;
	 }
	 
	 cout<<k;
	return 0;
}