#include <bits/stdc++.h>
using namespace std;

int GetRightPosition(int A[], int l, int r, int key) {
    int m;

    while( r - l > 1 ) {
        m = l + (r - l)/2;

        if( A[m] <= key )
            l = m;
        else
            r = m;
    }

    return l;
}
int GetLeftPosition(int A[], int l, int r, int key) {
    int m;

    while( r - l > 1 ) {
        m = l + (r - l)/2;

        if( A[m] >= key )
            r = m;
        else
            l = m;
    }

    return r;
}
int CountOccurances(int A[], int size, int key) {
     
    int left  = GetLeftPosition(A, -1, size-1, key);
    int right = GetRightPosition(A, 0, size, key);

     
    return (A[left] == key && key == A[right]) ? right - left + 1 : 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	 int a[100000],i,n,key    , x,y;
	 cin>>n;
	 
	 for(i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 }
	 sort(a,a+n);
	 
	 
	 int t; cin>>t;
	 while (t--)
	 {
	  cin>>key;
	  if(n==1)
	  {
	  	if(a[0]==key)
	  	{
	  		cout<<1<<"\n";
	  	}
	  	else
	  	{
	  		cout<<"NOT PRESENT"<<"\n";
	  	}
	  }
	  else
	  {
	x=  CountOccurances(a, n, key);
	if(x==0)
	 { cout<<"NOT PRESENT"<<"\n";}
	else
	{ cout<<x<<"\n";}
	 
	 }}
	return 0;
}