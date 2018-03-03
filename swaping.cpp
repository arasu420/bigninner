#include <iostream>

using namespace std;
class Swapop{
public:
    int x,y,z;
    int get()
    {
        cin>>x>>y;
        return 0;
    }
    int calc()
    {
        if(x<=100000 && y<=100000)
     {z=x;
     x=y;
     y=z;
     cout<<x<<y;}
     return 0;
    }
};
int main()
{
    Swapop s;
    s.get();
    s.calc();
    return 0;
}
