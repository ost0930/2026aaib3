//week10-3.cpp 學習計畫 math 第2題
//leecode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        double total=0;
        int m=salary[0],n=salary[0];
        for(int now : salary){
            if(now > m) m=now;
            if(now < n) n=now;
            total+=now;
        }
        return(total-m-n)/(salary.size()-2);
    }
};
