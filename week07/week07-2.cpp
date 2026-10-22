//week07-2.cpp 學習計畫 simulation 第一題
//leecode 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {

      vector<int> a;
      for(string s:operations){
        if(s=="+"){//相加前2筆資料
          int now=a[a.size()-1]+a[a.size()-2];
          a.push_back(now);
        }else if(s=="D"){//把前一筆變2倍，放到後面
          int now=a[a.size()-1]*2;
          a.push_back(now);
        }else if(s=="C"){//移除最後1筆
           a.pop_back();
        }else{//把字串變整數，放到後面
            int now=stoi(s);
            a.push_back(now);
        }
      }
      int ans =0;
      for(int now:a) ans+=now;
      return ans;
    }
};
