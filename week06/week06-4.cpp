//week06-4.cpp SOIT108_Advance_010
#include <iostream>
#include <string>
using namespace std;

int main()
{
     string s;
     cin >> s;
     int n=s.length();
     for(int i=0;i<n;i++){
        cout << s[i];
        if((n-i-1)%3==0 && (n-i-1)!=0) cout<<",";
     }
}
