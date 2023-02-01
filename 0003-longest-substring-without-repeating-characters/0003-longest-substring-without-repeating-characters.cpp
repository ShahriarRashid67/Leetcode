class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>freq(130,0);
        int L=0,R=0;
        int ans=0;
        while(R<s.size()){
            freq[s[R]]++;
            while(freq[s[R]]>1){
                freq[s[L]]--;
                L++;
            }
            ans=max(ans,(R-L)+1);
            R++;
        }
        return ans;
    }
};