class Solution {
public:
    int fun(int ind,int age,vector<pair<int,int>>&ar,vector<vector<int>>&dp){
        if(ind==ar.size()) return 0;
        int &res=dp[ind][age];
        if(res!=-1) return res;
        res=fun(ind+1,age,ar,dp);
        
        if(ar[ind].second>=age){
            res=max(res,ar[ind].first+(fun(ind+1,ar[ind].second,ar,dp)));
        }
        return res;
    }
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n=ages.size();
        vector<pair<int,int>>ar;
        for(int i=0;i<ages.size();i++){
            ar.push_back({scores[i],ages[i]});
        }
        sort(ar.begin(),ar.end());
        vector<vector<int>>dp(n,vector<int>(1001,-1));
        return fun(0,0,ar,dp);
        // return 0;
    }
};