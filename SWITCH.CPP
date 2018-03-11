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
       switch(x)
       {
           case 1:cout<<"one";
           break;
           case 2:cout<<"TWO";
           break;
           case 3:cout<<"THREE";
           break;
           case 4:cout<<"FOUR";
           break;
           case 5:cout<<"FIVE";
           break;
           case 6:cout<<"SIX";
           break;
           case 7:cout<<"SEVEN";
           break;
           case 8:cout<<"EIGHT";
           break;
           case 9:cout<<"NINE";
           break;
           case 10:cout<<"TEN";
           break;
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
