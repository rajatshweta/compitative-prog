#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
	 stack <int> s1,s2;
	 int i,j,k,n,a[10001],t,l,x,w,g;
	 string s;
	 cin>>n;
	 for(i=0;i<n;i++) { cin>>a[i]; }
	 cin>>t>>k;
	 i=0;
	 while(t--)
	 {   w=0;
	 	cin>>s;
	 	if(s=="Remove")
	 	{     
	 		s1.pop();
	 	}
	 	else
	 	{
	 	    j=a[i];
	 	    s1.push(j);
	 	    i++;
	 	}
	 	   l=s1.size();
	 	   g=l;
	 	   while(l--)
	 	   {  
	 	   	  x=s1.top();
	 	   	  s2.push(x);
	 	   	  w=w+x;
	 	   	  s1.pop();
	 	   }
	 	   while(g--)
	 	   {
	 	   	x=s2.top();
	 	   	
	 	   	s1.push(x);
	 	   	s2.pop();
	 	   }
	 	   if(w==k)
	 	   {
	 	   	cout<<s1.size();
	 	   	break;
	 	   }
	 }
	 if(w!=k)
	 {
	     cout<<"-1";
	 }
	  
	return 0;
}