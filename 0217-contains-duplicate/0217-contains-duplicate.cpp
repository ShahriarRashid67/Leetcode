class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp.clear();
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1){
                return 1;
            }
            mp[nums[i]]++;
        }
        return 0;
        }
};