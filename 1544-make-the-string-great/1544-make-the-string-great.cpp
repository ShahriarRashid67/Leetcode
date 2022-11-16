class Solution {
public:
    string makeGood(string s) {
        stack<char>stk;
        for(int i=0;i<s.size();i++){
            if(stk.empty()){
                stk.push(s[i]);
            }else{
                char tp=stk.top();
                tp^=32;
                if(tp==s[i]){
                    stk.pop();
                }else{
                    stk.push(s[i]);
                }
            }
            
        }
        string t="";
        while(!stk.empty()){
           char tp=stk.top();
            t+=tp;
            stk.pop();
        }
        reverse(t.begin(),t.end());
        return t;
    }
};