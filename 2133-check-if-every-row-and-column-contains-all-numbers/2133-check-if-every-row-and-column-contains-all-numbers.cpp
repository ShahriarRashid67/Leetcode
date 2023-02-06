class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<unordered_set<int>>row(n),col(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x=matrix[i][j];
                if(row[i].count(x)|| col[j].count(x)) return 0;
                row[i].insert(x);
                col[j].insert(x);
            }
        }
        return 1;
    }
};