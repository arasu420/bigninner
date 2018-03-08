#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
class sample
{
	public:
	float a,b;
	int get()
	{
	cin>>a;
	cin>>b;
	return 0;	
	}
	int calc()
	{   
	    float c=a*b;
	    cout<<setprecision(5)<<fixed;
	    cout<<c;
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
