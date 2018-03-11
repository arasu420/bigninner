#include <iostream>

using namespace std;
class Maxmof{
public:
    int x[10];
    int c = 0;
    int get()
    {
        for(int i=0;i<=10;i++)
        {
        cin>>x[i];
        }
        return 0;
    }
    int calc()
    {
       for(int i=0;i<=10;i++)
        {
            if(c<x[i])
            {
                c=x[i];
            }
        }
        cout<<c;
        return 0;
    }
};
int main()
{
    Maxmof s;
    s.get();
    s.calc();
    return 0;
}
