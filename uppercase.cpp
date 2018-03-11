#include <iostream>
#include <string>
#include <locale>
using namespace std;
class SAMPLE{
public:
    locale loc;
    string str;
    int count=0;
    int get()
    {

        getline(cin,str);
        return 0;
    }
    int calc()
    {
       for (string::size_type i=0; i<str.length(); ++i){
       if(i==0){
        cout<<toupper(str[i],loc);
        i=i+1;
        count=0;
       }
       if(str.at(i)==' '){
            count=1;}
       if(count==1){
            i=i+1;
    cout << " "<<toupper(str[i],loc);
    count=0;
    }
    else{
        cout<<str[i];

    }
     }  return 0;

    }
};
int main()
{
    SAMPLE s;
    s.get();
    s.calc();
    return 0;
}

