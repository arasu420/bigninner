#include <iostream>
#include <string>
using namespace std;
int main()
{

int count = 0;
string s;
getline(cin,s);
int n=s.size();
for (int i = 0; i<n; i++)
        {
            if (s.at(i) ==' ')    count++;

}
n=n-count;
    cout << endl <<n;
    cin.ignore();
    return 0;
    }
