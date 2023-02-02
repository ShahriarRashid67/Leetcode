class Solution {
public:
   string matcher(string &s,string &t){
        string tmp="";
        for(int i=0;i<min(t.size(),s.size());i++){
            if(t[i]!=s[i]){
                return tmp;
            }
            tmp+=s[i];
        }
        return tmp;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        string match=strs[0];
        for(int i=0;i<strs.size();i++){
          match=matcher(strs[i],match);
        }
        return match;
    }
};