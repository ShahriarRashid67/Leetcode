class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int cnt=0,sum=0;
        mp[sum]=1;
        for(auto x :nums){
            sum+=x;
              
            if(mp[sum-k]>0){
                cnt+=mp[sum-k];
            } 
         mp[sum]++;
            
        }
        
        return cnt;
    }
};