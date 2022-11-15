class Solution {
public:
    int dp[101][101];
    int fun(int i,int j){
        if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;
        int &res =dp[i][j];
        if(res!=-1) return res;
        res= fun(i-1,j)+fun(i,j-1);
        return res;
    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        int ans=fun(n-1,m-1);
        return ans;
    }
};