//week10-2.cpp SOIT108_Advance_002
#include <iostream>
using namespace std;
int isPrime(int n)
{
     //除了1跟n本身，都不整除
     for(int i=2;i<n;i++){
      if(n%i==0) return 0;
     }
     return 1;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=a;i<=b;i++){
      if(isPrime(i)) ans++;
    }
    cout<<ans<<"\n";
}
