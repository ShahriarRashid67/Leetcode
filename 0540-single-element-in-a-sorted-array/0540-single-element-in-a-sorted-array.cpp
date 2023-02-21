class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r){
            cout<<l<<" "<<r<<endl;
            int md=(l+r)/2;
            if(md &&md<nums.size()&&(nums[md]!=nums[md-1]) && (nums[md]!=nums[md+1])){
                return nums[md];
            }
            int t=md%2;
            if(nums[md-t]==nums[md-t+1]){
                l=md+t;
            }else{
                r=md;
            }
        }
        return nums[r];
    }
};