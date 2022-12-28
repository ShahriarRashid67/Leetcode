class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x:nums) mp[x]++;
        vector<pair<int,int>>vc;
        for(auto x:mp){
            vc.push_back({x.second,x.first});
        }
        sort(vc.begin(),vc.end(),greater<pair<int,int>>());
        nums.clear();
        for(int i=0;i<k;i++){
            nums.push_back(vc[i].second);
        }
        return nums;
    }
};