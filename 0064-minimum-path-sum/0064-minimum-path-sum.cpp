class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid[0].size();
        int n=grid.size();
        vector<int>cur(m),pre(m);
        for(int i=0;i<m;i++){
            pre[i]=grid[0][i];
            if(i!=0){
                pre[i]+=pre[i-1];
            }
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    cur[j]=grid[i][j]+pre[j];
                }else{
                    cur[j]=grid[i][j]+min(pre[j],cur[j-1]);
                }
            }
            pre=cur;
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return pre[m-1];
    }
};