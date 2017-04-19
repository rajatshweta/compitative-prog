#include <iostream>
using namespace std;

int main() {
 int w,h,n,l;
 cin>>l>>n;
 while(n--)
 {  
    cin>>w>>h;
    if(w<l||h<l)
    {
    	cout<<"UPLOAD ANOTHER"<<"\n";
    }
   
    else	if(w==h)
    	{
    		cout<<"ACCEPTED"<<"\n";
    	}
    	else
    	{
    		cout<<"CROP IT"<<"\n";
    	}
    
    
 	
 }
	return 0;
}