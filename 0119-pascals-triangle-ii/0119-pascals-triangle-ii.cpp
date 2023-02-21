class Solution {
public:
    vector<int> getRow(int rowIndex) {
     vector<vector<int>> vc(rowIndex+1);
       
        for(int i=0;i<rowIndex+1;i++){
            for(int j=0;j<=i;j++){
                if(i==j || j==0){
                    vc[i].push_back(1);
                }else{
                    vc[i].push_back(vc[i-1][j-1]+vc[i-1][j]);
                }
            }
        }
        return vc[rowIndex];
    }
};