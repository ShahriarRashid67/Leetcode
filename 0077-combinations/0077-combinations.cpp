class Solution {
public:
    void fun(int k,int n,vector<vector<int>>&ans,vector<int>&vc){
        if(k==0){
            ans.push_back(vc);
            return;
        }
        for(int i=n;i>0;i--){
            vc.push_back(i);
            fun(k-1,i-1,ans,vc);
            vc.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>vc;
        fun(k,n,ans,vc);
        return ans;
    }
};