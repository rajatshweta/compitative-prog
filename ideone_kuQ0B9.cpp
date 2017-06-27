#include <bits/stdc++.h>
using namespace std;
int lowerbound(int a[],int start,int end,int item){
	while(start<end){
		int mid = (start+end)>>1;
		if(a[mid]>=item)
			end = mid;
		else
			start = mid + 1;
	}
	return start;
}
int upperbound(int a[],int start,int end,int item){
	while(start<end){
		int mid = (start+end)>>1;
		if(a[mid]<=item)
			start = mid + 1;
		else
			end = mid;
	}
	return start;
}

int main() {
 int i,a[100000],h,t,key,z;
 bool u;
 cin>>h;
 for(i=0;i<h;i++)
 	{
 		cin>>a[i];
 	}
   
 cin>>key;
// auto x=lower_bound(a, a+h, key)-a;
int x=upperbound(a,0, h, key);
 	cout<<x;
 	
 	
 //sort(a,a+h);
 	/*for(i=0;i<h;i++)
 	{
 		cout<<a[i]<<" ";
 	} 
 */
	return 0;
}