class Solution {
public:
    void fun(int mask,vector<int>&tmp,vector<int>&nums,vector<vector<int>>&ans){
        if(mask==((1<<nums.size())-1)){
            ans.push_back(tmp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if((mask & (1<<i))==0){
                mask|=(1<<i);
                tmp.push_back(nums[i]);
                fun(mask,tmp,nums,ans);
                tmp.pop_back();
                mask=mask&(~(1<<i));
            }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int mask=0;
        vector<int>tmp;
        fun(mask,tmp,nums,ans);
        return ans;
    }
};