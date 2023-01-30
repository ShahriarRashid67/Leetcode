class Solution {
public:
    int fun(int row,int col,vector<vector<int>>&triangle , vector<vector<int>>&dp){
        if(row==triangle.size()-1) return triangle[row][col];
        int &res=dp[row][col];
        if(res!=-1) return res;
        res=triangle[row][col]+(min(fun(row+1,col,triangle,dp),fun(row+1,col+1,triangle,dp)));
        return res;
        }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return fun(0,0,triangle,dp);
    }
};