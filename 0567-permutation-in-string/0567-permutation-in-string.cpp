class Solution {
public:
    bool vcChecker(vector<int>a,vector<int>b){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
            return 0;
            }
        }
        return 1;
    }
    
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return 0;
      int n=s1.size();
      vector<int>freq1(26,0),freq2(26,0);
        for(int i=0;i<s1.size();i++)freq1[s1[i]-'a']++;
        int l=0,r=n;
        for(int i=0;i<n;i++){
            freq2[s2[i]-'a']++;
        }
        int ans=0;
         ans|=vcChecker(freq1,freq2);
        while(r<s2.size()){
           
            freq2[s2[r]-'a']++;
            freq2[s2[l]-'a']--;
             ans|=vcChecker(freq1,freq2);
            r++;l++;
        }
        return ans;
    }
};