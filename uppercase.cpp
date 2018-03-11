#include <iostream>
#include <string>
#include <locale>
using namespace std;
class SAMPLE{
public:
    locale loc;
    string str;
    int get()
    {

        getline(cin,str);
        return 0;
    }
    int calc()
    {
       for (string::size_type i=0; i<str.length(); ++i)
    cout << toupper(str[i],loc);
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

