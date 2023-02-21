class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>tmp=matrix;
        int n= matrix.size();
        for(int i=0;i<n;i++){
          
            for(int j=0,x=(n-1);j<n && x>=0; j++,x--){
               matrix[i][j]=tmp[x][i];
            }
       
        }
    
    }
    
};