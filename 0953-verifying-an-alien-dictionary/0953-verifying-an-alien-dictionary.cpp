class Solution {
public:
    bool checker(string &s,string &t,vector<int>&val){
        for(int i=0;i<min(s.size(),t.size());i++){
            if(val[s[i]]<val[t[i]]) return 1;
            if(val[s[i]]==val[t[i]]) continue;
             if(val[s[i]]>val[t[i]]) return 0;
        }
        return(s.size()<=t.size());
    }
    ///abcd
    //abba
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int>val(130,0);
        for(int i=0;i<order.size();i++){
            val[order[i]]=i+1;
        }
        for(int i=0;i<words.size()-1;i++){
            if(!checker(words[i],words[i+1],val)){
                return 0;
            }
        }
        return 1;
    }
};