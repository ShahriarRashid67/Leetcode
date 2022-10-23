class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<int>ans;
        
        for(auto x:nums){
            mp[x]++;
            if(mp[x]>1){
            ans.push_back(x);
            }
        }
        for(int i=1;i<=n;i++){
            if(mp[i]==0){
            ans.push_back(i);
            }
        }
        
        return ans;
        
    }
};