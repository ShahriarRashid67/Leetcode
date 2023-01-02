class Solution {
public:
    bool detectCapitalUse(string word) {
        string s1=word,s2=word,s3;
        s1=word;
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        s2=word;
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        s3=s2;
        s3[0]^=32;
        
        return ((s1==word) || (s2==word) || (s3==word));
    }
};