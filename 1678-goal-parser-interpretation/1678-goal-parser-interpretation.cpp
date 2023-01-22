class Solution {
public:
    string interpret(string command) {
        string ans="";
        stack<char>st;
        for(auto c:command){
            if(c==')'){
                if(st.top()=='('){
                    ans+='o';
                }
            }else{
                if(c!='('){
                    ans+=c;
                }
            }
            st.push(c);
        }
        return ans;
    }
};