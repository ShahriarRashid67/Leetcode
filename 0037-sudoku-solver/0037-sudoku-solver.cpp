class Solution {
public:
     bool checker(int r,int c,char val,vector<vector<char>>& board){
      // cout<<val<<" ";
        for(int i=0;i<board.size();i++){
            if(board[r][i]==val) return 0;
            if(board[i][c]==val) return 0;
            if(board[3*(r/3)+i/3][3*(c/3)+i%3]==val) return 0;
        }
        return 1;
    }
    bool solve(vector<vector<char>>& board){
        int n=board.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               // cout<<board[i][j];
                if(board[i][j]=='.'){
                    
                    for(char k='1';k<='9';k++){
                        if(checker(i,j,k,board)){
                            board[i][j]=k;
                           // cout<<board[i][j]<<" x";
                            if(solve(board)){
                                return 1;
                            }
                            else{
                                board[i][j]='.';
                            }
                        }
                    }
                 return 0;
                }
            }
        }
        return 1;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};