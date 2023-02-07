class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto num:nums) mp[num]++;
        int ans=0;
        for(auto [f,s]:mp){
            if(k==0 && s>1) ans++;
            else if(k!=0 && mp.count(f+k)) ans++;
        }
        return ans;
    }
};