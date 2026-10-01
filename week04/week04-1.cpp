//week04-1.cpp 學習計畫 Basic 第6題
//leecode 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] !=0){//不等於0的數
              nums[k]=nums[i];
              k++;
            }
        }
        for(int i=k;i<nums.size();i++){
                nums[i]=0;
        }
    }
};
