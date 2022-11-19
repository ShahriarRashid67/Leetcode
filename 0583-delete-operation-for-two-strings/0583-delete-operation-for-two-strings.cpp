class Solution {
public:
    int dp[500][500];
    int fun(string &s,string &t,int i=0,int j=0){
        if(i==s.size() || j==t.size()) return 0;
        int &res =dp[i][j];
        if(res != -1) return res;
        if(s[i]==t[j]){
            res=1+(fun(s,t,i+1,j+1));
        }else{
            res=max(fun(s,t,i+1,j),fun(s,t,i,j+1));
        }
        return res;
    }
    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        int ans=fun(word1,word2);
        ans= word1.size()+word2.size()-2*ans;
        return ans;
    }
};