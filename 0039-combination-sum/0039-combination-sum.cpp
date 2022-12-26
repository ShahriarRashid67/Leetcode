class Solution {
public:
    void fun(int pos,int sum,vector<int>&vc,vector<int>&candidates,vector<vector<int>>&ans){
        if(sum==0){
            ans.push_back(vc);
            return;
        }
        if(pos==candidates.size() || sum<0) return;
        for(int i=pos;i<candidates.size();i++){
            if(sum-candidates[i]>=0){
            vc.push_back(candidates[i]);
            fun(i,sum-candidates[i],vc,candidates,ans);
            vc.pop_back();
            }
         }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>vc;
        fun(0,target,vc,candidates,ans);
        return ans;
    }
};