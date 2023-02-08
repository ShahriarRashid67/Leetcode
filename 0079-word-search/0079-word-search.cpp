class Solution {
public:
    const int dr[5]={0,1,0,-1,0};
    int m,n;
    bool searchNext(vector<vector<char>> &board, string &word, int row, int col, int index) 
    {

        if (index == word.length())
            return true;

        if (row < 0 || col < 0 || row == m || col == n || board[row][col] != word[index] or board[row][col] == '*')
            return false;

        char c = board[row][col];
        board[row][col] = '*';
        int ans=0;
        for(int i=0;i<4;i++){
           ans|=searchNext(board,word,row+dr[i],col+dr[i+1],index+1);
            if(ans==1){
                board[row][col]=c;
                return ans;
            }
        }
        board[row][col] = c; // undo change
        return ans;
    }
    bool exist(vector<vector<char>> board, string word) 
    {
        m = board.size();
        n = board[0].size();
        int index = 0;

        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++)
             {
                 if (board[i][j] == word[index]) 
                 {
                    if (searchNext(board, word, i, j, index))
                    {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};