#include <iostream>
using namespace std;
 

int main() {
	int i,t;
	cin>>t;
while(t--)
{ 
   string p1;
   cin>>p1;
	  
 
	 int c=0;
	 for(i=0;p1[i]!='\0';i++)
{
	if(p1[i]=='A'||p1[i]=='E'||p1[i]=='I'||p1[i]=='O'||p1[i]=='U'||p1[i]=='a'||p1[i]=='e'||p1[i]=='i'||p1[i]=='o'||p1[i]=='u')
	{
		c++;
	}
}
cout<<c<<"\n";
	 }
	return 0;
}