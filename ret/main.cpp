#include <iostream>
using namespace std;

int main() {
int i,j,k,a,count;
cout<<"enter the no"<<endl;
cin>>i>>j>>k;

for(a=i;a<j;a++)
{
	if(a%k==0)
{
	count++;
}

}
cout<<count;
	return 0;
}
