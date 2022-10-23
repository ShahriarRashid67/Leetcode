class Solution {
public:
    int dir[5]={-1,0,1,0,-1};
    const char VISITED='2';
    int n,m;
    void dfs(int x,int y, vector<vector<char>>&grid){
       grid[x][y]=VISITED;
        
        for(int i=0;i<4;i++){
            int X=x+dir[i];
            int Y=y+dir[i+1];
            if(X>=0 && X<n && Y>=0 && Y<m && grid[X][Y]=='1'){
                dfs(X,Y,grid);
            }
        }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int islandCnt=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    dfs( i, j, grid);
                    islandCnt++;
                }
            }
        }
        
        return islandCnt;
    }
};