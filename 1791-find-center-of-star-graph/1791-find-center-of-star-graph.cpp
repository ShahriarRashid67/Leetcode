class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size()+1;
        int deg[n+1];
        memset(deg,0,sizeof(deg));
        for(int i=0;i<n-1;i++){
            deg[edges[i][0]]++;
            deg[edges[i][1]]++;
        }
        int ans=0,mx=0;
        for(int i=1;i<=n;i++){
            if(mx<deg[i]){
                mx=deg[i];
                ans=i;
            }
        }
        return ans;
    }
};