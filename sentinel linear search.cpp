#include <iostream>
#include <ctime>
using namespace std;

int main() {
 int i=0,j=0 , a[100],n,item;
 cin>>n;
 for (i=0;i<n;i++)
 {
 	cin>>a[i];
 }
  
 int start_s=clock(); 
 cin>>item;
  
 int last=a[n-1];
 a[n-1]=item;
 
 while(a[j]!=item)
 {
 	j++;
 }
 a[n-1]=last;
 if((j<n-1)||(item==a[n-1]))
 {cout<<"item found ";}
 else
 {cout<<"item not found";}
 int stop_s=clock();
 cout<<"time:"<<(stop_s-start_s)/double(CLOCKS_PER_SEC)*1000<<endl;
 
 
	return 0;
}