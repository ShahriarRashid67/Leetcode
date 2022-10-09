class Solution {
public:
    vector<vector<int>> vc;
    bool chkBit(int mask,int pos){
        return (mask&(1<<pos));
    }
    void setBit(int &mask,int pos){
      mask= mask|(1<<pos);
    }
     void unsetBit(int &mask,int pos){
        mask=mask&(~(1<<pos));
    }
    void fun(vector<int> &nums,int mask,vector<int>&ans){
        if(ans.size()==nums.size()){
            vc.push_back(ans);
        }
        for(int i=0;i<nums.size();i++){
            if(chkBit(mask,i)==0){
                ans.push_back(nums[i]);
                setBit(mask,i);
                fun(nums,mask,ans);
                unsetBit(mask,i);
                ans.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>ans;
        vc.clear();
        fun(nums,0,ans);
        set<vector<int> >st;
        for(auto v:vc) st.insert(v);
        vc.clear();
        for(auto v:st) vc.push_back(v);
        return vc;
    }
};