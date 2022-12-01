class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
           for(int j=0;j<words[i].size();j++){
               if(words[i][j]!=s[j]){
                   break;
               }else if(j==(words[i].size()-1)){
                   cnt++;
               }
               
           }
        }
        return cnt;
    }
};