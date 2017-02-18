#include <iostream>
using namespace std;

int main() {
	 int i,a,b[109],j;
	 cin>>a;
	 for(i=0;i<a;i++)
	 {
	 cin>>b[i];
	 }
	 for(i=0;i<a;++i)
	 { for(j=i+1;j<a;j++)
	 {
	   if(b[i]==b[j])
	   {
	   	cout<<"YES";

	   }
	   else{ cout<<"NO";}
	 }

	 }
return 0;
}
