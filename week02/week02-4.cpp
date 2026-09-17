//week02-4.cpp 學習計畫 basic第2題
//leecode 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int u[26]={};//26個全都是0
        for(char c:s){
          u[c-'a']++;//把字母放入
        }
        for(char c:t){
            u[c-'a']--;//把對應的桶子拿掉1個字母
            if (u[c-'a']<0)return c;
        }
        return 0;
    }
};
