#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
	int i,count=0;
	int get()
	{
	   
	cin>>i	;
	return 0;	
	}
	int calc()
	{if(i<1000000000000){
	   while(i>0)
	    { 
	        i=i/10;
	        count++;
	   } 
	   cout<<count;
	return 0;	}
	}
};
int main()
{
   sample s;
   s.get();
   s.calc();
   return 0;
}
