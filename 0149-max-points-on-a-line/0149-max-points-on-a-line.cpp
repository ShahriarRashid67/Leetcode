class Solution {
public:
    double slope(int x1,int y1,int x2,int y2){
        double ans=atan2((y2-y1),(x2-x1));
        return ans;
    }
    int maxPoints(vector<vector<int>>& points) {
        
        int ans=2,n=points.size();
         if (n == 1) {
            return 1;
        }
        for(int i=0;i<n;i++){
               map<double,int>mp;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                double tmp=slope(points[i][0],points[i][1],points[j][0],points[j][1]);
                mp[tmp]++;
            }
             for(auto x:mp){
            ans=max(ans,x.second+1);
            }
        }
       
        return ans;
    }
};