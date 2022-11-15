class Solution {
public:
    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};
   
     void fill(vector<vector<int>>& image, int x, int y,int val, int newColor)
    {
        if(x<0 || x>=image.size() || y<0 || y>= image[0].size() || image[x][y] == newColor || image[x][y] != val)
        {
            return;
        }
        image[x][y] = newColor;
          for(int i=0;i<4;i++){
            int x1=x+dx[i];
            int y1=y+dy[i];
              fill(image,x1,y1,val,newColor);
          }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        fill(image,sr,sc,image[sr][sc],color);
        return image;
    }
};