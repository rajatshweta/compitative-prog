#include <iostream>
#include <stack>
using namespace std;

int main() {
	
	stack <char> s1,s2;
	string s;
	int m,i,j,l=0,v,q;
	char k,z;
	cin>>m;
	while(m--)
	{ cin>>s;
	if(s.size()%2==0)
	{
	for(i=s.size()-1;i>=0;i--)
	{
		k=s[i];
		s1.push(k);
	}
	
	j=s1.size();
	while(j--)
	{
		z=s1.top();
		if(s2.empty()==true)
		{
			s2.push(z);
			s1.pop();
			
		}
		else
		{
			if(s1.top()==s2.top())
			{
				s1.pop();
				s2.pop();
			}
			else
			{
				q=s1.top();
				s2.push(q);
				s1.pop();
			}
		}
	}
/*	
q=s1.size();
	while(q--)
	{
		cout<<s1.top();
		s1.pop();
	}*/
	if(s2.empty()==true)
	{
		l=l+1;
	}
	v=s2.size();
	while(v--)
	{
		s2.pop();
	}
	}	
	}
	cout<<l;
 
	return 0;
}