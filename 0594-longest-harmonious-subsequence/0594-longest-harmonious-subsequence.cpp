class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums)mp[x]++;
        int ans=0;
        for(auto x:mp){
            int val=x.first;
            if(mp.count(val-1)){
                cout<<val<<" ";
            ans=max(ans,mp[val]+mp[val-1]);
            }
        }
        return ans;
    }
};