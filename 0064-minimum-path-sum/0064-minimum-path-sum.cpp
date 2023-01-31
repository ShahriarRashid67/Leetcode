class Solution {
public:
    int fun(int x,int y,vector<vector<int>>&grid,vector<vector<int>>&dp){
        
        if(x==0 && y==0) {
          
            return grid[x][y];
        }
        if(x<0 || y<0){
            return 10000;    
        }
        int &res =dp[x][y];
        if(res!=-1) return res;
        res=grid[x][y]+(min(fun(x-1,y,grid,dp),fun(x,y-1,grid,dp)));
        return res;

    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return fun(n-1,m-1,grid,dp);
    }
};