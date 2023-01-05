class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums){
            if(x<0)x*=-1;
            mp[x]++;
        }
        vector<int>ans;
        for(auto x:mp){
            cout<<x.first<<" ";
            int cnt=x.second;
            int val=x.first*x.first;
            while(cnt--){
                ans.push_back(val);
            }
        }
        return ans;
    }
};