#include <iostream>
using namespace std;

int main() {
	int i,n,a[100000],count=0,g=0,x;
	cin>>n;
	cin>>x;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
		
	}
	 
	for(i=0;i<n;i++)
	{
		if(x>=a[i])
		{ count++;
		 
		
			
		}else {
			break;
		}
	}
 
	for(i=count+1;i<n;i++)
	{
		if(x>=a[i])
		{ g++;
		
		
			
		}else {
			break;
		}
	}
	
	cout<<count+g;
	
	return 0;
}