#include <iostream>

using namespace std;
class Feb{
public:
    int x,a=0,b=1,next;
    int get()
    {
cin>>x;
return 0;
    }
    int calc()
    {
       // int c=1;
       for(int i=1;i<=x;i++)
        {
                if ( i <= 1 )
         next = i;
      else
      {
         next = a + b;
         a = b;
         b = next;
      }
      cout<<next;
        }
        return 0;
        //112358
    }
};
int main()
{
    Feb s;
    s.get();
    s.calc();
    return 0;
}
