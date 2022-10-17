class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        int n=nums.size()/3;
        for(auto x: nums) mp[x]++;
        for(auto v:mp){
        
            if(v.second>n) ans.push_back(v.first);
        }
        return ans;
    }
};