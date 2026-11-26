//week12-1.cpp 每日挑戰 2026-11-26
//Leecode 3360. Stone Removal Game
class Solution {
public:
    bool canAliceWin(int n) {
        for(int i=10;i>=0;i--){
           n-=i;//拿走i個石頭
           if(n<0){
             if(i%2==0) return false;//A輸
             else return true;//A贏
           }
        }
        return true;
    }
};
