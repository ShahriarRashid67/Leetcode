class Solution {
public:
    bool fun(long long int pos,vector<int>&nums,vector<int>&dp){
        if(pos>=nums.size()-1) return 1;
        int &res=dp[pos];
        if(res!=-1) return res;
        res=0;
        for(int i=1;i<=nums[pos];i++){
            res|=fun(pos+i,nums,dp);
            if(res==1) return res;
        }
        return res;
    }
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return fun(0,nums,dp);
    }
};