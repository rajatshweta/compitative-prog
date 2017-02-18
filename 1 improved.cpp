
     #include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100005],b[100005];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		 cin>>a[i];
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		b[i]+=a[i];
		cout<<b[i];
	}
	//for(int i=0;i<n;i++)
	//	printf("%d ",b[i]);
	return 0;
}






