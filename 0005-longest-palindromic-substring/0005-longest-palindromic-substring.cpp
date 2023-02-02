class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=0) return s;
        int mx=0;
        int start=0;
        int n=s.size();
        for(int i=0;i<s.size()-1;i++){
            int l=i,r=i;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--,r++;
                }else{
                break;
                }
            }
            int sz=r-l+1;
            if(sz>mx){
                mx=sz;
                start=l+1;
            }
        }
        for(int i=0;i<s.size()-1;i++){
            int l=i,r=i+1;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--,r++;
                }else{
                break;
                }
            }
            int sz=r-l+1;
            if(sz>mx){
                mx=sz;
                start=l+1;
            }
        }
       // cout<<mx<<" "<<start<<endl;
        return s.substr(start,mx-2);
    }
};