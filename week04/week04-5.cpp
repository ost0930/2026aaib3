//week04-5.cpp 學習計畫 Basic 第7題
//leecode 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry =1;
        int n = digits.size();
        for(int i=n-1;i>=0;i--){
           int now = digits[i] + carry;
           carry=now/10;
           digits[i] =now % 10;
        }
        if(carry>0) digits.insert(digits.begin(),carry);
        return digits;
    }
};
