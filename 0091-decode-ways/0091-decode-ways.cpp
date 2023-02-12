class Solution {
public:
    int fun(int pos,string &s,vector<int>&dp){
        if(pos>=s.size() || s[pos]=='0') return s.size()==pos;
        int &res=dp[pos];
        if(res!=-1) return res;
        res=fun(pos+1,s,dp);
        if(stoi(s.substr(pos,2))<27){
            res+=fun(pos+2,s,dp);
        }
        return res;
    }
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n,-1);
        return fun(0,s,dp);
    }
};