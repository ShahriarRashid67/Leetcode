class Solution {
public:
    bool fun(int l,int r,string &s){
        set<char>st;
        for(int i=l;i<=r;i++){
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                st.insert(s[i]);
            }else{
                return 0;
            }
        }
        return st.size()==5;
    }
    int countVowelSubstrings(string word) {
        if(word.size()<5) return 0;
        int ans=0;
        for(int i=0;i<word.size()-4;i++){
            for(int j=i+4;j<word.size();j++){
                if(fun(i,j,word)){
                    ans++;
                }
            }
        }
        return ans;
    }
};