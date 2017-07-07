#include <iostream>
#include <stack>
using namespace std;

int main() {
     stack <int> a1;
	 int t,q,c;   cin>>t;
	 while(t--)
	 {
	 	cin>>q;
	 	if(q==1)
	 	{
	 		if(a1.empty()==true)
	 		{ 
	 			cout<<"NO FOOD"<<"\n";
	 		}
	 		else
	 		{
	 			cout<<a1.top()<<"\n";
	 			a1.pop();
	 		}
	 	}
	 	else
	 	{
	 		cin>>c;
	 		a1.push(c);
	 	}
	 }
	return 0;
}