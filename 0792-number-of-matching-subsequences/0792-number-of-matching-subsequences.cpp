class Solution {
public:
    bool fun(string &s,vector<vector<int>>&vc){
        int las=-1;
        for(int i=0;i<s.size();i++){
            int c=s[i]-'a';
            int ind=upper_bound(vc[c].begin(),vc[c].end(),las)-vc[c].begin();
            if(ind!=vc[c].size()) las=vc[c][ind];
            else return 0;
        }
        return 1;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>>vc(26);
        for(int i=0;i<s.size();i++){
            int c=s[i]-'a';
            vc[c].push_back(i);
        }
        // for(auto x:vc){
        //     for(auto v:x){
        //         cout<<v<<" ";
        //     }
        //     cout<<endl;
        // }
        int ans=0;
        for(int i=0;i<words.size();i++){
            ans+=fun(words[i],vc);
            cout<<endl;
        }
        return ans;
    }
};