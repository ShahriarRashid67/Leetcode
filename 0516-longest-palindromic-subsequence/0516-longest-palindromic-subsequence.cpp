class Solution {
public:
    int dp[1000][1000];
    int fun(int i,int j,string &s){
        if(i==j)return 1;
        if(i==(j-1) && s[i]==s[j]) return 2;
        int &res = dp[i][j];
        if(res!= -1) return res;
        if(s[i]==s[j]){
        res=2+(fun(i+1,j-1,s));
        }else{
            res=max(fun(i+1,j,s),fun(i,j-1,s));
        }
        return res;
    }
    int longestPalindromeSubseq(string s) {
        memset(dp,-1,sizeof(dp));
        int ans=fun(0,s.size()-1,s);
        return ans;
    }
};