//week05-3a.cpp 學習計畫 Bullt-in function 第1題
//leecode 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0,now=0;
        for(char c:s){
           if(c==' '){//清空
             if(now!=0) ans=now;//更新答案
            now=0;
           }else now++;//遇到非空格+1
        }
    if(now!=0) ans=now;
    return ans;
    }
};
