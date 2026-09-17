// week02-3.cpp 學習計畫第一題
// Leetcode 1768.Merge Strings Alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n1 = word1.length(), n2 = word2.length();
        for (int i = 0; i < max(n1, n2); i++) {
            if (i < n1)
                ans += word1[i];
            if (i < n2)
                ans += word2[i];
        }
        return ans; // 答案送出
    }
};
