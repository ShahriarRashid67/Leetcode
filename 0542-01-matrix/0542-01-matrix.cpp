class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int row=mat.size();
        if(row==0) return mat;
        int col=mat[0].size();
        vector<vector<int>>dist(row,vector<int>(col,INT_MAX));
        queue<pair<int,int>>q;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==0){
                    dist[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int dir[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
        while(!q.empty()){
            pair<int,int>curr=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int x=curr.first+dir[i][0];
                int y=curr.second+dir[i][1];
                if(x>=0 && x<row && y>=0 && y<col){
                    if(dist[x][y]>dist[curr.first][curr.second]+1){
                       dist[x][y]=dist[curr.first][curr.second]+1; 
                        q.push({x,y});
                    }
                }
            }
        }
        return dist;
    }
};