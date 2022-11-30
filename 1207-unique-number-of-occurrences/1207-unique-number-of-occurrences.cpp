class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x: arr)mp[x]++;
        vector<int>vc;
        for(auto x: mp){
            vc.push_back(x.second);
        }
        sort(vc.begin(),vc.end());
        for(int i=0;i<vc.size()-1;i++){
            if(vc[i]==vc[i+1]){
                return 0;
            }
        }
        return 1;
    }
};