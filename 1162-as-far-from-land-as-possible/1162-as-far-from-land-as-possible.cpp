class Solution {
    
public:
    int dr[6]={0,1,0,-1,0};
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
         vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                vis[i][j]=1;
                q.push({i,j});
                }
            }
        }
       
        int dis=-1;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                auto tp=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int x=tp.first+dr[i];
                    int y=tp.second+dr[i+1];
                 //   cout<<x<<" "<<y;
                    if(x>=0 && x<n && y>=0 &&y<m && !vis[x][y]){
                        vis[x][y]=1;
                        q.push({x,y});
                    }
                }
            }
            dis++;
        }
        if(dis!=0) return dis;
        return -1;
    }
};