class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int L =0,R=0;
        int freq[256]={0};
        int maxLength=0;
        while(R<s.size()){
            freq[s[R]]++;
           
            while(freq[s[R]]!=1){
                freq[s[L]]--;
                L++;
            }
           maxLength=max(maxLength,R-L+1);
            R++;
        }
        return maxLength;
    }
};