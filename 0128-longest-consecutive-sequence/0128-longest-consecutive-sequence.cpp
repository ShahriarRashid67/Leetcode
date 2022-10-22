class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>st(nums.begin(),nums.end());
        int ans=0;
        for(auto num : nums){
            if(st.count(num-1)==0){
                int curr=num;
                while(st.count(curr)){
                    curr++;
                }
                ans=max(ans,curr-num);
            }
        }
        return ans;
    }
};