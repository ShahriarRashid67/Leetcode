class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto num:nums)mp[num]++;
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>> >pq;
        for(auto [num,frq] : mp){
            pq.push({frq,num});
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(pq.size()){
            auto tp=pq.top();
            pq.pop();
            ans.push_back(tp.second);
        }
        return ans;
    }
};