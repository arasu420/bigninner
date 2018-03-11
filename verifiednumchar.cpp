#include <algorithm>
#include <cctype>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int n=str.size();
    int i,f,f2;
    for(i=0;i<n;i++)
        {
 		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
 			f=1;
		}
 		else if(str[i]>='0' && str[i]<='9')
 		{
 			f2=2;
 		}

 	}
 	if(f==1 && f2==2)
 	{
 		cout<<"\n yes";
 	}
 	else
 	{
 		cout<<"\n no";
 	}



}
