#include <iostream>
using namespace std;

int main() {
	int t,m;
	float i,c;
	
	cin>>t;
	
	while(t--)
	
	{
    cin>>i;
	c=0;
	m=0;
		c=i/12;
	 	c=c-(int)c;
	 	m=c*100;
	 	
	 	
	 	if(m==8)
	 	{ cout<<i+11<<" "<<"WS"<<"\n";}
	 else	
	    if(m==16)
	 	{ cout<<i+9<<" "<<"MS"<<"\n";}
	 else	
	    if(m==25)
	 	{ cout<<i+7<<" "<<"AS"<<"\n";}
	 else	
	    if(m==33)
	 	{ cout<<i+5<<" "<<"AS"<<"\n";}
	 else	
	    if(m==41)
	 	{ cout<<i+3<<" "<<"MS"<<"\n";}
	 else	
	    if(m==50)
	 	{ cout<<i+1<<" "<<"WS"<<"\n";}
	 else	
	    if(m==58)
	 	{ cout<<i-1<<" "<<"WS"<<"\n";}
	 else	
	    if(m==66)
	 	{ cout<<i-3<<" "<<"MS"<<"\n";}
	 else	
	    if(m==75)
	 	{ cout<<i-5<<" "<<"AS"<<"\n";}
	 else	
	    if(m==83)
	 	{ cout<<i-7<<" "<<"AS"<<"\n";}
	 else	
	    if(m==91)
	 	{ cout<<i-9<<" "<<"MS"<<"\n";}
	 else	
	    if(m==0)
	 	{ cout<<i-11<<" "<<"WS"<<"\n";}
	}
	return 0;
}