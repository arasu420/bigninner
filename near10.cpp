#include <iostream>  
using namespace std;  
int main()  
{  
  int n,s;
  cin>>n;
  if(n<=10000){
if(n%10==0){
    cout<<n;

}
else{
    s=n%10;
    s=10-s;
    cout<<n+s;
    }
  }
  return 0;  
} 
