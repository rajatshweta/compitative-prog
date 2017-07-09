#include <iostream>
#include<stack>
using namespace std;

int main() {
	stack < int> s1,s2;
	int i ,n,w,q,t,z,b;
	char s;
	cin>>t;
	while(t--)
	{
		cin>>q>>n;
		s1.push(n);
		while(q--)
		{
			cin>>s;
			if(s=='P')
			{  
				cin>>w;
				s1.push(w);
				if(s2.empty()==false)
				{
					s2.pop();
				}
				
				
			}
			else
			{    if(s2.empty()==true)
			 {
				z=s1.top();
				s1.pop();
				s2.push(z);
			 }
			 else
			 {
				z=s2.top();
				s1.push(z);
				s2.pop();
			 }
			}
				
			
		}
		cout<<"Player"<<" "<<s1.top()<<"\n";
		b=s1.size();
		while(b--)
		{
			s1.pop();
			if(!s2.empty())
			{
				s2.pop();
			}
		}
	}
	
	return 0;
}