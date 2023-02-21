class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto &c:s){
            mp[c]++;
        }
        int t=0;
        int total=0;
        for(auto [c,fr]:mp){
            if(fr%2==0){
                total+=fr;
            }else{
                fr--;
                t=1;
                total+=fr;
            }
        }
        total+=t;
        return total;
    }
};