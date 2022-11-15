class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int pre=0;
        for(int i=0;i<n;i++){
            nums[i]=pre+nums[i];
            pre=nums[i];
        }
        return nums;
    }
};