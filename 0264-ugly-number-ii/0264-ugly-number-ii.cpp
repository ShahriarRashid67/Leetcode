class Solution {
public:
    unordered_map<long long,int>mp;
    void fun(long long n,vector<long long>&ans){
        if(n>1e12) return;
        if(mp.count(n)==0) ans.push_back(n);
        else return;
        mp[n]=1;
        fun(2*n,ans);
        fun(3*n,ans);
        fun(5*n,ans);
        return;
    }
    int nthUglyNumber(int n) {
        vector<long long>ans;
        fun(1*1LL,ans);
        sort(ans.begin(),ans.end());
        return ans[n-1];
    }
};