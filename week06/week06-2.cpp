//week06-2.cpp SOIT108_Advance_014B
#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int ten = 1;
     while(n>0){
          int now=n%10*ten;
          ten=ten*10;
          n=n/10;
          cout << now <<" ";
     }
}
