class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
         vector<vector<int>>vc;
        for(auto interval:intervals){
            if(vc.empty()|| vc[vc.size()-1][1]<interval[0]){
                vc.push_back(interval);
            }else{
                vc[vc.size()-1][1]=max(vc[vc.size()-1][1],interval[1]);
            }
        }
       
        return vc;
    }
};