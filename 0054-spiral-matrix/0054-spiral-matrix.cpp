class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int>order;
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0,right=n-1,top=0,bottom=m-1;
        int sz=m*n;
        int dir=1;
        while(order.size()<sz){
            if(dir==1){
            for(int pos=left;pos<=right;pos++){
               //cout<<matrix[top][pos]<<" ";
            order.push_back(matrix[top][pos]);
            }
            dir=2;
            top++;
            
            }else if(dir==2){
            for(int pos=top;pos<=bottom;pos++){
                order.push_back(matrix[pos][right]);
            }
            right--;
            dir=3;
            }else if(dir==3){
            for(int pos=right;pos>=left;pos--){
               // cout<<matrix[bottom][pos]<<" ";
                order.push_back(matrix[bottom][pos]);
            }
            bottom--;
            dir=4;
            }else if(dir==4){
            for(int pos =bottom;pos>=top;pos--){
               order.push_back(matrix[pos][left]);
            }
            left++;
            dir=1;
            }
        }
         return order;
    }
};