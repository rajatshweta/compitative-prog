#include <iostream>
using namespace std;

int main()
{
     char s[100];
     int a=0,b=0,t=0,d=0,e=0,f=0,g=0,h=0,k=0,j=0;
     cin>>s;
     for(int i=0;s[i]!='\0';i++)
     {
         if(s[i]=='0')
         { a++;
         
             
         }
       
         if(s[i]=='1')
         { b++;
        
             
         }
        
         if(s[i]=='2')
         { t++;
         
             
         }
         
         if(s[i]=='3')
         { d++;
        
             
         }
        
         if(s[i]=='4')
         { e++;
        
             
         }
         
         if(s[i]=='5')
         { f++;
         
             
         }
         
         if(s[i]=='6')
         { g++;
         
             
         }
         
         if(s[i]=='7')
         { h++;
        
             
         }
      
         if(s[i]=='8')
         { k++;
         
             
         }
          
         if(s[i]=='9')
         { j++;
       
             
         }
          
         
     }
     cout<<"0"<<" "<<a<<"\n";
     cout<<"1"<<" "<<b<<"\n";
     cout<<"2"<<" "<<t<<"\n";
     cout<<"3"<<" "<<d<<"\n";
     cout<<"4"<<" "<<e<<"\n";
     cout<<"5"<<" "<<f<<"\n";
     cout<<"6"<<" "<<g<<"\n";
     cout<<"7"<<" "<<h<<"\n";
     cout<<"8"<<" "<<k<<"\n";
     cout<<"9"<<" "<<j<<"\n";
       
    return 0;
}
