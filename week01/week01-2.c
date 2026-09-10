//week01-2 SOIT106_ADVANCE_001
#include <iostream>  ///使用io串流的外掛
using namespace std; ///使用std命名空間
int main()
{
     int n;
     cin>>n;
     int b=n,ans=0;
     while(n>0){  ///剝皮法
         ans=ans*10+n%10;
         n=n/10;
     }
     ///cout << b << ans << b+ans;///錯!少了+= 跳行
     ///cout << b << "+" << ans << "=" << b+ans << "\n";///正確1
     ///cout << b << "+" << ans << "=" << b+ans << endl;///正確2
     printf("&d+%d=%d\n",b,ans,ans+b);///正確3
}
