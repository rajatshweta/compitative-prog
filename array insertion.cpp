#include <iostream>
using namespace std;

int main() {
 int i,a[100],position,value,n;
 cin>>n;
 for(i=0;i<n;i++)
 { cin>>a[i];}
 cin>>position>>value;
 for(i=n-1;i>=position-1;i--)//loop starts at very end of the list to the position-1
 {a[i+1]=a[i];}// this creates the space for array
 a[position-1]=value;
 n++; //for making array size +1
 for(i=0;i<n;i++)
 {
 	cout<<a[i]<<" ";
 }
	return 0;
}