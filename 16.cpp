#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int A[], int l, int r, int key)
{
    int m;
 
    while( r -l>1 )
    {
        m = l + (r-l)/2;
 
        if( A[m] <= key )
            l = m;
        else
            r = m;
    }
 
    if( A[l] == key )
        return 1;
    else
        return 0;
}
int main() {
	int A[100000],i,r,key,t,x;
	cin>>r>>t; for(i=0;i<r;i++){ cin>>A[i];}
	sort(A,A+r);
	 
	while(t--)
	{
		cin>>key;
		if(key<A[0])
          {
            cout<<"NO"<<"\n";
          } 
          else
          if(A[r-1]<key)
          {
            cout<<"NO"<<"\n";
          }
          else
          {
		x=BinarySearch(A,0,r,key);
		if(x==0)
		{cout<<"NO"<<"\n";}
		else 
		{
			cout<<"YES"<<"\n";
		}
          }
	
	}
	return 0;
}