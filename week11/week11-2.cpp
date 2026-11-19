//week11-2.cpp SOIT108_Advance_009
#include <iostream>
#include <vector>
using namespace std;
int main()
{
     int n;
     cin >> n;
     vector<int> a(n);
     for(int i=0;i<n;i++){
        cin >> a[i];
     }
     for(int i=n-1;i>=0;i--){
        if(a[i]%2==1) cout << a[i] <<" ";
     }
}
