class Solution {
public:
    string reverseWords(string s) {
        string tmp=" ";
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(tmp.begin(),tmp.end());
                ans+=tmp;
                tmp=" ";
            }else{
                tmp+=s[i];
            }
        }
        
        reverse(tmp.begin(),tmp.end());
        ans+=tmp;
        ans.pop_back();
        return ans;
    }
};