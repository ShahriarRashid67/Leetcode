class Solution {
public:
    int reqDay(int mxLimit,vector<int>&weights){
         int daysNeeded = 1, currWeight = 0;
            for (int weight : weights) {
                if (currWeight + weight > mxLimit) {
                    daysNeeded++;
                    currWeight = 0;
                }
                currWeight = currWeight + weight;
            }
        return daysNeeded;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=0,r=0;
        for(auto weight: weights){
            r+=weight;
            l=max(l,weight);
        }
        int ans=0;
        while(l<=r){
            int md=(r+l)/2;
           // cout<<l<<" "<<r<<" "<<md<<" :";
            if(reqDay(md,weights)<=days){
                ans=md;
                r=md-1;
            }else{
                l=md+1;
            }
        }
        return ans;
    }
};