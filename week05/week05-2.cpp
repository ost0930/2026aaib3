//week05-2.cpp 學習計畫 Bullt-in function 第二題
//leecode 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            if(isupper(s[i])) s[i]=s[i]-'A'+'a';
        }
        //s[0]='h';//錯的
        return s;
    }
};
