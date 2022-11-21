class Solution {
public:
   
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int dx[] = {-1, 0, 0, 1};
        int dy[] = {0, -1, 1, 0};
        
        int n = maze.size() , m = maze[0].size();
        vector<vector<bool>> vis(n , vector<bool>(m, 0));   
        vis[entrance[0]][entrance[1]] = 1;
        pair<int,int>src={entrance[0],entrance[1]};
        queue<pair<int,int>>q;
        q.push(src);
        int lvl=1;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                auto tp=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int x=tp.first+dx[i];
                    int y=tp.second+dy[i];
                    if(x>=0 && x<n && y>=0 && y<m){
                        if(maze[x][y]!='.') continue;
                        if(vis[x][y]) continue;
                        if(x==0 || y==0 || x==(n-1) ||(y==m-1)) return lvl;
                        vis[x][y]=1;
                        q.push({x,y});
                    }
                }
            }
            lvl++;
        }
       return -1;
    }
};