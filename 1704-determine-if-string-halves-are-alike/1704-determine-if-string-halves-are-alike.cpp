class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt1=0;
        int cnt2=0;
        int n=s.size()/2;
        for(int i=0;i<n;i++){
            if(s[i]<'a'){
                s[i]^=32;
            }
            if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                cnt1++;
            }
        }
        for(int i=n;i<s.size();i++){
            if(s[i]<'a'){
                s[i]^=32;
            }
            if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                cnt2++;
            }
        }
        return cnt1==cnt2;
    }
};