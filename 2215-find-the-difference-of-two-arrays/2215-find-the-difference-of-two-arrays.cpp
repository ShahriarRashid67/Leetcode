class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
          vector<vector<int>> ans;
        unordered_map<int,int> mp1,mp2;
        for(auto x : nums1) mp1[x]++;
        for(auto x : nums2)  mp2[x]++;
        vector<int> vc;
        for(auto x : mp1){
            if(mp2.count(x.first) == 0)
                vc.push_back(x.first);
        }
        ans.push_back(vc);
        vc.clear();
        for(auto x : mp2){
            if(mp1.count(x.first)==0)
                vc.push_back(x.first);
        }
        ans.push_back(vc);
        return ans;
    }
};