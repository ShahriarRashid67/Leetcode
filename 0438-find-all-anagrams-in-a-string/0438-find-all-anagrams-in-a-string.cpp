class Solution {
public:
    bool checker(vector<int>&ar,vector<int>&br){
        for(int i=0;i<27;i++){
            if(ar[i]!=br[i]){
                return 0;
            }
        }
        return 1;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(p.size()>s.size()) return ans;
        vector<int>frq1(30,0),frq2(30,0);
        for(auto c:p) frq1[c-'a']++;
        int l=0,r=0;
        while(r<p.size()){
            frq2[s[r]-'a']++;
            r++;
        }
        if(checker(frq1,frq2)) ans.push_back(l);
        while(r<s.size()){
            frq2[s[l]-'a']--;
            frq2[s[r]-'a']++;
            if(checker(frq1,frq2)) ans.push_back(l+1);
            l++,r++;
        }
        return ans;
    }
};