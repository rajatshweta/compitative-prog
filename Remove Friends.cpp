#include <iostream>
#include <deque>
using namespace std;

int main() {
	 deque <int> q1,q2;
	 int t,n,k,l,i,z,m; cin>>t; bool p;
	 while(t--)
	 {  m=0; p=false;
	 	cin>>n>>k;
	 	for(i=0;i<n;i++)  { cin>>l;  q1.push_back(l);  }
	 	
	 	z=q1.front(); q1.pop_front();
	 	while(!q1.empty())
	 	{   
	 	if(q2.empty())
	 	{
	 		if(z<q1.front()) { z=q1.front(); q1.pop_front(); m++; p=true;  }
	 		
	 		else {q2.push_back(z);  z=q1.front(); q1.pop_front();}
	 	}
	 	else
	 	{ 
	 		if(z<q1.front()) {z=q2.back(); q2.pop_back(); m++; p=true; }
	 		
	 		else {q2.push_back(z);  z=q1.front(); q1.pop_front();}
	 		
	 	}
	 	if(m==k) { break; }
	 	}
	 	
	 	if(p==false) { q1.pop_back(); }
	 	
	 	while(!q2.empty()) { cout<<q2.front()<<" "; q2.pop_front(); }
	 	cout<<z<<" ";
	 	while(!q1.empty()) { cout<<q1.front()<<" "; q1.pop_front(); }
	 	cout<<"\n";
	 	
	 	
	 	
	 	
	 }
			
		  
 
	
	return 0;
}