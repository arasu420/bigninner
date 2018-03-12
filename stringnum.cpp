// Example program
#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

class sample

{
public:
int x;
string str;
	int get()

	{
	    cin>>str>>x;
	return 0;
	}

	int calc()

	{
	    for(int i=0;i<x;i++)
	    {
	        cout<<str[i];
	}
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
