#include <iostream>
#include <string>
using namespace std;
int main()
{

int count = 0;
string s;
getline(cin,s);
int n=s.size();
for (int i = 0; i<n; i++) //can't be i <= s.size() because s.at(s.size()) will result in overflow
        {
            if (s.at(i) ==' ')    count++;

}
count++;
    cout << endl << count;
    cin.ignore();
    return 0;
    }
