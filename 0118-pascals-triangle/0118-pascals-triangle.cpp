class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vc(numRows);
       
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=i;j++){
                if(i==j || j==0){
                    vc[i].push_back(1);
                }else{
                    vc[i].push_back(vc[i-1][j-1]+vc[i-1][j]);
                }
            }
        }
        
        return vc;
    }
};