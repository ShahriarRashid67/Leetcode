class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int m=0;
        while(m<=r){
            if(nums[m]==0){
                swap(nums[l],nums[m]);
                l++;
                m++;
            }else if(nums[m]==1){
                m++;
            }else if(nums[m]==2){
                swap(nums[r],nums[m]);
                r--;
             }
            
            
            
        }
    }
};