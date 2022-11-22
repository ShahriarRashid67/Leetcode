class Solution {
public:
    int dp[10010];
    int fun(int rem){
        if(rem<2) return rem;
        int &res=dp[rem];
        if(res!=-1) return res;
        int mn=INT_MAX/2;
        for(int i=1;i*i<=rem;i++){
            mn=min(mn,fun(rem-(i*i))+1);
        }
        return res=mn;
    }
    int numSquares(int n) {
        memset(dp,-1,sizeof(dp));
        int ans=fun(n);
        return ans;
    }
};