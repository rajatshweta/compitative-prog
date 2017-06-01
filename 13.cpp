#include <bits/stdc++.h>
using namespace std;

int main() {
 int a,j=0;
 cin>>a;
 string str1,str2;
 cin>>str1>>str2;
 
  
   sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());
   
    for(int i=0;i<a;i++)
    {
     if(str1[i]!=str2[i])
     {
     j++;	
     }
    }
    if(j==0)
    {
    	cout<<"YES";
    }
    else
    {
    	cout<<"NO";
    }

	return 0;
}