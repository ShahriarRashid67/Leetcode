#define ll long long
class Solution {
public:
    
    int maxSubArray(vector<int>& nums) {
       
        ll ans=nums[0];
        ll run=0;
        for(int i=0;i<nums.size();i++){
          run+=nums[i];
            ans=max(ans,run);
            if(run<0){
                run=0;
            }
        } 
        return ans;
    }
};