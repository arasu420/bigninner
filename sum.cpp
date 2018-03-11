#include <iostream>

using namespace std;
class Maxm{
public:
    int x,c=0;
    int get()
    {
cin>>x;
    }
    int calc()
    {
       for(int i=0;i<=x;i++)
        {
c=c+i;
        }
        cout<<c;
        return 0;
    }
};
int main()
{
    Maxm s;
    s.get();
    s.calc();
    return 0;
}
