class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string>zig(numRows);
        int dir=0;
        int row=0;
        for(int i=0;i<s.size();i++){
            zig[row].push_back(s[i]);
            if(row==numRows-1)dir=1;
            if(row==0) dir=0;
            if(dir) row--;
            else row++;
        }
        string zigzag="";
        for(auto x:zig){
            zigzag+=x;
        }
        return zigzag;
    }
};