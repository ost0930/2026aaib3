//week08-2.cpp 學習計畫 Matrix 第1題
//leecode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size(),n = accounts[0].size();
        int ans = 0;
        for(int i=0;i<m;i++){
            int now = 0;
            for(int j=0;j<n;j++){
                now+=accounts[i][j];//小迴圈 now+=這格的值
            }
            ans = max(ans,now);//用now更新ans
        }
        return ans;
    }
};
