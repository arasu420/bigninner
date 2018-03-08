#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
	int a,b,count=0;
	int get()
	{
	cin>>a;
	cin>>b;
	return 0;	
	}
	int calc()
	{   int t = 1;
   while (t <= b)
      t *= 10;
   cout<<( a*times + b);
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
