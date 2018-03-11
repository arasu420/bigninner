#include <iostream>

using namespace std;
class SAMPLE{
public:
    int x,y,z;
    int get()
    {
        cin>>y;
        cin>>x;
        return 0;
    }
    int calc()
    {
        z=x*y;
        if(z%2==0){
        cout<<"even";
        }
        else{
        cout<<"odd";
        }
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
