class Solution {
public:
    const int mod=1000000007;
    long long hash(string &s){
        long long HASH=1;
        for(int i=0;i<s.size();i++){
            HASH*=(s[i]+257);
            HASH%=mod;
        }
        return HASH;
    }    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<int,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            mp[hash(strs[i])].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto [num,vec]:mp){
            ans.push_back(vec);
        }
        return ans;
    }
};

