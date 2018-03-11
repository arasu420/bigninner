#include <iostream>

using namespace std;
class Swap{
public:
    int a,b,z;
    int get()
    {
        cin>>a>>b;
        return 0;
    }
    int calc()
    {
        if(a<=100000 && b<=100000)
     {z=a;
     a=b;
     b=z;
     cout<<a<<b;}
     return 0;
    }
};
int main()
{
    Swap s;
    s.get();
    s.calc();
    return 0;
}
