#include <iostream>

using namespace std;
class SAMPLE{
public:
    int x;
    int get()
    {

        cin>>x;
        return 0;
    }
    int calc()
    {
        if(x%2==0){
        cout<<x;
        }
        else{
                x--;
            cout<<x;
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
