#include <iostream>
using namespace std;

int main() {
long long	 int i=0,n,a=0,b=0,c=0,array[100001];
cin>>n;
 
for(i=0;i<n;i++)
{
	cin>>array[i];
}
a=array[0];
b=array[1];
c=array[2];
for(i=0;i<n;i++)
{
	
 a=a+array[i+3] ;
 i=i+2;
}
for(i=1;i<n;i++)
{
	
 b=b+array[i+3] ;

 
  
 i=i+2;
}
for(i=2;i<n;i++)
{
	
 c=c+array[i+3] ;

 
  
 i=i+2;
}
cout<<a<<" "<<b<<" "<<c<<" ";
 



	return 0;
}