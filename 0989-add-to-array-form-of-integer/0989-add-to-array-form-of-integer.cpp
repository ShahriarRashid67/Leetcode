class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       int i=num.size();
        vector<int>ans;
        while(i-->0 || k>0){
            if(i>=0){
                k+=num[i];
            }
            cout<<k%10<<" ";
            ans.push_back(k%10);
            k/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};