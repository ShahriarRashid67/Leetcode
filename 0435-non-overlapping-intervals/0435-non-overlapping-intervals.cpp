class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b){
        if(a[1]==b[1]){
            return a[0]>b[0];
        }
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
         sort(intervals.begin(),intervals.end(),cmp);
         int ans = 0,end = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0]<end){
                ans++;
            }else{
                end = intervals[i][1];   
            }  
        }
        return ans;
    }
};