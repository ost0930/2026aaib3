// week08-3.cpp 學習計畫 Matrix 第3題
// leecode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> ans;
        int left = 0, right = n-1, up = 0, down = m-1;
        while (ans.size() < m*n) {
            int i, j;
            i = up;// 最上面這條要往右
            for (int j = left; j <= right; j++) { // 往右
                ans.push_back(matrix[i][j]);
            }
            up++; // 整條刪掉

            j = right;// 最右邊這條要往下
            for (int i = up; i <= down; i++) { // 往下
                ans.push_back(matrix[i][j]);
            }
            right--; // 整條刪掉

            if(ans.size()==m*n) break;

            i = down;// 最下面這條要往左
            for (int j = right; j >= left; j--) { // 往左
                ans.push_back(matrix[i][j]);
            }
            down--; // 整條刪掉

            j = left;// 最左邊這條要往上
            for (int i = down; i >= up; i--) { // 往上
                ans.push_back(matrix[i][j]);
            }
            left++;// 整條刪掉
        }
        return ans;
    }
};
