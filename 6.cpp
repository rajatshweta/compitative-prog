#include <bits/stdc++.h>

using namespace std;
void display(char s[])
{
    cout <<   s ;
}

int main() {
	char str[101];
 
   cin.get(str, 101);
	 for (int i = 0;  str[i] != '\0' ; i++)
    {
        if (str[i] >=65&&str[i]<=90)
        
        {
            str[i]=str[i]+32;
        }
        else if(str[i] >=97&&str[i]<=122)
        {
        	str[i]=str[i]-32;
        }
        
        
    }
    display(str);
    
	return 0;
}