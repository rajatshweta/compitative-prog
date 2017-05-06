#include <iostream>
using namespace std;

int main() {
 int n,i=0,s;
 int m[7]={0,0,0,0,0,0,0};
 string b;
 cin>>n;
 cin>>b;
 for(i=0;i<n;i++)
 {
 	if(b[i]=='h')
 	{
 		m[0]++;
 	}
 	
 	if(b[i]=='a')
 	{
 		m[1]++;
 	}
 	
 	if(b[i]=='e')
 	{
 		m[2]++;
 	}
 	
 	if(b[i]=='r')
 	{
 		m[3]++;
 	}
 	
 	if(b[i]=='c')
 	{
 		m[4]++;
 	}
 	
 	if(b[i]=='k')
 	{
 		m[5]++;
 	}
 	
 	if(b[i]=='t')
 	{
 		m[6]++;
 	}
 }
 m[0]=m[0]/2;
 m[1]=m[1]/2;
 m[2]=m[2]/2;
 m[3]=m[3]/2;
 s=m[0];
  for(i=0;i<7;i++)
  {
  	if(m[i]<s)
  	{
  		s=m[i];
  	}
  }
 cout<<s;
	return 0;
}