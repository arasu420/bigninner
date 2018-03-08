#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
class sample
{
	public:
	string a;
	int b;
	int get()
	{
	    cin>>a>>b;
	}
	int calc()
	{   
	    for(int i=0;i<b;i++)
	    {
	        cout<<a<<endl;
	    }	
	}
};
int main()
{
   sample s;
   s.get();
   s.calc();
   return 0;
}
