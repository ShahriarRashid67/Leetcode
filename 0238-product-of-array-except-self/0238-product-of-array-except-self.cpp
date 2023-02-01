class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n,0),bac(n,0);
        pre[0]=nums[0]; bac[n-1]=nums[n-1];
        for(int i=1;i<nums.size();i++)
        {
            pre[i]=pre[i-1]*nums[i];
        }
        for(int i=n-2;i>=0;i--){
            bac[i]=bac[i+1]*nums[i];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(i==0){
                ans[i]=bac[i+1];
            }else if(i==n-1){
                ans[i]=pre[n-2];
            }else{
                ans[i]=pre[i-1]*bac[i+1];
            }
        }
        return ans;
        
    }
};