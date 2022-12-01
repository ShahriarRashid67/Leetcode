class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        int sz=pref.size();
        for(int i=0;i<words.size();i++){
            string t=words[i].substr(0,sz);
            if(t==pref){
                cnt++;
            }
        }
      return cnt;
    }
};