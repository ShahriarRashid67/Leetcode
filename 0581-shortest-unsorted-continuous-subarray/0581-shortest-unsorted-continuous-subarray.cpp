class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>nums2=nums;
        sort(nums2.begin(),nums2.end());
        int st=nums.size(),ed=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums2[i]){
                st=min(i,st);
                ed=max(i,ed);
            }
        }
        if(ed-st>=0){
            return ed-st+1;
        }
        return 0;
    }
};