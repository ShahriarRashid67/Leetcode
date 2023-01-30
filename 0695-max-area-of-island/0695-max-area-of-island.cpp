class Solution {
public:
    const int dir[6]={0,1,0,-1,0};
    int dfs(vector<vector<int>>&grid, int x,int y){
        queue<pair<int,int>>qu;
        qu.push({x,y});
        int cnt=1;
        grid[x][y]=0;
        while(!qu.empty()){
            auto tp=qu.front();
            qu.pop();
            for(int i=0;i<4;i++){
             int xx=tp.first+dir[i];
             int yy=tp.second+dir[i+1];
              if(xx>=0 && xx<grid.size() && yy>=0 && yy<grid[0].size()){
                  if(grid[xx][yy]==1){
                      cnt++;
                      grid[xx][yy]=0;
                      qu.push({xx,yy});
                  }
              } 
            }
        }
        return cnt;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        for (int i = 0; i < m; i++) 
            for (int j = 0; j < n; j++) 
                if (grid[i][j] == 1)
                    ans = max(ans, dfs(grid, i, j));
        return ans;
    }
};