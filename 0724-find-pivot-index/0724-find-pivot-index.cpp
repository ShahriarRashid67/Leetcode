class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int Tsum=0;
        for(int i=0;i<n;i++) Tsum+=nums[i];
        int Rsum=0;
        for(int i=0;i<n;i++){
            if(Rsum==(Tsum-Rsum-nums[i])){
                return i;
            }
            Rsum+=nums[i];
        }
        return -1;
        
    }
};