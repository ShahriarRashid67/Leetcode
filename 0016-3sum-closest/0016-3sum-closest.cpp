class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX,absAns=INT_MAX;
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1,r=nums.size()-1;
            while(l<r){
                int tmpSum=nums[i]+nums[l]+nums[r];
                
                if(abs(tmpSum-target)<absAns){
                   absAns =abs(tmpSum-target);
                    ans=tmpSum;
                }
                    
                if(tmpSum<target){
                    l++;
                }else{
                    r--;
                }
            }
        }
        return ans;
        
    }
};