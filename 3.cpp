#include <iostream>
using namespace std;

void lucky(int a[], int n)
  {
 int i,j,c=0,b=2147483647;
 
 for(i=0;i<n;i++)
 { if(a[i]<b)
 { b=a[i];}}
 for(i=0; i<n; i++)
   {
     
     
    if(a[i]==b)
    { c++;
   
    }
   
   }
    if(c%2==0)
    { cout<<"Unlucky\n";}
    else { cout<<"Lucky\n";}
    
  }

int main() {
	int i,n,t,a[100000];

 cin>>t;
 
 while(t--)
 {
  cin>>n;
 for(i=0;i<n;i++)
 { 
 	cin>>a[i];
 	}
 lucky(a,n);

 }
	return 0;
}