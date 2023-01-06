class Solution {
public:
    bool isVowel(char c){
        if(c<90) c^=32;
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return 1;
      return 0;  
    }
    string reverseVowels(string s) {
        int l=0,r=s.size()-1;
        while(l<r){
            while(l<r && !isVowel(s[l])){
                l++;
            }
            while(l<r && !isVowel(s[r])){
                r--;
            }
            if(isVowel(s[l]) && isVowel(s[r])){
                swap(s[l],s[r]);
                l++,r--;
            }
        }
        return s;
    }
};