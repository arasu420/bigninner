#include <iostream>
using namespace std;
class SAMPLE{
public:
    int x;
    char c;
    int get()
    {
        cin>>x;

        return 0;
    }
    int calc()
    {
       c=64+x;
     cout<<c;
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
