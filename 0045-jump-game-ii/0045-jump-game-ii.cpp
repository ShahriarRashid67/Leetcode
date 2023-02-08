class Solution {
public:
    int fun(int pos,vector<int>&dp,vector<int>&nums){
        if(pos==nums.size()-1) return 0;
        if(pos>=nums.size()|| nums[pos]==0 ) return INT_MAX/2;
        int &res=dp[pos];
        if(res!=-1) return res;
        
        res=INT_MAX/2;
        for(int i=1;i<=nums[pos];i++){
            res=min(res,fun(pos+i,dp,nums)+1);
        }
        return res;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return fun(0,dp,nums);
    }
};