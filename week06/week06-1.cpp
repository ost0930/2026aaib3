//week06-1.cpp UVA10696
#include <iostream>
int f91(int n){
   if(n<=100) return f91(f91(n+11));
   else return n-10;
}
using namespace std;
int main()
{
     int n;
     while(cin>>n){
         if(n==0) break;
         printf("f91(%d) = %d\n",n,f91(n));
     }
}
