class Solution {
public:
    int fun(int x,int y,vector<vector<int>>&grid,vector<vector<int>>&dp){
        
        if(x==grid.size()-1&& y==grid[0].size()-1) {
          
            return grid[x][y];
        }
        if(x>=grid.size() || y>=grid[0].size()){
            return 10000;    
        }
        int &res =dp[x][y];
        if(res!=-1) return res;
        res=grid[x][y]+(min(fun(x+1,y,grid,dp),fun(x,y+1,grid,dp)));
        return res;

    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid[0].size();
        int n=grid.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return fun(0,0,grid,dp);
    }
};