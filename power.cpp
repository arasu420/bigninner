#include <iostream>
#include <cmath>
using namespace std;
class SAMPLE{
public:
    int x,y,z;
    int get()
    {
        cin>>x;
        cin>>y;
        return 0;
    }
    int calc()
    {
        z=pow(x,y);
     cout<<z;
        return 0;
    }
};
int main()
{
    SAMPLE s;
    s.get();
    s.calc();
    return 0;
}
