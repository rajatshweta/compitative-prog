#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	vector <int> v1(101),v2(101),v3(101),v4(101);
	
 int t,n,x,y,q,w,e,r,i,z; cin>>t;
 bool k,p;
 
 while(t--)
 {
 	cin>>n; k=false; p=false;
 	
     
     v1.resize(n);
      
     v3.resize(n);
     
     
 	for(i=0;i<n;i++)  {  cin>>v1[i];  }
 	for(i=0;i<n;i++)  {  cin>>v3[i];  }
 	
 	for(i=0;i<n;i++)  { v2[v1[i]]++; }
 	for(i=0;i<n;i++)  { v4[v3[i]]++; }
 	
  
 	
 	x=*max_element(v1.begin(),v1.end());  y=*max_element(v3.begin(),v3.end());
 	
 	
 	q=v2[0];
 	e=v4[0];
 	for(i=0;i<101;i++)  {  if( q<=v2[i] )  {  q=v2[i]; w=i;  }   } 
  
 	i=0;
 	for(i=0;i<101;i++)  {  if( e<=v4[i] )  {  e=v4[i]; r=i;  }   } 
  
 	
 	for(i=0;i<101;i++)  {  if(v2[i]==0 )  {  v2[i]=q;   }   } 
 	for(i=0;i<101;i++)  {  if(v4[i]==0 )  {  v4[i]=e;   }   } 
 	 
 	
 	for(i=0;i<101;i++)  {  if(v2[i]!=v2[0] )  {  k=true; break;  }   } 
 	for(i=0;i<101;i++)  {  if(v4[i]!=v4[0] )  {  p=true; break;  }   }
 	
 	if(!k) { w=x; }    if(!p) { r=y; }
 	
 	if(w==r)  {  cout<<"Tie"<<"\n";   }
 	else
 	{
 		
 	if(w>r)   {  cout<<"Rupam"<<"\n"; }
 	 else
 	          {  cout<<"Ankit"<<"\n";}
 	
 	}
 	
 	for(i=0;i<n;i++)
 	{
 		v1[i]=0;
 		 
 		v3[i]=0;
  
 	}
 	
 	for(i=0;i<101;i++)
 	{
 		 
 		v2[i]=0;
 		 
 	    v4[i]=0;
 	}
 	
 }
	return 0;
}