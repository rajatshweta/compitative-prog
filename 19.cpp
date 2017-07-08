#include <iostream>
#include <stack>

using namespace std;

int main() {
	 stack <int> s1,s2;
	 int i,n,w,e=0,h,l,k,g,s;
	 
	 cin>>n;
	 l=n;
	 g=n;
	  
	 while(n--)
	 {
	    cin>>w;
	 	s1.push(w);
	 	w=0;
	 }
	 
	 while(g--)
	 {
	 	k=s1.top();
	 	s2.push(k);
	 	s1.pop();
	 }
	 while(l--)
	 {
	    if(s2.top()==0)
	    {
	    	s2.pop();
	    	if(!s1.empty())
	    	{
	    		s1.pop();
	    	}
	    }
	    else
	    {
	    	h=s2.top();
	    	s1.push(h);
	    	s2.pop();
	    }
	 }
	 s=s1.size();
	 while(s--)
	 {
	 	e=e+s1.top();
	 	s1.pop();
	 }
 	 
 cout<<e;
	  
	return 0;
}