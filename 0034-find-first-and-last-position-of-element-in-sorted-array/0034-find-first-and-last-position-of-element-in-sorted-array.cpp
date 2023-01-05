class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      
        int ind1=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if((ind1==nums.size()) || nums[ind1]!=target) return{-1,-1};
        int ind2=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        return {ind1,ind2};
    }
};