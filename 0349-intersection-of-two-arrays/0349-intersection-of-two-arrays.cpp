class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1,mp2;
        for(auto x:nums1) mp1[x]++;
        for(auto x:nums2) mp2[x]++;
        vector<int>vc;
        for(auto x:mp1){
            int u=x.first;
            int y=min(mp1[u],mp2[u]);
           if(y!=0){
            vc.push_back(u);
            }
        }
        return vc;
    }
};