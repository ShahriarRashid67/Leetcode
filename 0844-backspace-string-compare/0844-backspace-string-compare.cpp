class Solution {
public:
    string fun(string &s){
         stack<char>st;
        for(auto c:s){
            if(c=='#' && (!st.empty() )){
                st.pop();
                
            }
            if(c!='#'){
                st.push(c);
            }
        }
        string ans="";
        while(!st.empty()){
            char c=st.top();
            ans+=c;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        return fun(s)==fun(t);
    }
};