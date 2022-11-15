class Solution {
public:
    bool isIsomorphic(string s, string t, int x=0) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=t[i];
        }
        for(int i=0;i<s.size();i++){
            if(t[i]!=mp[s[i]]){
            return 0;
            }
        }
         if(x==1){
          return 1; 
        }
        int res=isIsomorphic(t,s,1);
        return res;
        
    }
};