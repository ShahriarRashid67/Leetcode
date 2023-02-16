class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int>frq(27,0);
        for(int i=0;i<word1.size();i++){
            frq[word1[i]-'a']++;
        }
        for(int i=0;i<word2.size();i++){
            frq[word2[i]-'a']--;
        }
        for(int i=0;i<27;i++){
            if(abs(frq[i])>3){
                return 0;
            }
        }
        return 1;
    }
};