class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>vc(130,0);
        for(auto c:s) vc[c]++;
        for(int i=0;i<s.size();i++){
            if(vc[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};