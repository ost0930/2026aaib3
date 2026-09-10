//week01-3.cpp 學習計畫 Basic 第3題
//leecode28. Find the Index of the First Occurrence in a String
//大海撈針
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.length(),n2= needle.length();
        for(int i=0;i<=n1-n2;i++){
           if(haystack.substr(i,n2)==needle) return i;
           //字串 的小字串.(i開始,長度)
        }
        return -1; //找不到，return -1
    }
};
