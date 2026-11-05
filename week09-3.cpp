//week09-3.cpp 學習計畫 Matrix 第4題
//leecode 73. Set Matrix Zeroes
class Solution {
public:
    //沒有return,因為要 in place直接改matrix
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<int> left(m);
        vector<int> up(n);
        for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
              if(matrix[i][j]==0){
                left[i]=1;
                up[j]=1;
              }
           }
        }
        for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
              if(left[i]==1 || up[j]==1){
                matrix[i][j]=0;
              }
           }
        }
    }
};
