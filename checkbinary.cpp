// Example program
#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

class sample

{
public:
string x;
	int get()

	{
	    cin>>x;
	return 0;
	}

	int calc()

	{
	    int count=0;
	    int c=x.size();
	    for(int i=0;i<c;i++)
	    {
	        if(x[i]=='0'||x[i]=='1')
	    {
	        count=1;
	    }
	    else
	    {
	        count=0;
	        break;
	        }
	        }
	    if(count==1)
	    cout<<"yes";
	    else
	    cout<<"no";
	return 0;	

	}

};

int main()

{

   sample s;
   s.get();
   s.calc();
   return 0;

}
