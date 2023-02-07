class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
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