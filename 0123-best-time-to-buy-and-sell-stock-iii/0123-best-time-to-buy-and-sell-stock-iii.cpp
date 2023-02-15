class Solution {
public:
    int fun(int pos,int rem,vector<int>&price,vector<vector<int>>&dp){
        if(pos==price.size() || rem<0) return 0;
        int &res=dp[pos][rem];
        if(res!=-1) return res;
        res=fun(pos+1,rem,price,dp);
        if(rem%2==1){
            res=max(res,fun(pos+1,rem-1,price,dp)-price[pos]);
        }else{
             res=max(res,fun(pos+1,rem-1,price,dp)+price[pos]);
        }
        return res;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(4,-1));
        return fun(0,3,prices,dp);
    }
};