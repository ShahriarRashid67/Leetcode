class Solution {
public:
    int titleToNumber(string s) {
        int ans=0;
        int i=0;
        while(i<s.size()){
            ans=(ans*26)+(s[i]-'A'+1);
            i++;
        }
        return ans;
    }
};