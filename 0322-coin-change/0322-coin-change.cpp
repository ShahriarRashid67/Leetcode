class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[amount+1];
        
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            dp[i]=1000000;
            for(auto coin : coins){
                if((i-coin)>=0){
                    dp[i]=min(dp[i],dp[i-coin]+1);
                }
            }
        }
        if(dp[amount]==1000000) return -1;
        
        return dp[amount];
    }
};