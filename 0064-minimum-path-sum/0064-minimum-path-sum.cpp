class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid[0].size();
        int n=grid.size();
        int dp[n][m];
        for(int i=0;i<m;i++){
            dp[0][i]=grid[0][i];
            if(i!=0){
                dp[0][i]+=dp[0][i-1];
            }
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    dp[i][j]=grid[i][j]+dp[i-1][j];
                }else{
                    dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return dp[n-1][m-1];
    }
};