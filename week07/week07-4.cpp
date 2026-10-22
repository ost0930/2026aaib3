//week07-4.cpp Simulation 第3題
//leecode 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={0};
        string result[3]={"Draw","A","B"};
        int who =1;//輪到誰下1:A 2:B
        for(vector<int> move:moves){
            int i=move[0],j=move[1];
            a[i][j]=who;//現在是誰下
            if(a[0][0]==who && a[0][1]==who && a[0][2]==who) return result[who];//上橫
            if(a[1][0]==who && a[1][1]==who && a[1][2]==who) return result[who];//中橫
            if(a[2][0]==who && a[2][1]==who && a[2][2]==who) return result[who];//下橫

            if(a[0][0]==who && a[1][0]==who && a[2][0]==who) return result[who];//左直
            if(a[0][1]==who && a[1][1]==who && a[2][1]==who) return result[who];//中直
            if(a[0][2]==who && a[1][2]==who && a[2][2]==who) return result[who];//右直

            if(a[0][0]==who && a[1][1]==who && a[2][2]==who) return result[who];//左斜
            if(a[2][0]==who && a[1][1]==who && a[0][2]==who) return result[who];//右斜

            if(who==1) who=2;
            else who=1;
        }
        if(moves.size()==9) return "Draw";//平手
        else return "Pending";//思考中
    }
};
