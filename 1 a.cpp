#include<bits/stdc++.h>
using namespace std;
int i,n;
int getarray(int a[]);
int main ()
{
    int a[100005],b[100005],c[100005];
    cin>>n;
    getarray(a);
    getarray(b);
     for(i=0;i<n;++i)
     {
         c[i]=a[i]+b[i];
         cout<<c[i]<<" ";
     }





}
int getarray( int a[])
{
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    return a[i];
}
