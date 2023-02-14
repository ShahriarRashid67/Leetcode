class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowPrice=INT_MAX;
        int mxProfit=0;
        for(int i=0;i<prices.size();i++){
            lowPrice=min(prices[i],lowPrice);
            mxProfit=max(mxProfit,prices[i]-lowPrice);
        }
        return mxProfit;
    }
};