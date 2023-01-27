class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string>vc(numRows);
        int r=0;
        int d=1;
        int u=0;
        for(int i=0;i<s.size();i++){
          vc[r].push_back(s[i]);
          if(r==0){
              d=1;
          }
          if(r==numRows-1){
              d=0;
          }
          if(d==1){
              r++;
          }else{
              r--;
          }  
        }
        string ans;
        for(auto x:vc){
            ans+=x;
        }
        return ans;
    }
};