class Solution {
public:
    long long dp[100];
    
    long long fun(int n){
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        long long sum=0;
        
        for(int i=1;i<3;i++){
            sum+=fun(n-i);
        }
        
        return dp[n]=sum;;
    }
    long long climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        long long x=fun(n);
        return x;
    }
};