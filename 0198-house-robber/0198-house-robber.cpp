class Solution {
public:
    int dp[110];
    int fun(int pos,vector<int>& nums){
        
        if(pos>=nums.size()) return 0;
        int &res=dp[pos];
        if(res!=-1) return res;
        
        int l=fun(pos+2,nums)+nums[pos];
        int r=fun(pos+1,nums);
        res=max(l,r);
        
        return res;
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int ans=fun(0,nums);
        return ans;
    }
};