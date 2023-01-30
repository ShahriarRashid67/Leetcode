class Solution {
public:
    
    int minimumTotal(vector<vector<int>>& triangle) {
       int n = triangle.size();
        int minSum = INT_MAX;

        vector<int> prev(n, 0), curr(n, 0);
        for(int i = 0; i<n; i++){
            int m = triangle[i].size();
            for(int j = 0; j<m; j++){
                curr[j] = triangle[i][j];
                if(j == 0)
                    curr[j] += prev[j];
                else if(j == m-1)
                    curr[j] += prev[j-1];
                else
                    curr[j] += min(prev[j], prev[j-1]);

                if(i == n-1)
                    minSum = min(minSum, curr[j]);
            }
            prev = curr;
        }
        
        return minSum;
    }
};