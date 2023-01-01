class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        unordered_map<string, char>mp1;
        vector<string>vc;
        string tmp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && tmp!=""){
                vc.push_back(tmp);
                tmp="";
            }else{
                tmp+=s[i];
            }
        }
        if(tmp!="") vc.push_back(tmp);
        if(vc.size()!=pattern.size()) return 0;
        for(int i=0;i<pattern.size();i++){
            mp[pattern[i]]=vc[i];
            mp1[vc[i]]=pattern[i];
        }
        for(int i=0;i<pattern.size();i++){
            if(mp[pattern[i]]!=vc[i]){
                return 0;
            }
        }
        for(int i=0;i<pattern.size();i++){
            if(mp1[vc[i]]!=pattern[i]){
                return 0;
            }
        }
        
        return 1;
    }
};